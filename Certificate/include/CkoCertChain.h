// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  CertChain
// Wrapped Chilkat C++ class name =  CkCertChain

@class CkoCert;
@class CkoTrustedRoots;


@interface CkoCertChain : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumCerts;
@property (nonatomic, readonly, copy) NSNumber *NumExpiredCerts;
@property (nonatomic, readonly) BOOL ReachesRoot;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: GetCert
- (CkoCert *)GetCert: (NSNumber *)index;
// method: IsRootTrusted
- (BOOL)IsRootTrusted: (CkoTrustedRoots *)trustedRoots;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: VerifyCertSignatures
- (BOOL)VerifyCertSignatures;

@end
