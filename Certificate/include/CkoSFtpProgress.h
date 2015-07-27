// Base class for CkoSFtp event callbacks.
// Applications can create a class that derives from this class.

#import "CkoBaseProgress.h"

@interface CkoSFtpProgress : CkoBaseProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;



- (void)UploadRate: (NSNumber *)byteCount
	bytesPerSec: (NSNumber *)bytesPerSec;

- (void)DownloadRate: (NSNumber *)byteCount
	bytesPerSec: (NSNumber *)bytesPerSec;


@end
