// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.51

// Generic/internal class name =  Ftp2
// Wrapped Chilkat C++ class name =  CkFtp2

@class CkoDateTime;
@class CkoCert;


@class CkoFtp2Progress;

@interface CkoFtp2 : NSObject {

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
- (void)setEventCallbackObject: (CkoFtp2Progress *)eventObj;

@property (nonatomic, copy) NSString *Account;

@property (nonatomic, copy) NSNumber *ActivePortRangeEnd;

@property (nonatomic, copy) NSNumber *ActivePortRangeStart;

@property (nonatomic, copy) NSNumber *AllocateSize;

@property (nonatomic) BOOL AllowMlsd;

@property (nonatomic, readonly, copy) NSNumber *AsyncBytesReceived;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesReceived64;
@property (nonatomic, readonly, copy) NSString *AsyncBytesReceivedStr;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesSent;
@property (nonatomic, readonly, copy) NSNumber *AsyncBytesSent64;
@property (nonatomic, readonly, copy) NSString *AsyncBytesSentStr;
@property (nonatomic, readonly) BOOL AsyncFinished;
@property (nonatomic, readonly, copy) NSString *AsyncLog;
@property (nonatomic, readonly, copy) NSNumber *AsyncPercentDone;
@property (nonatomic, readonly) BOOL AsyncSuccess;
@property (nonatomic) BOOL AuthSsl;

@property (nonatomic) BOOL AuthTls;

@property (nonatomic) BOOL AutoFeat;

@property (nonatomic) BOOL AutoFix;

@property (nonatomic) BOOL AutoGetSizeForProgress;

@property (nonatomic) BOOL AutoOptsUtf8;

@property (nonatomic) BOOL AutoSetUseEpsv;

@property (nonatomic) BOOL AutoSyst;

@property (nonatomic) BOOL AutoXcrc;

@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;

@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSString *CommandCharset;

@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSNumber *ConnectTimeout;

@property (nonatomic, readonly) BOOL ConnectVerified;
@property (nonatomic, copy) NSNumber *CrlfMode;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *DirListingCharset;

@property (nonatomic, readonly, copy) NSNumber *DownloadTransferRate;
@property (nonatomic, copy) NSString *ForcePortIpAddress;

@property (nonatomic, readonly, copy) NSString *Greeting;
@property (nonatomic, readonly) BOOL HasModeZ;
@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *Hostname;

@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic, copy) NSNumber *IdleTimeoutMs;

@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepSessionLog;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastReply;
@property (nonatomic, copy) NSString *ListPattern;

@property (nonatomic, readonly) BOOL LoginVerified;
@property (nonatomic, readonly, copy) NSNumber *NumFilesAndDirs;
@property (nonatomic, readonly) BOOL PartialTransfer;
@property (nonatomic) BOOL Passive;

@property (nonatomic) BOOL PassiveUseHostAddr;

@property (nonatomic, copy) NSString *Password;

@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, copy) NSNumber *Port;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic) BOOL PreferNlst;

@property (nonatomic, copy) NSNumber *ProgressMonSize;

@property (nonatomic, copy) NSNumber *ProgressMonSize64;

@property (nonatomic, copy) NSString *ProxyHostname;

@property (nonatomic, copy) NSNumber *ProxyMethod;

@property (nonatomic, copy) NSString *ProxyPassword;

@property (nonatomic, copy) NSNumber *ProxyPort;

@property (nonatomic, copy) NSString *ProxyUsername;

@property (nonatomic, copy) NSNumber *ReadTimeout;

@property (nonatomic) BOOL RequireSslCertVerify;

@property (nonatomic) BOOL RestartNext;

@property (nonatomic, copy) NSNumber *SendBufferSize;

@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic) BOOL SkipFinalReply;

@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic) BOOL Ssl;

@property (nonatomic, copy) NSString *SslAllowedCiphers;

@property (nonatomic, copy) NSString *SslProtocol;

@property (nonatomic, readonly) BOOL SslServerCertVerified;
@property (nonatomic, copy) NSString *SyncMustMatch;

@property (nonatomic, copy) NSString *SyncMustNotMatch;

@property (nonatomic, readonly, copy) NSString *SyncPreview;
@property (nonatomic, copy) NSString *SyncedFiles;

@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic, readonly, copy) NSNumber *UploadTransferRate;
@property (nonatomic) BOOL UseEpsv;

@property (nonatomic, copy) NSString *Username;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AppendFile
- (BOOL)AppendFile: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: AppendFileFromBinaryData
- (BOOL)AppendFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: AppendFileFromTextData
- (BOOL)AppendFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: AsyncAbort
- (void)AsyncAbort;
// method: AsyncAppendFileStart
- (BOOL)AsyncAppendFileStart: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: AsyncGetFileStart
- (BOOL)AsyncGetFileStart: (NSString *)remoteFilename 
	localFilename: (NSString *)localFilename;
// method: AsyncPutFileStart
- (BOOL)AsyncPutFileStart: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: ChangeRemoteDir
- (BOOL)ChangeRemoteDir: (NSString *)relativeDirPath;
// method: CheckConnection
- (BOOL)CheckConnection;
// method: ClearControlChannel
- (BOOL)ClearControlChannel;
// method: ClearDirCache
- (void)ClearDirCache;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: Connect
- (BOOL)Connect;
// method: ConnectOnly
- (BOOL)ConnectOnly;
// method: ConvertToTls
- (BOOL)ConvertToTls;
// method: CreatePlan
- (NSString *)CreatePlan: (NSString *)localDir;
// method: CreateRemoteDir
- (BOOL)CreateRemoteDir: (NSString *)dir;
// method: DeleteMatching
- (NSNumber *)DeleteMatching: (NSString *)remotePattern;
// method: DeleteRemoteFile
- (BOOL)DeleteRemoteFile: (NSString *)filename;
// method: DeleteTree
- (BOOL)DeleteTree;
// method: DetermineProxyMethod
- (NSNumber *)DetermineProxyMethod;
// method: DetermineSettings
- (NSString *)DetermineSettings;
// method: DirTreeXml
- (NSString *)DirTreeXml;
// method: Disconnect
- (BOOL)Disconnect;
// method: DownloadTree
- (BOOL)DownloadTree: (NSString *)localRoot;
// method: Feat
- (NSString *)Feat;
// method: GetCreateDt
- (CkoDateTime *)GetCreateDt: (NSNumber *)index;
// method: GetCreateDtByName
- (CkoDateTime *)GetCreateDtByName: (NSString *)filename;
// method: GetCreateTime
- (NSDate *)GetCreateTime: (NSNumber *)index;
// method: GetCreateTimeByName
- (NSDate *)GetCreateTimeByName: (NSString *)filename;
// method: GetCreateTimeByNameStr
- (NSString *)GetCreateTimeByNameStr: (NSString *)filename;
// method: GetCreateTimeStr
- (NSString *)GetCreateTimeStr: (NSNumber *)index;
// method: GetCurrentRemoteDir
- (NSString *)GetCurrentRemoteDir;
// method: GetDirCount
- (NSNumber *)GetDirCount;
// method: GetFile
- (BOOL)GetFile: (NSString *)remoteFilename 
	localPath: (NSString *)localPath;
// method: GetFilename
- (NSString *)GetFilename: (NSNumber *)index;
// method: GetGroup
- (NSString *)GetGroup: (NSNumber *)index;
// method: GetIsDirectory
- (BOOL)GetIsDirectory: (NSNumber *)index;
// method: GetIsSymbolicLink
- (BOOL)GetIsSymbolicLink: (NSNumber *)index;
// method: GetLastAccessDt
- (CkoDateTime *)GetLastAccessDt: (NSNumber *)index;
// method: GetLastAccessDtByName
- (CkoDateTime *)GetLastAccessDtByName: (NSString *)filename;
// method: GetLastAccessTime
- (NSDate *)GetLastAccessTime: (NSNumber *)index;
// method: GetLastAccessTimeByName
- (NSDate *)GetLastAccessTimeByName: (NSString *)filename;
// method: GetLastAccessTimeByNameStr
- (NSString *)GetLastAccessTimeByNameStr: (NSString *)filename;
// method: GetLastAccessTimeStr
- (NSString *)GetLastAccessTimeStr: (NSNumber *)index;
// method: GetLastModDt
- (CkoDateTime *)GetLastModDt: (NSNumber *)index;
// method: GetLastModDtByName
- (CkoDateTime *)GetLastModDtByName: (NSString *)filename;
// method: GetLastModifiedTime
- (NSDate *)GetLastModifiedTime: (NSNumber *)index;
// method: GetLastModifiedTimeByName
- (NSDate *)GetLastModifiedTimeByName: (NSString *)filename;
// method: GetLastModifiedTimeByNameStr
- (NSString *)GetLastModifiedTimeByNameStr: (NSString *)filename;
// method: GetLastModifiedTimeStr
- (NSString *)GetLastModifiedTimeStr: (NSNumber *)index;
// method: GetOwner
- (NSString *)GetOwner: (NSNumber *)index;
// method: GetPermType
- (NSString *)GetPermType: (NSNumber *)index;
// method: GetPermissions
- (NSString *)GetPermissions: (NSNumber *)index;
// method: GetRemoteFileBinaryData
- (NSData *)GetRemoteFileBinaryData: (NSString *)remoteFilename;
// method: GetRemoteFileTextC
- (NSString *)GetRemoteFileTextC: (NSString *)remoteFilename 
	charset: (NSString *)charset;
// method: GetRemoteFileTextData
- (NSString *)GetRemoteFileTextData: (NSString *)remoteFilename;
// method: GetSize
- (NSNumber *)GetSize: (NSNumber *)index;
// method: GetSize64
- (NSNumber *)GetSize64: (NSNumber *)index;
// method: GetSizeByName
- (NSNumber *)GetSizeByName: (NSString *)filname;
// method: GetSizeByName64
- (NSNumber *)GetSizeByName64: (NSString *)filename;
// method: GetSizeStr
- (NSString *)GetSizeStr: (NSNumber *)index;
// method: GetSizeStrByName
- (NSString *)GetSizeStrByName: (NSString *)filename;
// method: GetSslServerCert
- (CkoCert *)GetSslServerCert;
// method: GetTextDirListing
- (NSString *)GetTextDirListing: (NSString *)pattern;
// method: GetXmlDirListing
- (NSString *)GetXmlDirListing: (NSString *)pattern;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LoginAfterConnectOnly
- (BOOL)LoginAfterConnectOnly;
// method: MGetFiles
- (NSNumber *)MGetFiles: (NSString *)remotePattern 
	localDir: (NSString *)localDir;
// method: MPutFiles
- (NSNumber *)MPutFiles: (NSString *)pattern;
// method: NlstXml
- (NSString *)NlstXml: (NSString *)pattern;
// method: Noop
- (BOOL)Noop;
// method: PutFile
- (BOOL)PutFile: (NSString *)localPath 
	remoteFilename: (NSString *)remoteFilename;
// method: PutFileFromBinaryData
- (BOOL)PutFileFromBinaryData: (NSString *)remoteFilename 
	binaryData: (NSData *)binaryData;
// method: PutFileFromTextData
- (BOOL)PutFileFromTextData: (NSString *)remoteFilename 
	textData: (NSString *)textData 
	charset: (NSString *)charset;
// method: PutPlan
- (BOOL)PutPlan: (NSString *)planUtf8 
	planLogFilePath: (NSString *)planLogFilePath;
// method: PutTree
- (BOOL)PutTree: (NSString *)localDir;
// method: Quote
- (BOOL)Quote: (NSString *)cmd;
// method: RemoveRemoteDir
- (BOOL)RemoveRemoteDir: (NSString *)dir;
// method: RenameRemoteFile
- (BOOL)RenameRemoteFile: (NSString *)existingFilename 
	newFilename: (NSString *)newFilename;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendCommand
- (NSString *)SendCommand: (NSString *)cmd;
// method: SetModeZ
- (BOOL)SetModeZ;
// method: SetOldestDate
- (void)SetOldestDate: (NSDate *)oldestDateTime;
// method: SetOldestDateStr
- (void)SetOldestDateStr: (NSString *)oldestDateTimeStr;
// method: SetRemoteFileDateTime
- (BOOL)SetRemoteFileDateTime: (NSDate *)dateTime 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDateTimeStr
- (BOOL)SetRemoteFileDateTimeStr: (NSString *)dateTimeStr 
	remoteFilename: (NSString *)remoteFilename;
// method: SetRemoteFileDt
- (BOOL)SetRemoteFileDt: (CkoDateTime *)dt 
	remoteFilename: (NSString *)remoteFilename;
// method: SetSslCertRequirement
- (void)SetSslCertRequirement: (NSString *)name 
	value: (NSString *)value;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrFilename 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SetTypeAscii
- (BOOL)SetTypeAscii;
// method: SetTypeBinary
- (BOOL)SetTypeBinary;
// method: Site
- (BOOL)Site: (NSString *)siteCommand;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: Stat
- (NSString *)Stat;
// method: SyncDeleteRemote
- (BOOL)SyncDeleteRemote: (NSString *)localRoot;
// method: SyncLocalDir
- (BOOL)SyncLocalDir: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncLocalTree
- (BOOL)SyncLocalTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncRemoteTree
- (BOOL)SyncRemoteTree: (NSString *)localRoot 
	mode: (NSNumber *)mode;
// method: SyncRemoteTree2
- (BOOL)SyncRemoteTree2: (NSString *)localRoot 
	mode: (NSNumber *)mode 
	bDescend: (BOOL)bDescend 
	bPreviewOnly: (BOOL)bPreviewOnly;
// method: Syst
- (NSString *)Syst;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;

@end
