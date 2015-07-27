// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Rsa
// Wrapped Chilkat C++ class name =  CkRsa

@class CkoPrivateKey;
@class CkoPublicKey;


@interface CkoRsa : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *Charset;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *EncodingMode;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LittleEndian;

@property (nonatomic) BOOL NoUnpad;

@property (nonatomic, readonly, copy) NSNumber *NumBits;
@property (nonatomic, copy) NSString *OaepHash;

@property (nonatomic) BOOL OaepPadding;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: DecryptBytes
- (NSData *)DecryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptBytesENC
- (NSData *)DecryptBytesENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptString
- (NSString *)DecryptString: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: DecryptStringENC
- (NSString *)DecryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptBytes
- (NSData *)EncryptBytes: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptBytesENC
- (NSString *)EncryptBytesENC: (NSData *)bData 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptString
- (NSData *)EncryptString: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: EncryptStringENC
- (NSString *)EncryptStringENC: (NSString *)str 
	bUsePrivateKey: (BOOL)bUsePrivateKey;
// method: ExportPrivateKey
- (NSString *)ExportPrivateKey;
// method: ExportPrivateKeyObj
- (CkoPrivateKey *)ExportPrivateKeyObj;
// method: ExportPublicKey
- (NSString *)ExportPublicKey;
// method: ExportPublicKeyObj
- (CkoPublicKey *)ExportPublicKeyObj;
// method: GenerateKey
- (BOOL)GenerateKey: (NSNumber *)numBits;
// method: ImportPrivateKey
- (BOOL)ImportPrivateKey: (NSString *)strXml;
// method: ImportPrivateKeyObj
- (BOOL)ImportPrivateKeyObj: (CkoPrivateKey *)key;
// method: ImportPublicKey
- (BOOL)ImportPublicKey: (NSString *)strXml;
// method: ImportPublicKeyObj
- (BOOL)ImportPublicKeyObj: (CkoPublicKey *)key;
// method: OpenSslSignBytes
- (NSData *)OpenSslSignBytes: (NSData *)data;
// method: OpenSslSignBytesENC
- (NSString *)OpenSslSignBytesENC: (NSData *)data;
// method: OpenSslSignString
- (NSData *)OpenSslSignString: (NSString *)str;
// method: OpenSslSignStringENC
- (NSString *)OpenSslSignStringENC: (NSString *)str;
// method: OpenSslVerifyBytes
- (NSData *)OpenSslVerifyBytes: (NSData *)signature;
// method: OpenSslVerifyBytesENC
- (NSData *)OpenSslVerifyBytesENC: (NSString *)str;
// method: OpenSslVerifyString
- (NSString *)OpenSslVerifyString: (NSData *)data;
// method: OpenSslVerifyStringENC
- (NSString *)OpenSslVerifyStringENC: (NSString *)str;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SignBytes
- (NSData *)SignBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;
// method: SignBytesENC
- (NSString *)SignBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg;
// method: SignHash
- (NSData *)SignHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg;
// method: SignHashENC
- (NSString *)SignHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg;
// method: SignString
- (NSData *)SignString: (NSString *)str 
	hashAlg: (NSString *)hashAlg;
// method: SignStringENC
- (NSString *)SignStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg;
// method: SnkToXml
- (NSString *)SnkToXml: (NSString *)snkPath;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: VerifyBytes
- (BOOL)VerifyBytes: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;
// method: VerifyBytesENC
- (BOOL)VerifyBytesENC: (NSData *)bData 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;
// method: VerifyHash
- (BOOL)VerifyHash: (NSData *)hashBytes 
	hashAlg: (NSString *)hashAlg 
	sigBytes: (NSData *)sigBytes;
// method: VerifyHashENC
- (BOOL)VerifyHashENC: (NSString *)encodedHash 
	hashAlg: (NSString *)hashAlg 
	encodedSig: (NSString *)encodedSig;
// method: VerifyPrivateKey
- (BOOL)VerifyPrivateKey: (NSString *)xml;
// method: VerifyString
- (BOOL)VerifyString: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sigData: (NSData *)sigData;
// method: VerifyStringENC
- (BOOL)VerifyStringENC: (NSString *)str 
	hashAlg: (NSString *)hashAlg 
	sig: (NSString *)sig;

@end
