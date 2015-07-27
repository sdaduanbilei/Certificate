// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Pfx
// Wrapped Chilkat C++ class name =  CkPfx

@class CkoCert;
@class CkoPrivateKey;
@class CkoCertChain;
@class CkoJavaKeyStore;
@class CkoXmlCertVault;


@interface CkoPfx : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumPrivateKeys;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddCert
- (BOOL)AddCert: (CkoCert *)cert 
	includeChain: (BOOL)includeChain;
// method: AddPrivateKey
- (BOOL)AddPrivateKey: (CkoPrivateKey *)privKey 
	certChain: (CkoCertChain *)certChain;
// method: GetCert
- (CkoCert *)GetCert: (NSNumber *)index;
// method: GetPrivateKey
- (CkoPrivateKey *)GetPrivateKey: (NSNumber *)index;
// method: LoadPem
- (BOOL)LoadPem: (NSString *)pemStr 
	password: (NSString *)password;
// method: LoadPfxBytes
- (BOOL)LoadPfxBytes: (NSData *)pfxData 
	password: (NSString *)password;
// method: LoadPfxEncoded
- (BOOL)LoadPfxEncoded: (NSString *)encodedData 
	encoding: (NSString *)encoding 
	password: (NSString *)password;
// method: LoadPfxFile
- (BOOL)LoadPfxFile: (NSString *)path 
	password: (NSString *)password;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: ToBinary
- (NSData *)ToBinary: (NSString *)password;
// method: ToEncodedString
- (NSString *)ToEncodedString: (NSString *)password 
	encoding: (NSString *)encoding;
// method: ToFile
- (BOOL)ToFile: (NSString *)password 
	path: (NSString *)path;
// method: ToJavaKeyStore
- (CkoJavaKeyStore *)ToJavaKeyStore: (NSString *)alias 
	password: (NSString *)password;
// method: ToPem
- (NSString *)ToPem;
// method: ToPemEx
- (NSString *)ToPemEx: (BOOL)extendedAttrs 
	noKeys: (BOOL)noKeys 
	noCerts: (BOOL)noCerts 
	noCaCerts: (BOOL)noCaCerts 
	encryptAlg: (NSString *)encryptAlg 
	password: (NSString *)password;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;

@end
