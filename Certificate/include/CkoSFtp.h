// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.51

// Generic/internal class name =  SFtp
// Wrapped Chilkat C++ class name =  CkSFtp

@class CkoSshKey;
@class CkoDateTime;
@class CkoSFtpDir;


@class CkoSFtpProgress;

@interface CkoSFtp : NSObject {

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
- (void)setEventCallbackObject: (CkoSFtpProgress *)eventObj;

@property (nonatomic, readonly, copy) NSData *AccumulateBuffer;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;

@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;

@property (nonatomic, copy) NSString *ClientIdentifier;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSNumber *ConnectTimeoutMs;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSNumber *DisconnectCode;
@property (nonatomic, readonly, copy) NSString *DisconnectReason;
@property (nonatomic) BOOL EnableCache;

@property (nonatomic, copy) NSString *FilenameCharset;

@property (nonatomic, copy) NSString *ForceCipher;

@property (nonatomic) BOOL ForceV3;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *HostKeyAlg;

@property (nonatomic, readonly, copy) NSString *HostKeyFingerprint;
@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic, copy) NSNumber *IdleTimeoutMs;

@property (nonatomic) BOOL IncludeDotDirs;

@property (nonatomic, readonly, copy) NSNumber *InitializeFailCode;
@property (nonatomic, readonly, copy) NSString *InitializeFailReason;
@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepSessionLog;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSNumber *MaxPacketSize;

@property (nonatomic, readonly) BOOL PasswordChangeRequested;
@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic) BOOL PreserveDate;

@property (nonatomic, readonly, copy) NSNumber *ProtocolVersion;
@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic, copy) NSString *SyncMustMatch;

@property (nonatomic, copy) NSString *SyncMustNotMatch;

@property (nonatomic, copy) NSString *SyncedFiles;

@property (nonatomic) BOOL TcpNoDelay;

@property (nonatomic, copy) NSNumber *UploadChunkSize;

@property (nonatomic) BOOL UtcMode;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AccumulateBytes
- (NSNumber *)AccumulateBytes: (NSString *)sftpHandle 
	maxBytes: (NSNumber *)maxBytes;
// method: Add64
- (NSString *)Add64: (NSString *)n1 
	n2: (NSString *)n2;
// method: AuthenticatePk
- (BOOL)AuthenticatePk: (NSString *)username 
	privateKey: (CkoSshKey *)privateKey;
// method: AuthenticatePw
- (BOOL)AuthenticatePw: (NSString *)login 
	password: (NSString *)password;
// method: AuthenticatePwPk
- (BOOL)AuthenticatePwPk: (NSString *)username 
	password: (NSString *)password 
	privateKey: (CkoSshKey *)privateKey;
// method: ClearAccumulateBuffer
- (void)ClearAccumulateBuffer;
// method: ClearCache
- (void)ClearCache;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: CloseHandle
- (BOOL)CloseHandle: (NSString *)sftpHandle;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;
// method: CopyFileAttr
- (BOOL)CopyFileAttr: (NSString *)localFilePath 
	remotePathOrHandle: (NSString *)remotePathOrHandle 
	bIsHandle: (BOOL)bIsHandle;
// method: CreateDir
- (BOOL)CreateDir: (NSString *)path;
// method: Disconnect
- (void)Disconnect;
// method: DownloadFile
- (BOOL)DownloadFile: (NSString *)sftpHandle 
	toFilePath: (NSString *)toFilePath;
// method: DownloadFileByName
- (BOOL)DownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: Eof
- (BOOL)Eof: (NSString *)sftpHandle;
// method: GetFileCreateDt
- (CkoDateTime *)GetFileCreateDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateTime
- (NSDate *)GetFileCreateTime: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileCreateTimeStr
- (NSString *)GetFileCreateTimeStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileGroup
- (NSString *)GetFileGroup: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccess
- (NSDate *)GetFileLastAccess: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessDt
- (CkoDateTime *)GetFileLastAccessDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastAccessStr
- (NSString *)GetFileLastAccessStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModified
- (NSDate *)GetFileLastModified: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedDt
- (CkoDateTime *)GetFileLastModifiedDt: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileLastModifiedStr
- (NSString *)GetFileLastModifiedStr: (NSString *)pathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileOwner
- (NSString *)GetFileOwner: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFilePermissions
- (NSNumber *)GetFilePermissions: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: GetFileSize64
- (NSNumber *)GetFileSize64: (NSString *)filePathOrHandle 
	bFollowLinks: (BOOL)bFollowLinks 
	bIsHandle: (BOOL)bIsHandle;
// method: InitializeSftp
- (BOOL)InitializeSftp;
// method: LastReadFailed
- (BOOL)LastReadFailed: (NSString *)sftpHandle;
// method: LastReadNumBytes
- (NSNumber *)LastReadNumBytes: (NSString *)sftpHandle;
// method: OpenDir
- (NSString *)OpenDir: (NSString *)path;
// method: OpenFile
- (NSString *)OpenFile: (NSString *)filePath 
	access: (NSString *)access 
	createDisp: (NSString *)createDisp;
// method: ReadDir
- (CkoSFtpDir *)ReadDir: (NSString *)sftpHandle;
// method: ReadFileBytes
- (NSData *)ReadFileBytes: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes;
// method: ReadFileBytes64
- (NSData *)ReadFileBytes64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes;
// method: ReadFileText
- (NSString *)ReadFileText: (NSString *)sftpHandle 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;
// method: ReadFileText64
- (NSString *)ReadFileText64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	numBytes: (NSNumber *)numBytes 
	charset: (NSString *)charset;
// method: RealPath
- (NSString *)RealPath: (NSString *)originalPath 
	composePath: (NSString *)composePath;
// method: RemoveDir
- (BOOL)RemoveDir: (NSString *)path;
// method: RemoveFile
- (BOOL)RemoveFile: (NSString *)filePath;
// method: RenameFileOrDir
- (BOOL)RenameFileOrDir: (NSString *)oldPath 
	newPath: (NSString *)newPath;
// method: ResumeDownloadFileByName
- (BOOL)ResumeDownloadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: ResumeUploadFileByName
- (BOOL)ResumeUploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetCreateDt
- (BOOL)SetCreateDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetCreateTime
- (BOOL)SetCreateTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (NSDate *)createTime;
// method: SetCreateTimeStr
- (BOOL)SetCreateTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastAccessDt
- (BOOL)SetLastAccessDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastAccessTime
- (BOOL)SetLastAccessTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastAccessTime: (NSDate *)lastAccessTime;
// method: SetLastAccessTimeStr
- (BOOL)SetLastAccessTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetLastModifiedDt
- (BOOL)SetLastModifiedDt: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTime: (CkoDateTime *)createTime;
// method: SetLastModifiedTime
- (BOOL)SetLastModifiedTime: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	lastModTime: (NSDate *)lastModTime;
// method: SetLastModifiedTimeStr
- (BOOL)SetLastModifiedTimeStr: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	createTimeStr: (NSString *)createTimeStr;
// method: SetOwnerAndGroup
- (BOOL)SetOwnerAndGroup: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	owner: (NSString *)owner 
	group: (NSString *)group;
// method: SetPermissions
- (BOOL)SetPermissions: (NSString *)pathOrHandle 
	bIsHandle: (BOOL)bIsHandle 
	perm: (NSNumber *)perm;
// method: SyncTreeDownload
- (BOOL)SyncTreeDownload: (NSString *)remoteRoot 
	localRoot: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	recurse: (BOOL)recurse;
// method: SyncTreeUpload
- (BOOL)SyncTreeUpload: (NSString *)localBaseDir 
	remoteBaseDir: (NSString *)remoteBaseDir 
	mode: (NSNumber *)mode 
	bRecurse: (BOOL)bRecurse;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UploadFile
- (BOOL)UploadFile: (NSString *)sftpHandle 
	fromFilePath: (NSString *)fromFilePath;
// method: UploadFileByName
- (BOOL)UploadFileByName: (NSString *)remoteFilePath 
	localFilePath: (NSString *)localFilePath;
// method: WriteFileBytes
- (BOOL)WriteFileBytes: (NSString *)sftpHandle 
	data: (NSData *)data;
// method: WriteFileBytes64
- (BOOL)WriteFileBytes64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	data: (NSData *)data;
// method: WriteFileText
- (BOOL)WriteFileText: (NSString *)sftpHandle 
	charset: (NSString *)charset 
	textData: (NSString *)textData;
// method: WriteFileText64
- (BOOL)WriteFileText64: (NSString *)sftpHandle 
	offset64: (NSNumber *)offset64 
	charset: (NSString *)charset 
	textData: (NSString *)textData;

@end
