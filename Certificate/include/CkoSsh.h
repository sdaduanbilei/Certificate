// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Ssh
// Wrapped Chilkat C++ class name =  CkSsh

@class CkoSshKey;
@class CkoStringArray;


@class CkoBaseProgress;

@interface CkoSsh : NSObject {

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

@property (nonatomic) BOOL CaretControl;

@property (nonatomic, readonly, copy) NSNumber *ChannelOpenFailCode;
@property (nonatomic, readonly, copy) NSString *ChannelOpenFailReason;
@property (nonatomic, copy) NSString *ClientIdentifier;

@property (nonatomic, copy) NSString *ClientIpAddress;

@property (nonatomic, copy) NSNumber *ConnectTimeoutMs;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSNumber *DisconnectCode;
@property (nonatomic, readonly, copy) NSString *DisconnectReason;
@property (nonatomic, copy) NSString *ForceCipher;

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

@property (nonatomic, readonly) BOOL IsConnected;
@property (nonatomic) BOOL KeepSessionLog;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSNumber *MaxPacketSize;

@property (nonatomic, readonly, copy) NSNumber *NumOpenChannels;
@property (nonatomic, readonly) BOOL PasswordChangeRequested;
@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic, copy) NSNumber *ReadTimeoutMs;

@property (nonatomic, copy) NSString *ReqExecCharset;

@property (nonatomic, readonly, copy) NSString *SessionLog;
@property (nonatomic, copy) NSNumber *SoRcvBuf;

@property (nonatomic, copy) NSNumber *SoSndBuf;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic) BOOL StderrToStdout;

@property (nonatomic) BOOL TcpNoDelay;

@property (nonatomic, copy) NSString *UserAuthBanner;

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
// method: ChannelIsOpen
- (BOOL)ChannelIsOpen: (NSNumber *)channelNum;
// method: ChannelPoll
- (NSNumber *)ChannelPoll: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs;
// method: ChannelRead
- (NSNumber *)ChannelRead: (NSNumber *)channelNum;
// method: ChannelReadAndPoll
- (NSNumber *)ChannelReadAndPoll: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs;
// method: ChannelReadAndPoll2
- (NSNumber *)ChannelReadAndPoll2: (NSNumber *)channelNum 
	pollTimeoutMs: (NSNumber *)pollTimeoutMs 
	maxNumBytes: (NSNumber *)maxNumBytes;
// method: ChannelReceiveToClose
- (BOOL)ChannelReceiveToClose: (NSNumber *)channelNum;
// method: ChannelReceiveUntilMatch
- (BOOL)ChannelReceiveUntilMatch: (NSNumber *)channelNum 
	matchPattern: (NSString *)matchPattern 
	charset: (NSString *)charset 
	caseSensitive: (BOOL)caseSensitive;
// method: ChannelReceiveUntilMatchN
- (BOOL)ChannelReceiveUntilMatchN: (NSNumber *)channelNum 
	matchPatterns: (CkoStringArray *)matchPatterns 
	charset: (NSString *)charset 
	caseSensitive: (BOOL)caseSensitive;
// method: ChannelReceivedClose
- (BOOL)ChannelReceivedClose: (NSNumber *)channelNum;
// method: ChannelReceivedEof
- (BOOL)ChannelReceivedEof: (NSNumber *)channelNum;
// method: ChannelReceivedExitStatus
- (BOOL)ChannelReceivedExitStatus: (NSNumber *)channelNum;
// method: ChannelRelease
- (void)ChannelRelease: (NSNumber *)channelNum;
// method: ChannelSendClose
- (BOOL)ChannelSendClose: (NSNumber *)channelNum;
// method: ChannelSendData
- (BOOL)ChannelSendData: (NSNumber *)channelNum 
	data: (NSData *)data;
// method: ChannelSendEof
- (BOOL)ChannelSendEof: (NSNumber *)channelNum;
// method: ChannelSendString
- (BOOL)ChannelSendString: (NSNumber *)channelNum 
	strData: (NSString *)strData 
	charset: (NSString *)charset;
// method: CheckConnection
- (BOOL)CheckConnection;
// method: ClearTtyModes
- (void)ClearTtyModes;
// method: Connect
- (BOOL)Connect: (NSString *)hostname 
	port: (NSNumber *)port;
// method: ContinueKeyboardAuth
- (NSString *)ContinueKeyboardAuth: (NSString *)response;
// method: Disconnect
- (void)Disconnect;
// method: GetChannelExitStatus
- (NSNumber *)GetChannelExitStatus: (NSNumber *)channelNum;
// method: GetChannelNumber
- (NSNumber *)GetChannelNumber: (NSNumber *)index;
// method: GetChannelType
- (NSString *)GetChannelType: (NSNumber *)index;
// method: GetReceivedData
- (NSData *)GetReceivedData: (NSNumber *)channelNum;
// method: GetReceivedDataN
- (NSData *)GetReceivedDataN: (NSNumber *)channelNum 
	numBytes: (NSNumber *)numBytes;
// method: GetReceivedNumBytes
- (NSNumber *)GetReceivedNumBytes: (NSNumber *)channelNum;
// method: GetReceivedStderr
- (NSData *)GetReceivedStderr: (NSNumber *)channelNum;
// method: GetReceivedStderrText
- (NSString *)GetReceivedStderrText: (NSNumber *)channelNum 
	charset: (NSString *)charset;
// method: GetReceivedText
- (NSString *)GetReceivedText: (NSNumber *)channelNum 
	charset: (NSString *)charset;
// method: GetReceivedTextS
- (NSString *)GetReceivedTextS: (NSNumber *)channelNum 
	substr: (NSString *)substr 
	charset: (NSString *)charset;
// method: OpenCustomChannel
- (NSNumber *)OpenCustomChannel: (NSString *)channelType;
// method: OpenDirectTcpIpChannel
- (NSNumber *)OpenDirectTcpIpChannel: (NSString *)hostname 
	port: (NSNumber *)port;
// method: OpenSessionChannel
- (NSNumber *)OpenSessionChannel;
// method: PeekReceivedText
- (NSString *)PeekReceivedText: (NSNumber *)channelNum 
	charset: (NSString *)charset;
// method: ReKey
- (BOOL)ReKey;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SendIgnore
- (BOOL)SendIgnore;
// method: SendReqExec
- (BOOL)SendReqExec: (NSNumber *)channelNum 
	command: (NSString *)command;
// method: SendReqPty
- (BOOL)SendReqPty: (NSNumber *)channelNum 
	xTermEnvVar: (NSString *)xTermEnvVar 
	widthInChars: (NSNumber *)widthInChars 
	heightInRows: (NSNumber *)heightInRows 
	pixWidth: (NSNumber *)pixWidth 
	pixHeight: (NSNumber *)pixHeight;
// method: SendReqSetEnv
- (BOOL)SendReqSetEnv: (NSNumber *)channelNum 
	name: (NSString *)name 
	value: (NSString *)value;
// method: SendReqShell
- (BOOL)SendReqShell: (NSNumber *)channelNum;
// method: SendReqSignal
- (BOOL)SendReqSignal: (NSNumber *)channelNum 
	signalName: (NSString *)signalName;
// method: SendReqSubsystem
- (BOOL)SendReqSubsystem: (NSNumber *)channelNum 
	subsystemName: (NSString *)subsystemName;
// method: SendReqWindowChange
- (BOOL)SendReqWindowChange: (NSNumber *)channelNum 
	widthInChars: (NSNumber *)widthInChars 
	heightInRows: (NSNumber *)heightInRows 
	pixWidth: (NSNumber *)pixWidth 
	pixHeight: (NSNumber *)pixHeight;
// method: SendReqX11Forwarding
- (BOOL)SendReqX11Forwarding: (NSNumber *)channelNum 
	singleConnection: (BOOL)singleConnection 
	authProt: (NSString *)authProt 
	authCookie: (NSString *)authCookie 
	screenNum: (NSNumber *)screenNum;
// method: SendReqXonXoff
- (BOOL)SendReqXonXoff: (NSNumber *)channelNum 
	clientCanDo: (BOOL)clientCanDo;
// method: SetTtyMode
- (BOOL)SetTtyMode: (NSString *)name 
	value: (NSNumber *)value;
// method: StartKeyboardAuth
- (NSString *)StartKeyboardAuth: (NSString *)login;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: WaitForChannelMessage
- (NSNumber *)WaitForChannelMessage: (NSNumber *)pollTimeoutMs;

@end
