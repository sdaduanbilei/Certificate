// Base class for CkoZip event callbacks.
// Applications can create a class that derives from this class.

#import "CkoBaseProgress.h"

@interface CkoZipProgress : CkoBaseProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;

- (void)ToBeAdded: (NSString *)fileName
	fileSize: (NSNumber *)fileSize
	excludeFlag: (BOOL *)excludeFlag;

- (void)DirToBeAdded: (NSString *)fileName
	excludeFlag: (BOOL *)excludeFlag;

- (void)FileAdded: (NSString *)fileName
	fileSize: (NSNumber *)fileSize
	abort: (BOOL *)abort;

- (void)ToBeZipped: (NSString *)fileName
	fileSize: (NSNumber *)fileSize
	abort: (BOOL *)abort;

- (void)FileZipped: (NSString *)fileName
	fileSize: (NSNumber *)fileSize
	compressedSize: (NSNumber *)compressedSize
	abort: (BOOL *)abort;

- (void)ToBeUnzipped: (NSString *)fileName
	compressedSize: (NSNumber *)compressedSize
	fileSize: (NSNumber *)fileSize
	isDirectory: (BOOL)isDirectory
	abort: (BOOL *)abort;

- (void)FileUnzipped: (NSString *)fileName
	compressedSize: (NSNumber *)compressedSize
	fileSize: (NSNumber *)fileSize
	isDirectory: (BOOL)isDirectory
	abort: (BOOL *)abort;

- (void)SkippedForUnzip: (NSString *)fileName
	compressedSize: (NSNumber *)compressedSize
	fileSize: (NSNumber *)fileSize
	isDirectory: (BOOL)isDirectory;

- (void)AddFilesBegin;
- (void)AddFilesEnd;
- (void)WriteZipBegin;
- (void)WriteZipEnd;
- (void)UnzipBegin;
- (void)UnzipEnd;

@end
