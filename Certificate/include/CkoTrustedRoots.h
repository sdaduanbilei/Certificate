// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  TrustedRoots
// Wrapped Chilkat C++ class name =  CkTrustedRoots

@class CkoCert;
@class CkoJavaKeyStore;


@class CkoBaseProgress;

@interface CkoTrustedRoots : NSObject {

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

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumCerts;
@property (nonatomic) BOOL TrustSystemCaRoots;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: Activate
- (BOOL)Activate;
// method: AddCert
- (BOOL)AddCert: (CkoCert *)cert;
// method: AddJavaKeyStore
- (BOOL)AddJavaKeyStore: (CkoJavaKeyStore *)keystore;
// method: Deactivate
- (BOOL)Deactivate;
// method: GetCert
- (CkoCert *)GetCert: (NSNumber *)index;
// method: LoadCaCertsPem
- (BOOL)LoadCaCertsPem: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
