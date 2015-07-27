// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Dsa
// Wrapped Chilkat C++ class name =  CkDsa



@interface CkoDsa : NSObject {

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

@property (nonatomic, copy) NSNumber *GroupSize;

@property (nonatomic, copy) NSData *Hash;

@property (nonatomic, readonly, copy) NSString *HexG;
@property (nonatomic, readonly, copy) NSString *HexP;
@property (nonatomic, readonly, copy) NSString *HexQ;
@property (nonatomic, readonly, copy) NSString *HexX;
@property (nonatomic, readonly, copy) NSString *HexY;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSData *Signature;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: FromDer
- (BOOL)FromDer: (NSData *)derData;
// method: FromDerFile
- (BOOL)FromDerFile: (NSString *)path;
// method: FromEncryptedPem
- (BOOL)FromEncryptedPem: (NSString *)password 
	pemData: (NSString *)pemData;
// method: FromPem
- (BOOL)FromPem: (NSString *)pemData;
// method: FromPublicDer
- (BOOL)FromPublicDer: (NSData *)derData;
// method: FromPublicDerFile
- (BOOL)FromPublicDerFile: (NSString *)path;
// method: FromPublicPem
- (BOOL)FromPublicPem: (NSString *)pemData;
// method: FromXml
- (BOOL)FromXml: (NSString *)xmlKey;
// method: GenKey
- (BOOL)GenKey: (NSNumber *)numBits;
// method: GenKeyFromParamsDer
- (BOOL)GenKeyFromParamsDer: (NSData *)derBytes;
// method: GenKeyFromParamsDerFile
- (BOOL)GenKeyFromParamsDerFile: (NSString *)path;
// method: GenKeyFromParamsPem
- (BOOL)GenKeyFromParamsPem: (NSString *)pem;
// method: GenKeyFromParamsPemFile
- (BOOL)GenKeyFromParamsPemFile: (NSString *)path;
// method: GetEncodedHash
- (NSString *)GetEncodedHash: (NSString *)encoding;
// method: GetEncodedSignature
- (NSString *)GetEncodedSignature: (NSString *)encoding;
// method: LoadText
- (NSString *)LoadText: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveText
- (BOOL)SaveText: (NSString *)strToSave 
	path: (NSString *)path;
// method: SetEncodedHash
- (BOOL)SetEncodedHash: (NSString *)encoding 
	encodedHash: (NSString *)encodedHash;
// method: SetEncodedSignature
- (BOOL)SetEncodedSignature: (NSString *)encoding 
	encodedSig: (NSString *)encodedSig;
// method: SetEncodedSignatureRS
- (BOOL)SetEncodedSignatureRS: (NSString *)encoding 
	encodedR: (NSString *)encodedR 
	encodedS: (NSString *)encodedS;
// method: SetKeyExplicit
- (BOOL)SetKeyExplicit: (NSNumber *)groupSizeInBytes 
	pHex: (NSString *)pHex 
	qHex: (NSString *)qHex 
	gHex: (NSString *)gHex 
	xHex: (NSString *)xHex;
// method: SetPubKeyExplicit
- (BOOL)SetPubKeyExplicit: (NSNumber *)groupSizeInBytes 
	pHex: (NSString *)pHex 
	qHex: (NSString *)qHex 
	gHex: (NSString *)gHex 
	yHex: (NSString *)yHex;
// method: SignHash
- (BOOL)SignHash;
// method: ToDer
- (NSData *)ToDer;
// method: ToDerFile
- (BOOL)ToDerFile: (NSString *)path;
// method: ToEncryptedPem
- (NSString *)ToEncryptedPem: (NSString *)password;
// method: ToPem
- (NSString *)ToPem;
// method: ToPublicDer
- (NSData *)ToPublicDer;
// method: ToPublicDerFile
- (BOOL)ToPublicDerFile: (NSString *)path;
// method: ToPublicPem
- (NSString *)ToPublicPem;
// method: ToXml
- (NSString *)ToXml: (BOOL)bPublicOnly;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: Verify
- (BOOL)Verify;
// method: VerifyKey
- (BOOL)VerifyKey;

@end
