// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.51

// Generic/internal class name =  Scp
// Wrapped Chilkat C++ class name =  CkScp

@class CkoSsh;


@class CkoBaseProgress;

@interface CkoScp : NSObject {

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
@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, copy) NSString *SyncMustMatch;

@property (nonatomic, copy) NSString *SyncMustNotMatch;

@property (nonatomic, copy) NSString *SyncedFiles;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: DownloadBinary
- (NSData *)DownloadBinary: (NSString *)remotePath;
// method: DownloadBinaryEncoded
- (NSString *)DownloadBinaryEncoded: (NSString *)remotePath 
	encoding: (NSString *)encoding;
// method: DownloadFile
- (BOOL)DownloadFile: (NSString *)remotePath 
	localPath: (NSString *)localPath;
// method: DownloadString
- (NSString *)DownloadString: (NSString *)remotePath 
	charset: (NSString *)charset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SyncTreeDownload
- (BOOL)SyncTreeDownload: (NSString *)remoteRoot 
	localRoot: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	bRecurse: (BOOL)bRecurse;
// method: SyncTreeUpload
- (BOOL)SyncTreeUpload: (NSString *)localBaseDir 
	remoteBaseDir: (NSString *)remoteBaseDir 
	mode: (NSNumber *)mode 
	bRecurse: (BOOL)bRecurse;
// method: UploadBinary
- (BOOL)UploadBinary: (NSString *)remotePath 
	binData: (NSData *)binData;
// method: UploadBinaryEncoded
- (BOOL)UploadBinaryEncoded: (NSString *)remotePath 
	encodedData: (NSString *)encodedData 
	encoding: (NSString *)encoding;
// method: UploadFile
- (BOOL)UploadFile: (NSString *)localPath 
	remotePath: (NSString *)remotePath;
// method: UploadString
- (BOOL)UploadString: (NSString *)remotePath 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: UseSsh
- (BOOL)UseSsh: (CkoSsh *)sshConnection;

@end
