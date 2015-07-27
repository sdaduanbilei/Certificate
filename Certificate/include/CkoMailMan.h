// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  MailMan
// Wrapped Chilkat C++ class name =  CkMailMan

@class CkoEmailBundle;
@class CkoEmail;
@class CkoStringArray;
@class CkoCert;
@class CkoPrivateKey;
@class CkoSshKey;
@class CkoXmlCertVault;
@class CkoSocket;


@class CkoMailManProgress;

@interface CkoMailMan : NSObject {

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
- (void)setEventCallbackObject: (CkoMailManProgress *)eventObj;

@property (nonatomic) BOOL AllOrNone;

@property (nonatomic) BOOL AutoFix;

@property (nonatomic) BOOL AutoGenMessageId;

@property (nonatomic) BOOL AutoSmtpRset;

@property (nonatomic) BOOL AutoUnwrapSecurity;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSNumber *ConnectTimeout;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *DsnEnvid;

@property (nonatomic, copy) NSString *DsnNotify;

@property (nonatomic, copy) NSString *DsnRet;

@property (nonatomic) BOOL EmbedCertChain;

@property (nonatomic, copy) NSString *Filter;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *HeloHostname;

@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic) BOOL ImmediateDelete;

@property (nonatomic) BOOL IncludeRootCert;

@property (nonatomic, readonly) BOOL IsPop3Connected;
@property (nonatomic, readonly) BOOL IsSmtpConnected;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastSendQFilename;
@property (nonatomic, readonly, copy) NSNumber *LastSmtpStatus;
@property (nonatomic, copy) NSString *LogMailReceivedFilename;

@property (nonatomic, copy) NSString *LogMailSentFilename;

@property (nonatomic, copy) NSString *MailHost;

@property (nonatomic, copy) NSNumber *MailPort;

@property (nonatomic, copy) NSNumber *MaxCount;

@property (nonatomic, copy) NSString *OAuth2AccessToken;

@property (nonatomic) BOOL OpaqueSigning;

@property (nonatomic, copy) NSString *P7mEncryptAttachFilename;

@property (nonatomic, copy) NSString *P7mSigAttachFilename;

@property (nonatomic, copy) NSString *P7sSigAttachFilename;

@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic) BOOL Pop3SPA;

@property (nonatomic, readonly, copy) NSNumber *Pop3SessionId;
@property (nonatomic, readonly, copy) NSString *Pop3SessionLog;
@property (nonatomic, readonly) BOOL Pop3SslServerCertVerified;
@property (nonatomic) BOOL Pop3Stls;

@property (nonatomic, copy) NSString *PopPassword;

@property (nonatomic, copy) NSString *PopPasswordBase64;

@property (nonatomic) BOOL PopSsl;

@property (nonatomic, copy) NSString *PopUsername;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic, copy) NSNumber *ReadTimeout;

@property (nonatomic) BOOL RequireSslCertVerify;

@property (nonatomic) BOOL ResetDateOnLoad;

@property (nonatomic, copy) NSNumber *SendBufferSize;

@property (nonatomic) BOOL SendIndividual;

@property (nonatomic, copy) NSNumber *SizeLimit;

@property (nonatomic, copy) NSString *SmtpAuthMethod;

@property (nonatomic, readonly, copy) NSString *SmtpFailReason;
@property (nonatomic, copy) NSString *SmtpHost;

@property (nonatomic, copy) NSString *SmtpLoginDomain;

@property (nonatomic, copy) NSString *SmtpPassword;

@property (nonatomic) BOOL SmtpPipelining;

@property (nonatomic, copy) NSNumber *SmtpPort;

@property (nonatomic, readonly, copy) NSString *SmtpSessionLog;
@property (nonatomic) BOOL SmtpSsl;

@property (nonatomic, readonly) BOOL SmtpSslServerCertVerified;
@property (nonatomic, copy) NSString *SmtpUsername;

@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic, copy) NSString *SslAllowedCiphers;

@property (nonatomic, copy) NSString *SslProtocol;

@property (nonatomic) BOOL StartTLS;

@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic) BOOL UseApop;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddPfxSourceData
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;
// method: AddPfxSourceFile
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;
// method: CheckMail
- (NSNumber *)CheckMail;
// method: ClearBadEmailAddresses
- (void)ClearBadEmailAddresses;
// method: ClearPop3SessionLog
- (void)ClearPop3SessionLog;
// method: ClearSmtpSessionLog
- (void)ClearSmtpSessionLog;
// method: CloseSmtpConnection
- (BOOL)CloseSmtpConnection;
// method: CopyMail
- (CkoEmailBundle *)CopyMail;
// method: DeleteBundle
- (BOOL)DeleteBundle: (CkoEmailBundle *)bundle;
// method: DeleteByMsgnum
- (BOOL)DeleteByMsgnum: (NSNumber *)msgnum;
// method: DeleteByUidl
- (BOOL)DeleteByUidl: (NSString *)uidl;
// method: DeleteEmail
- (BOOL)DeleteEmail: (CkoEmail *)email;
// method: DeleteMultiple
- (BOOL)DeleteMultiple: (CkoStringArray *)uidlArray;
// method: FetchByMsgnum
- (CkoEmail *)FetchByMsgnum: (NSNumber *)msgnum;
// method: FetchEmail
- (CkoEmail *)FetchEmail: (NSString *)uidl;
// method: FetchMime
- (NSData *)FetchMime: (NSString *)uidl;
// method: FetchMimeByMsgnum
- (NSData *)FetchMimeByMsgnum: (NSNumber *)msgnum;
// method: FetchMultiple
- (CkoEmailBundle *)FetchMultiple: (CkoStringArray *)uidlArray;
// method: FetchMultipleHeaders
- (CkoEmailBundle *)FetchMultipleHeaders: (CkoStringArray *)uidlArray 
	numBodyLines: (NSNumber *)numBodyLines;
// method: FetchMultipleMime
- (CkoStringArray *)FetchMultipleMime: (CkoStringArray *)uidlArray;
// method: FetchSingleHeader
- (CkoEmail *)FetchSingleHeader: (NSNumber *)numBodyLines 
	msgNum: (NSNumber *)msgNum;
// method: FetchSingleHeaderByUidl
- (CkoEmail *)FetchSingleHeaderByUidl: (NSNumber *)numBodyLines 
	uidl: (NSString *)uidl;
// method: GetAllHeaders
- (CkoEmailBundle *)GetAllHeaders: (NSNumber *)numBodyLines;
// method: GetBadEmailAddrs
- (CkoStringArray *)GetBadEmailAddrs;
// method: GetFullEmail
- (CkoEmail *)GetFullEmail: (CkoEmail *)email;
// method: GetHeaders
- (CkoEmailBundle *)GetHeaders: (NSNumber *)numBodyLines 
	fromIndex: (NSNumber *)fromIndex 
	toIndex: (NSNumber *)toIndex;
// method: GetMailboxCount
- (NSNumber *)GetMailboxCount;
// method: GetMailboxInfoXml
- (NSString *)GetMailboxInfoXml;
// method: GetMailboxSize
- (NSNumber *)GetMailboxSize;
// method: GetPop3SslServerCert
- (CkoCert *)GetPop3SslServerCert;
// method: GetSentToEmailAddrs
- (CkoStringArray *)GetSentToEmailAddrs;
// method: GetSizeByUidl
- (NSNumber *)GetSizeByUidl: (NSString *)uidl;
// method: GetSmtpSslServerCert
- (CkoCert *)GetSmtpSslServerCert;
// method: GetUidls
- (CkoStringArray *)GetUidls;
// method: IsSmtpDsnCapable
- (BOOL)IsSmtpDsnCapable;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LoadEml
- (CkoEmail *)LoadEml: (NSString *)emlPath;
// method: LoadMbx
- (CkoEmailBundle *)LoadMbx: (NSString *)mbxPath;
// method: LoadMime
- (CkoEmail *)LoadMime: (NSString *)mimeText;
// method: LoadXmlEmail
- (CkoEmail *)LoadXmlEmail: (NSString *)folderPath;
// method: LoadXmlEmailString
- (CkoEmail *)LoadXmlEmailString: (NSString *)xmlString;
// method: LoadXmlFile
- (CkoEmailBundle *)LoadXmlFile: (NSString *)folderPath;
// method: LoadXmlString
- (CkoEmailBundle *)LoadXmlString: (NSString *)xmlString;
// method: MxLookup
- (NSString *)MxLookup: (NSString *)emailAddr;
// method: MxLookupAll
- (CkoStringArray *)MxLookupAll: (NSString *)emailAddress;
// method: OpenSmtpConnection
- (BOOL)OpenSmtpConnection;
// method: Pop3BeginSession
- (BOOL)Pop3BeginSession;
// method: Pop3EndSession
- (BOOL)Pop3EndSession;
// method: Pop3EndSessionNoQuit
- (BOOL)Pop3EndSessionNoQuit;
// method: Pop3Noop
- (BOOL)Pop3Noop;
// method: Pop3Reset
- (BOOL)Pop3Reset;
// method: Pop3SendRawCommand
- (NSString *)Pop3SendRawCommand: (NSString *)command 
	charset: (NSString *)charset;
// method: QuickSend
- (BOOL)QuickSend: (NSString *)fromAddr 
	to: (NSString *)to 
	subject: (NSString *)subject 
	body: (NSString *)body 
	smtpServer: (NSString *)smtpServer;
// method: RenderToMime
- (NSString *)RenderToMime: (CkoEmail *)email;
// method: RenderToMimeBytes
- (NSData *)RenderToMimeBytes: (CkoEmail *)email;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendBundle
- (BOOL)SendBundle: (CkoEmailBundle *)bundle;
// method: SendEmail
- (BOOL)SendEmail: (CkoEmail *)email;
// method: SendMime
- (BOOL)SendMime: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeMsg: (NSString *)mimeMsg;
// method: SendMimeBytes
- (BOOL)SendMimeBytes: (NSString *)from 
	recipients: (NSString *)recipients 
	mimeData: (NSData *)mimeData;
// method: SendMimeToList
- (BOOL)SendMimeToList: (NSString *)from 
	distListFile: (NSString *)distListFile 
	mimeText: (NSString *)mimeText;
// method: SendToDistributionList
- (BOOL)SendToDistributionList: (CkoEmail *)email 
	sa: (CkoStringArray *)sa;
// method: SetDecryptCert
- (BOOL)SetDecryptCert: (CkoCert *)cert;
// method: SetDecryptCert2
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrPath 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SmtpAuthenticate
- (BOOL)SmtpAuthenticate;
// method: SmtpConnect
- (BOOL)SmtpConnect;
// method: SmtpNoop
- (BOOL)SmtpNoop;
// method: SmtpReset
- (BOOL)SmtpReset;
// method: SmtpSendRawCommand
- (NSString *)SmtpSendRawCommand: (NSString *)command 
	charset: (NSString *)charset 
	bEncodeBase64: (BOOL)bEncodeBase64;
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
// method: TransferMail
- (CkoEmailBundle *)TransferMail;
// method: TransferMultipleMime
- (CkoStringArray *)TransferMultipleMime: (CkoStringArray *)uidlArray;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;
// method: UseSshTunnel
- (BOOL)UseSshTunnel: (CkoSocket *)tunnel;
// method: VerifyPopConnection
- (BOOL)VerifyPopConnection;
// method: VerifyPopLogin
- (BOOL)VerifyPopLogin;
// method: VerifyRecips
- (BOOL)VerifyRecips: (CkoEmail *)email 
	saBadAddrs: (CkoStringArray *)saBadAddrs;
// method: VerifySmtpConnection
- (BOOL)VerifySmtpConnection;
// method: VerifySmtpLogin
- (BOOL)VerifySmtpLogin;

@end
