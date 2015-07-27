// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Bz2
// Wrapped Chilkat C++ class name =  CkBz2



@class CkoBaseProgress;

@interface CkoBz2 : NSObject {

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
- (BOOL)CompressFile: (NSString *)inPath 
	toPath: (NSString *)toPath;
// method: CompressFileToMem
- (NSData *)CompressFileToMem: (NSString *)inPath;
// method: CompressMemToFile
- (BOOL)CompressMemToFile: (NSData *)inData 
	toPath: (NSString *)toPath;
// method: CompressMemory
- (NSData *)CompressMemory: (NSData *)inData;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UncompressFile
- (BOOL)UncompressFile: (NSString *)inPath 
	toPath: (NSString *)toPath;
// method: UncompressFileToMem
- (NSData *)UncompressFileToMem: (NSString *)inPath;
// method: UncompressMemToFile
- (BOOL)UncompressMemToFile: (NSData *)inData 
	toPath: (NSString *)toPath;
// method: UncompressMemory
- (NSData *)UncompressMemory: (NSData *)inData;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
