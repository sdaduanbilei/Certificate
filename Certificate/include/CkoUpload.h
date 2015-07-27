// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Upload
// Wrapped Chilkat C++ class name =  CkUpload



@class CkoBaseProgress;

@interface CkoUpload : NSObject {

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

@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;

@property (nonatomic, copy) NSNumber *ChunkSize;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic) BOOL Expect100Continue;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *Hostname;

@property (nonatomic, copy) NSNumber *IdleTimeoutMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSString *Login;

@property (nonatomic, readonly, copy) NSNumber *NumBytesSent;
@property (nonatomic, copy) NSString *Password;

@property (nonatomic, copy) NSString *Path;

@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, readonly, copy) NSNumber *PercentUploaded;
@property (nonatomic, copy) NSNumber *Port;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic, copy) NSString *ProxyDomain;

@property (nonatomic, copy) NSString *ProxyLogin;

@property (nonatomic, copy) NSString *ProxyPassword;

@property (nonatomic, copy) NSNumber *ProxyPort;

@property (nonatomic, readonly, copy) NSData *ResponseBody;
@property (nonatomic, readonly, copy) NSString *ResponseHeader;
@property (nonatomic, readonly, copy) NSNumber *ResponseStatus;
@property (nonatomic) BOOL Ssl;

@property (nonatomic, readonly, copy) NSNumber *TotalUploadSize;
@property (nonatomic, readonly) BOOL UploadInProgress;
@property (nonatomic, readonly) BOOL UploadSuccess;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AbortUpload
- (void)AbortUpload;
// method: AddCustomHeader
- (void)AddCustomHeader: (NSString *)name 
	value: (NSString *)value;
// method: AddFileReference
- (void)AddFileReference: (NSString *)name 
	path: (NSString *)path;
// method: AddParam
- (void)AddParam: (NSString *)name 
	value: (NSString *)value;
// method: BeginUpload
- (BOOL)BeginUpload;
// method: BlockingUpload
- (BOOL)BlockingUpload;
// method: ClearFileReferences
- (void)ClearFileReferences;
// method: ClearParams
- (void)ClearParams;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: UploadToMemory
- (NSData *)UploadToMemory;

@end
