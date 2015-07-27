// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  UnixCompress
// Wrapped Chilkat C++ class name =  CkUnixCompress



@class CkoBaseProgress;

@interface CkoUnixCompress : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CompressFile
- (BOOL)CompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressFileToMem
- (NSData *)CompressFileToMem: (NSString *)srcPath;
// method: CompressMemToFile
- (BOOL)CompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: CompressMemory
- (NSData *)CompressMemory: (NSData *)dbIn;
// method: CompressString
- (NSData *)CompressString: (NSString *)inStr 
	charset: (NSString *)charset;
// method: CompressStringToFile
- (BOOL)CompressStringToFile: (NSString *)inStr 
	charset: (NSString *)charset 
	destPath: (NSString *)destPath;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnTarZ
- (BOOL)UnTarZ: (NSString *)zPath 
	destDir: (NSString *)destDir 
	bNoAbsolute: (BOOL)bNoAbsolute;
// method: UncompressFile
- (BOOL)UncompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: UncompressFileToMem
- (NSData *)UncompressFileToMem: (NSString *)srcPath;
// method: UncompressFileToString
- (NSString *)UncompressFileToString: (NSString *)srcPath 
	inCharset: (NSString *)inCharset;
// method: UncompressMemToFile
- (BOOL)UncompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: UncompressMemory
- (NSData *)UncompressMemory: (NSData *)dbIn;
// method: UncompressString
- (NSString *)UncompressString: (NSData *)inData 
	inCharset: (NSString *)inCharset;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
