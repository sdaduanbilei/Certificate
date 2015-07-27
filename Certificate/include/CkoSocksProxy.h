// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.48

// Generic/internal class name =  SocksProxy
// Wrapped Chilkat C++ class name =  CkSocksProxy



@class CkoBaseProgress;

@interface CkoSocksProxy : NSObject {

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

@property (nonatomic) BOOL AllowUnauthenticatedSocks5;

@property (nonatomic, readonly) BOOL AuthenticatedSocks5;
@property (nonatomic, readonly, copy) NSString *ClientIp;
@property (nonatomic, readonly, copy) NSNumber *ClientPort;
@property (nonatomic, readonly) BOOL ConnectionPending;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSString *ListenBindIpAddress;

@property (nonatomic, readonly, copy) NSString *Login;
@property (nonatomic, copy) NSString *OutboundBindIpAddress;

@property (nonatomic, copy) NSNumber *OutboundBindPort;

@property (nonatomic, readonly, copy) NSString *Password;
@property (nonatomic, readonly, copy) NSString *ServerIp;
@property (nonatomic, readonly, copy) NSNumber *ServerPort;
@property (nonatomic, readonly, copy) NSNumber *SocksVersion;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AllowConnection
- (BOOL)AllowConnection;
// method: GetTunnelsXml
- (NSString *)GetTunnelsXml;
// method: Initialize
- (BOOL)Initialize: (NSNumber *)port;
// method: ProceedSocks5
- (BOOL)ProceedSocks5;
// method: RejectConnection
- (BOOL)RejectConnection;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: StopAllTunnels
- (BOOL)StopAllTunnels: (NSNumber *)maxWaitMs;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: WaitForConnection
- (BOOL)WaitForConnection: (NSNumber *)maxWaitMs;

@end
