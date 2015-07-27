// Base class for CkoMailMan event callbacks.
// Applications can create a class that derives from this class.

#import "CkoBaseProgress.h"

@interface CkoMailManProgress : CkoBaseProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;


- (void)EmailReceived: (NSString *)subject
			    fromAddr: (NSString *)fromAddr
				fromName: (NSString *)fromName
			    returnPath: (NSString *)returnPath
			    dateTime: (NSString *)dateTime
			    uidl: (NSString *)uidl 
			    sizeInBytes: (NSNumber *)sizeInBytes;

@end
