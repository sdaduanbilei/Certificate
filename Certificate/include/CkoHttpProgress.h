// Base class for CkoHttp event callbacks.
// Applications can create a class that derives from this class.
#import "CkoBaseProgress.h"

@interface CkoHttpProgress : CkoBaseProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;


- (void)HttpRedirect: (NSString *)originalUrl
	redirectUrl: (NSString *)redirectUrl
	abort: (BOOL *)abort;

- (void)HttpChunked;

- (void)HttpBeginReceive;
- (void)HttpEndReceive: (BOOL)success;
- (void)HttpBeginSend;
- (void)HttpEndSend: (BOOL)success;

- (void)ReceiveRate: (NSNumber *)byteCount
	bytesPerSec: (NSNumber *)bytesPerSec;
- (void)SendRate: (NSNumber *)byteCount
	bytesPerSec: (NSNumber *)bytesPerSec;

@end
