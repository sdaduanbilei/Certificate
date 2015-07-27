// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  SshTunnel
// Wrapped Chilkat C++ class name =  CkSshTunnel

@class CkoSshKey;


@class CkoBaseProgress;

@interface CkoSshTunnel : NSObject {

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

@property (nonatomic, copy) NSString *AcceptLog;

@property (nonatomic, copy) NSString *AcceptLogPath;

@property (nonatomic, copy) NSNumber *ConnectTimeoutMs;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *DestHostname;

@property (nonatomic, copy) NSNumber *DestPort;

@property (nonatomic) BOOL DynamicPortForwarding;

@property (nonatomic, copy) NSString *HttpProxyAuthMethod;

@property (nonatomic, copy) NSString *HttpProxyDomain;

@property (nonatomic, copy) NSString *HttpProxyHostname;

@property (nonatomic, copy) NSString *HttpProxyPassword;

@property (nonatomic, copy) NSNumber *HttpProxyPort;

@property (nonatomic, copy) NSString *HttpProxyUsername;

@property (nonatomic, copy) NSNumber *IdleTimeoutMs;

@property (nonatomic, copy) NSString *InboundSocksPassword;

@property (nonatomic, copy) NSString *InboundSocksUsername;

@property (nonatomic, readonly) BOOL IsAccepting;
@property (nonatomic) BOOL KeepAcceptLog;

@property (nonatomic) BOOL KeepTunnelLog;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSString *ListenBindIpAddress;

@property (nonatomic, readonly, copy) NSNumber *ListenPort;
@property (nonatomic, copy) NSString *OutboundBindIpAddress;

@property (nonatomic, copy) NSNumber *OutboundBindPort;

@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic) BOOL TcpNoDelay;

@property (nonatomic, copy) NSString *TunnelLog;

@property (nonatomic, copy) NSString *TunnelLogPath;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
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
// method: BeginAccepting
- (BOOL)BeginAccepting: (NSNumber *)listenPort;
// method: CloseTunnel
- (BOOL)CloseTunnel: (BOOL)waitForThreads;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;
// method: DisconnectAllClients
- (BOOL)DisconnectAllClients: (BOOL)waitForThreads;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: StopAccepting
- (BOOL)StopAccepting: (BOOL)waitForThread;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
