// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Cgi
// Wrapped Chilkat C++ class name =  CkCgi



@interface CkoCgi : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSNumber *AsyncBytesRead;
@property (nonatomic, readonly) BOOL AsyncInProgress;
@property (nonatomic, readonly, copy) NSNumber *AsyncPostSize;
@property (nonatomic, readonly) BOOL AsyncSuccess;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSNumber *IdleTimeoutMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumParams;
@property (nonatomic, readonly, copy) NSNumber *NumUploadFiles;
@property (nonatomic, copy) NSNumber *ReadChunkSize;

@property (nonatomic, copy) NSNumber *SizeLimitKB;

@property (nonatomic) BOOL StreamToUploadDir;

@property (nonatomic, copy) NSString *UploadDir;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AbortAsync
- (void)AbortAsync;
// method: GetEnv
- (NSString *)GetEnv: (NSString *)varName;
// method: GetParam
- (NSString *)GetParam: (NSString *)paramName;
// method: GetParamName
- (NSString *)GetParamName: (NSNumber *)index;
// method: GetParamValue
- (NSString *)GetParamValue: (NSNumber *)index;
// method: GetRawPostData
- (NSData *)GetRawPostData;
// method: GetUploadData
- (NSData *)GetUploadData: (NSNumber *)index;
// method: GetUploadFilename
- (NSString *)GetUploadFilename: (NSNumber *)index;
// method: GetUploadSize
- (NSNumber *)GetUploadSize: (NSNumber *)index;
// method: IsGet
- (BOOL)IsGet;
// method: IsHead
- (BOOL)IsHead;
// method: IsPost
- (BOOL)IsPost;
// method: IsUpload
- (BOOL)IsUpload;
// method: ReadRequest
- (BOOL)ReadRequest;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveNthToUploadDir
- (BOOL)SaveNthToUploadDir: (NSNumber *)index;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: TestConsumeAspUpload
- (BOOL)TestConsumeAspUpload: (NSString *)path;

@end
