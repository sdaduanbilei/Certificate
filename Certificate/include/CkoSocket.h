// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Socket
// Wrapped Chilkat C++ class name =  CkSocket

@class CkoCert;
@class CkoSshKey;


@class CkoBaseProgress;

@interface CkoSocket : NSObject {

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

@property (nonatomic, readonly, copy) NSNumber *AcceptFailReason;
@property (nonatomic, readonly) BOOL AsyncAcceptFinished;
@property (nonatomic, readonly, copy) NSString *AsyncAcceptLog;
@property (nonatomic, readonly) BOOL AsyncAcceptSuccess;
@property (nonatomic, readonly) BOOL AsyncConnectFinished;
@property (nonatomic, readonly, copy) NSString *AsyncConnectLog;
@property (nonatomic, readonly) BOOL AsyncConnectSuccess;
@property (nonatomic, readonly) BOOL AsyncDnsFinished;
@property (nonatomic, readonly, copy) NSString *AsyncDnsLog;
@property (nonatomic, readonly, copy) NSString *AsyncDnsResult;
@property (nonatomic, readonly) BOOL AsyncDnsSuccess;
@property (nonatomic, readonly) BOOL AsyncReceiveFinished;
@property (nonatomic, readonly, copy) NSString *AsyncReceiveLog;
@property (nonatomic, readonly) BOOL AsyncReceiveSuccess;
@property (nonatomic, readonly, copy) NSData *AsyncReceivedBytes;
@property (nonatomic, readonly, copy) NSString *AsyncReceivedString;
@property (nonatomic, readonly) BOOL AsyncSendFinished;
@property (nonatomic, readonly, copy) NSString *AsyncSendLog;
@property (nonatomic, readonly) BOOL AsyncSendSuccess;
@property (nonatomic, copy) NSNumber *BandwidthThrottleDown;

@property (nonatomic, copy) NSNumber *BandwidthThrottleUp;

@property (nonatomic) BOOL BigEndian;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSNumber *ClientPort;

@property (nonatomic, readonly, copy) NSNumber *ConnectFailReason;
@property (nonatomic, copy) NSNumber *DebugConnectDelayMs;

@property (nonatomic, copy) NSNumber *DebugDnsDelayMs;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSNumber *ElapsedSeconds;
@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepAlive;

@property (nonatomic) BOOL KeepSessionLog;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly) BOOL LastMethodFailed;
@property (nonatomic) BOOL ListenIpv6;

@property (nonatomic, readonly, copy) NSString *LocalIpAddress;
@property (nonatomic, readonly, copy) NSNumber *LocalPort;
@property (nonatomic, copy) NSNumber *MaxReadIdleMs;

@property (nonatomic, copy) NSNumber *MaxSendIdleMs;

@property (nonatomic, readonly, copy) NSString *MyIpAddress;
@property (nonatomic, readonly, copy) NSNumber *NumReceivedClientCerts;
@property (nonatomic, readonly, copy) NSNumber *NumSocketsInSet;
@property (nonatomic, readonly, copy) NSNumber *NumSslAcceptableClientCAs;
@property (nonatomic, readonly, copy) NSNumber *ObjectId;
@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic, readonly, copy) NSNumber *ReceiveFailReason;
@property (nonatomic, copy) NSNumber *ReceivePacketSize;

@property (nonatomic, copy) NSNumber *ReceivedCount;

@property (nonatomic, copy) NSNumber *ReceivedInt;

@property (nonatomic, readonly, copy) NSString *RemoteIpAddress;
@property (nonatomic, readonly, copy) NSNumber *RemotePort;
@property (nonatomic) BOOL RequireSslCertVerify;

@property (nonatomic, copy) NSNumber *SelectorIndex;

@property (nonatomic, copy) NSNumber *SelectorReadIndex;

@property (nonatomic, copy) NSNumber *SelectorWriteIndex;

@property (nonatomic, readonly, copy) NSNumber *SendFailReason;
@property (nonatomic, copy) NSNumber *SendPacketSize;

@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic, copy) NSString *SessionLogEncoding;

@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic) BOOL SoReuseAddr;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic) BOOL Ssl;

@property (nonatomic, copy) NSString *SslAllowedCiphers;

@property (nonatomic, copy) NSString *SslProtocol;

@property (nonatomic, copy) NSString *StringCharset;

@property (nonatomic) BOOL TcpNoDelay;

@property (nonatomic, readonly, copy) NSString *TlsCipherSuite;
@property (nonatomic, readonly, copy) NSString *TlsVersion;
@property (nonatomic, copy) NSString *UserData;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AcceptNextConnection
- (CkoSocket *)AcceptNextConnection: (NSNumber *)maxWaitMs;
// method: AddSslAcceptableClientCaDn
- (BOOL)AddSslAcceptableClientCaDn: (NSString *)certAuthDN;
// method: AsyncAcceptAbort
- (void)AsyncAcceptAbort;
// method: AsyncAcceptSocket
- (CkoSocket *)AsyncAcceptSocket;
// method: AsyncAcceptStart
- (BOOL)AsyncAcceptStart: (NSNumber *)maxWaitMs;
// method: AsyncConnectAbort
- (void)AsyncConnectAbort;
// method: AsyncConnectStart
- (BOOL)AsyncConnectStart: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: AsyncDnsAbort
- (void)AsyncDnsAbort;
// method: AsyncDnsStart
- (BOOL)AsyncDnsStart: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: AsyncReceiveAbort
- (void)AsyncReceiveAbort;
// method: AsyncReceiveBytes
- (BOOL)AsyncReceiveBytes;
// method: AsyncReceiveBytesN
- (BOOL)AsyncReceiveBytesN: (NSNumber *)numBytes;
// method: AsyncReceiveString
- (BOOL)AsyncReceiveString;
// method: AsyncReceiveToCRLF
- (BOOL)AsyncReceiveToCRLF;
// method: AsyncReceiveUntilMatch
- (BOOL)AsyncReceiveUntilMatch: (NSString *)matchStr;
// method: AsyncSendAbort
- (void)AsyncSendAbort;
// method: AsyncSendByteData
- (BOOL)AsyncSendByteData: (NSData *)data;
// method: AsyncSendBytes
- (BOOL)AsyncSendBytes: (NSData *)data;
// method: AsyncSendString
- (BOOL)AsyncSendString: (NSString *)str;
// method: BindAndListen
- (BOOL)BindAndListen: (NSNumber *)port 
	backlog: (NSNumber *)backlog;
// method: BuildHttpGetRequest
- (NSString *)BuildHttpGetRequest: (NSString *)url;
// method: CheckWriteable
- (NSNumber *)CheckWriteable: (NSNumber *)maxWaitMs;
// method: ClearSessionLog
- (void)ClearSessionLog;
// method: CloneSocket
- (CkoSocket *)CloneSocket;
// method: Close
- (BOOL)Close: (NSNumber *)maxWaitMs;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: ConvertFromSsl
- (BOOL)ConvertFromSsl;
// method: ConvertToSsl
- (BOOL)ConvertToSsl;
// method: DnsCacheClear
- (void)DnsCacheClear;
// method: DnsLookup
- (NSString *)DnsLookup: (NSString *)hostname 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: GetMyCert
- (CkoCert *)GetMyCert;
// method: GetReceivedClientCert
- (CkoCert *)GetReceivedClientCert: (NSNumber *)index;
// method: GetSslAcceptableClientCaDn
- (NSString *)GetSslAcceptableClientCaDn: (NSNumber *)index;
// method: GetSslServerCert
- (CkoCert *)GetSslServerCert;
// method: InitSslServer
- (BOOL)InitSslServer: (CkoCert *)cert;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: PollDataAvailable
- (BOOL)PollDataAvailable;
// method: ReceiveByte
- (BOOL)ReceiveByte: (BOOL)bUnsigned;
// method: ReceiveBytes
- (NSData *)ReceiveBytes;
// method: ReceiveBytesENC
- (NSString *)ReceiveBytesENC: (NSString *)encodingAlg;
// method: ReceiveBytesN
- (NSData *)ReceiveBytesN: (NSNumber *)numBytes;
// method: ReceiveBytesToFile
- (BOOL)ReceiveBytesToFile: (NSString *)appendPath;
// method: ReceiveCount
- (NSNumber *)ReceiveCount;
// method: ReceiveInt16
- (BOOL)ReceiveInt16: (BOOL)bigEndian 
	bUnsigned: (BOOL)bUnsigned;
// method: ReceiveInt32
- (BOOL)ReceiveInt32: (BOOL)bigEndian;
// method: ReceiveNBytesENC
- (NSString *)ReceiveNBytesENC: (NSNumber *)numBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: ReceiveString
- (NSString *)ReceiveString;
// method: ReceiveStringMaxN
- (NSString *)ReceiveStringMaxN: (NSNumber *)maxBytes;
// method: ReceiveStringUntilByte
- (NSString *)ReceiveStringUntilByte: (NSNumber *)byteValue;
// method: ReceiveToCRLF
- (NSString *)ReceiveToCRLF;
// method: ReceiveUntilByte
- (NSData *)ReceiveUntilByte: (NSNumber *)byteValue;
// method: ReceiveUntilMatch
- (NSString *)ReceiveUntilMatch: (NSString *)matchStr;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SelectForReading
- (NSNumber *)SelectForReading: (NSNumber *)timeoutMs;
// method: SelectForWriting
- (NSNumber *)SelectForWriting: (NSNumber *)timeoutMs;
// method: SendByte
- (BOOL)SendByte: (NSNumber *)value;
// method: SendBytes
- (BOOL)SendBytes: (NSData *)data;
// method: SendBytesENC
- (BOOL)SendBytesENC: (NSString *)encodedBytes 
	encodingAlg: (NSString *)encodingAlg;
// method: SendCount
- (BOOL)SendCount: (NSNumber *)byteCount;
// method: SendInt16
- (BOOL)SendInt16: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendInt32
- (BOOL)SendInt32: (NSNumber *)value 
	bigEndian: (BOOL)bigEndian;
// method: SendString
- (BOOL)SendString: (NSString *)str;
// method: SetSslClientCert
- (BOOL)SetSslClientCert: (CkoCert *)cert;
// method: SetSslClientCertPem
- (BOOL)SetSslClientCertPem: (NSString *)pemDataOrPath 
	pemPassword: (NSString *)pemPassword;
// method: SetSslClientCertPfx
- (BOOL)SetSslClientCertPfx: (NSString *)pfxPath 
	pfxPassword: (NSString *)pfxPassword;
// method: SleepMs
- (void)SleepMs: (NSNumber *)millisec;
// method: SshAuthenticatePk
- (BOOL)SshAuthenticatePk: (NSString *)sshLogin 
	privateKey: (CkoSshKey *)privateKey;
// method: SshAuthenticatePw
- (BOOL)SshAuthenticatePw: (NSString *)sshLogin 
	sshPassword: (NSString *)sshPassword;
// method: SshCloseTunnel
- (BOOL)SshCloseTunnel;
// method: SshOpenChannel
- (CkoSocket *)SshOpenChannel: (NSString *)hostname 
	port: (NSNumber *)port 
	ssl: (BOOL)ssl 
	maxWaitMs: (NSNumber *)maxWaitMs;
// method: SshOpenTunnel
- (BOOL)SshOpenTunnel: (NSString *)sshHostname 
	sshPort: (NSNumber *)sshPort;
// method: StartTiming
- (void)StartTiming;
// method: TakeSocket
- (BOOL)TakeSocket: (CkoSocket *)sock;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;

@end
