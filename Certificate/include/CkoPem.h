// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Pem
// Wrapped Chilkat C++ class name =  CkPem

@class CkoCert;
@class CkoPrivateKey;
@class CkoCertChain;
@class CkoPublicKey;
@class CkoJavaKeyStore;
@class CkoPfx;


@class CkoBaseProgress;

@interface CkoPem : NSObject {

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

@property (nonatomic) BOOL AppendMode;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumCerts;
@property (nonatomic, readonly, copy) NSNumber *NumCsrs;
@property (nonatomic, readonly, copy) NSNumber *NumPrivateKeys;
@property (nonatomic, readonly, copy) NSNumber *NumPublicKeys;
@property (nonatomic, copy) NSString *PrivateKeyFormat;

@property (nonatomic, copy) NSString *PublicKeyFormat;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddCert
- (BOOL)AddCert: (CkoCert *)cert 
	includeChain: (BOOL)includeChain;
// method: AddPrivateKey
- (BOOL)AddPrivateKey: (CkoPrivateKey *)privateKey;
// method: AddPrivateKey2
- (BOOL)AddPrivateKey2: (CkoPrivateKey *)privKey 
	certChain: (CkoCertChain *)certChain;
// method: AddPublicKey
- (BOOL)AddPublicKey: (CkoPublicKey *)pubkey;
// method: Clear
- (BOOL)Clear;
// method: GetCert
- (CkoCert *)GetCert: (NSNumber *)index;
// method: GetEncodedItem
- (NSString *)GetEncodedItem: (NSString *)itemType 
	itemSubType: (NSString *)itemSubType 
	encoding: (NSString *)encoding 
	index: (NSNumber *)index;
// method: GetPrivateKey
- (CkoPrivateKey *)GetPrivateKey: (NSNumber *)index;
// method: GetPublicKey
- (CkoPublicKey *)GetPublicKey: (NSNumber *)index;
// method: LoadP7b
- (BOOL)LoadP7b: (NSData *)p7bData;
// method: LoadP7bFile
- (BOOL)LoadP7bFile: (NSString *)path;
// method: LoadPem
- (BOOL)LoadPem: (NSString *)pemContent 
	password: (NSString *)password;
// method: LoadPemFile
- (BOOL)LoadPemFile: (NSString *)path 
	password: (NSString *)password;
// method: RemoveCert
- (BOOL)RemoveCert: (NSNumber *)index;
// method: RemovePrivateKey
- (BOOL)RemovePrivateKey: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: ToJks
- (CkoJavaKeyStore *)ToJks: (NSString *)alias 
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
// method: ToPfx
- (CkoPfx *)ToPfx;

@end
