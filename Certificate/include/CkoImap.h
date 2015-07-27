// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Imap
// Wrapped Chilkat C++ class name =  CkImap

@class CkoEmail;
@class CkoMessageSet;
@class CkoEmailBundle;
@class CkoStringArray;
@class CkoCert;
@class CkoMailboxes;
@class CkoPrivateKey;
@class CkoSshKey;
@class CkoXmlCertVault;
@class CkoSocket;


@class CkoBaseProgress;

@interface CkoImap : NSObject {

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

@property (nonatomic) BOOL AppendSeen;

@property (nonatomic, readonly, copy) NSNumber *AppendUid;
@property (nonatomic, copy) NSString *AuthMethod;

@property (nonatomic, copy) NSString *AuthzId;

@property (nonatomic) BOOL AutoDownloadAttachments;

@property (nonatomic) BOOL AutoFix;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSNumber *ConnectTimeout;

@property (nonatomic, readonly, copy) NSString *ConnectedToHost;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *Domain;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic) BOOL KeepSessionLog;

@property (nonatomic, readonly, copy) NSString *LastAppendedMime;
@property (nonatomic, readonly, copy) NSString *LastCommand;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastIntermediateResponse;
@property (nonatomic, readonly, copy) NSString *LastResponse;
@property (nonatomic, readonly, copy) NSString *LastResponseCode;
@property (nonatomic, readonly, copy) NSString *LoggedInUser;
@property (nonatomic, readonly, copy) NSNumber *NumMessages;
@property (nonatomic) BOOL PeekMode;

@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, copy) NSNumber *Port;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic, copy) NSNumber *ReadTimeout;

@property (nonatomic) BOOL RequireSslCertVerify;

@property (nonatomic, copy) NSString *SearchCharset;

@property (nonatomic, readonly, copy) NSString *SelectedMailbox;
@property (nonatomic, copy) NSNumber *SendBufferSize;

@property (nonatomic, copy) NSString *SeparatorChar;

@property (nonatomic, readonly, copy) NSString *SessionLog;
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
@property (nonatomic) BOOL StartTls;

@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic, readonly, copy) NSNumber *UidNext;
@property (nonatomic, readonly, copy) NSNumber *UidValidity;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddPfxSourceData
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;
// method: AddPfxSourceFile
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;
// method: AppendMail
- (BOOL)AppendMail: (NSString *)mailbox 
	email: (CkoEmail *)email;
// method: AppendMime
- (BOOL)AppendMime: (NSString *)mailbox 
	mimeText: (NSString *)mimeText;
// method: AppendMimeWithDate
- (BOOL)AppendMimeWithDate: (NSString *)mailbox 
	mimeText: (NSString *)mimeText 
	internalDate: (NSDate *)internalDate;
// method: AppendMimeWithDateStr
- (BOOL)AppendMimeWithDateStr: (NSString *)mailbox 
	mimeText: (NSString *)mimeText 
	internalDateStr: (NSString *)internalDateStr;
// method: AppendMimeWithFlags
- (BOOL)AppendMimeWithFlags: (NSString *)mailbox 
	mimeText: (NSString *)mimeText 
	seen: (BOOL)seen 
	flagged: (BOOL)flagged 
	answered: (BOOL)answered 
	draft: (BOOL)draft;
// method: Capability
- (NSString *)Capability;
// method: CheckConnection
- (BOOL)CheckConnection;
// method: CheckForNewEmail
- (CkoMessageSet *)CheckForNewEmail;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: CloseMailbox
- (BOOL)CloseMailbox: (NSString *)mailbox;
// method: Connect
- (BOOL)Connect: (NSString *)hostname;
// method: Copy
- (BOOL)Copy: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	copyToMailbox: (NSString *)copyToMailbox;
// method: CopyMultiple
- (BOOL)CopyMultiple: (CkoMessageSet *)messageSet 
	copyToMailbox: (NSString *)copyToMailbox;
// method: CopySequence
- (BOOL)CopySequence: (NSNumber *)startSeqNum 
	count: (NSNumber *)count 
	copyToMailbox: (NSString *)copyToMailbox;
// method: CreateMailbox
- (BOOL)CreateMailbox: (NSString *)mailbox;
// method: DeleteMailbox
- (BOOL)DeleteMailbox: (NSString *)mailbox;
// method: Disconnect
- (BOOL)Disconnect;
// method: ExamineMailbox
- (BOOL)ExamineMailbox: (NSString *)mailbox;
// method: Expunge
- (BOOL)Expunge;
// method: ExpungeAndClose
- (BOOL)ExpungeAndClose;
// method: FetchAttachment
- (BOOL)FetchAttachment: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex 
	saveToPath: (NSString *)saveToPath;
// method: FetchAttachmentBytes
- (NSData *)FetchAttachmentBytes: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex;
// method: FetchAttachmentString
- (NSString *)FetchAttachmentString: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex 
	charset: (NSString *)charset;
// method: FetchBundle
- (CkoEmailBundle *)FetchBundle: (CkoMessageSet *)messageSet;
// method: FetchBundleAsMime
- (CkoStringArray *)FetchBundleAsMime: (CkoMessageSet *)messageSet;
// method: FetchChunk
- (CkoEmailBundle *)FetchChunk: (NSNumber *)startSeqNum 
	count: (NSNumber *)count 
	failedSet: (CkoMessageSet *)failedSet 
	fetchedSet: (CkoMessageSet *)fetchedSet;
// method: FetchFlags
- (NSString *)FetchFlags: (NSNumber *)msgId 
	bUid: (BOOL)bUid;
// method: FetchHeaders
- (CkoEmailBundle *)FetchHeaders: (CkoMessageSet *)messageSet;
// method: FetchSequence
- (CkoEmailBundle *)FetchSequence: (NSNumber *)startSeqNum 
	numMessages: (NSNumber *)numMessages;
// method: FetchSequenceAsMime
- (CkoStringArray *)FetchSequenceAsMime: (NSNumber *)startSeqNum 
	count: (NSNumber *)count;
// method: FetchSequenceHeaders
- (CkoEmailBundle *)FetchSequenceHeaders: (NSNumber *)startSeqNum 
	numMessages: (NSNumber *)numMessages;
// method: FetchSingle
- (CkoEmail *)FetchSingle: (NSNumber *)msgId 
	bUid: (BOOL)bUid;
// method: FetchSingleAsMime
- (NSString *)FetchSingleAsMime: (NSNumber *)msgId 
	bUid: (BOOL)bUid;
// method: FetchSingleHeader
- (CkoEmail *)FetchSingleHeader: (NSNumber *)msgId 
	bUid: (BOOL)bUid;
// method: FetchSingleHeaderAsMime
- (NSString *)FetchSingleHeaderAsMime: (NSNumber *)msgId 
	bUID: (BOOL)bUID;
// method: GetAllUids
- (CkoMessageSet *)GetAllUids;
// method: GetMailAttachFilename
- (NSString *)GetMailAttachFilename: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex;
// method: GetMailAttachSize
- (NSNumber *)GetMailAttachSize: (CkoEmail *)email 
	attachIndex: (NSNumber *)attachIndex;
// method: GetMailFlag
- (NSNumber *)GetMailFlag: (CkoEmail *)email 
	flagName: (NSString *)flagName;
// method: GetMailNumAttach
- (NSNumber *)GetMailNumAttach: (CkoEmail *)email;
// method: GetMailSize
- (NSNumber *)GetMailSize: (CkoEmail *)email;
// method: GetMailboxStatus
- (NSString *)GetMailboxStatus: (NSString *)mailbox;
// method: GetSslServerCert
- (CkoCert *)GetSslServerCert;
// method: IdleCheck
- (NSString *)IdleCheck: (NSNumber *)timeoutMs;
// method: IdleDone
- (BOOL)IdleDone;
// method: IdleStart
- (BOOL)IdleStart;
// method: IsConnected
- (BOOL)IsConnected;
// method: IsLoggedIn
- (BOOL)IsLoggedIn;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: ListMailboxes
- (CkoMailboxes *)ListMailboxes: (NSString *)reference 
	wildcardedMailbox: (NSString *)wildcardedMailbox;
// method: ListSubscribed
- (CkoMailboxes *)ListSubscribed: (NSString *)reference 
	wildcardedMailbox: (NSString *)wildcardedMailbox;
// method: Login
- (BOOL)Login: (NSString *)login 
	password: (NSString *)password;
// method: Logout
- (BOOL)Logout;
// method: Noop
- (BOOL)Noop;
// method: RefetchMailFlags
- (BOOL)RefetchMailFlags: (CkoEmail *)emailInOut;
// method: RenameMailbox
- (BOOL)RenameMailbox: (NSString *)fromMailbox 
	toMailbox: (NSString *)toMailbox;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: Search
- (CkoMessageSet *)Search: (NSString *)criteria 
	bUid: (BOOL)bUid;
// method: SelectMailbox
- (BOOL)SelectMailbox: (NSString *)mailbox;
// method: SendRawCommand
- (NSString *)SendRawCommand: (NSString *)rawCommand;
// method: SendRawCommandB
- (NSData *)SendRawCommandB: (NSString *)cmd;
// method: SendRawCommandC
- (NSData *)SendRawCommandC: (NSData *)cmd;
// method: SetDecryptCert
- (BOOL)SetDecryptCert: (CkoCert *)cert;
// method: SetDecryptCert2
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetFlag
- (BOOL)SetFlag: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;
// method: SetFlags
- (BOOL)SetFlags: (CkoMessageSet *)messageSet 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;
// method: SetMailFlag
- (BOOL)SetMailFlag: (CkoEmail *)email 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrPath 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SshAuthenticatePk
- (BOOL)SshAuthenticatePk: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;
// method: SshAuthenticatePw
- (BOOL)SshAuthenticatePw: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;
// method: SshCloseTunnel
- (BOOL)SshCloseTunnel;
// method: SshOpenTunnel
- (BOOL)SshOpenTunnel: (NSString *)sshHostname 
	sshPort: (NSNumber *)sshPort;
// method: StoreFlags
- (BOOL)StoreFlags: (NSNumber *)msgId 
	bUid: (BOOL)bUid 
	flagName: (NSString *)flagName 
	value: (NSNumber *)value;
// method: Subscribe
- (BOOL)Subscribe: (NSString *)mailbox;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: Unsubscribe
- (BOOL)Unsubscribe: (NSString *)mailbox;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;
// method: UseSshTunnel
- (BOOL)UseSshTunnel: (CkoSocket *)tunnel;

@end
