// Base class for CkoTar event callbacks.
// Applications can create a class that derives from this class.
	
#import "CkoBaseProgress.h"
	
@interface CkoTarProgress : CkoBaseProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;


- (void)NextTarFile: (NSString *)fileName 
	fileSize: (NSNumber *)fileSize
	bIsDirectory: (BOOL)bIsDirectory 
	skip: (BOOL *)skip;


@end
