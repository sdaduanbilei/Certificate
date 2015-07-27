// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Cert
// Wrapped Chilkat C++ class name =  CkCert

@class CkoPrivateKey;
@class CkoPublicKey;
@class CkoCertChain;
@class CkoDateTime;
@class CkoXmlCertVault;


@interface CkoCert : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSString *AuthorityKeyId;
@property (nonatomic, readonly, copy) NSNumber *CertVersion;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly) BOOL Expired;
@property (nonatomic, readonly) BOOL ForClientAuthentication;
@property (nonatomic, readonly) BOOL ForCodeSigning;
@property (nonatomic, readonly) BOOL ForSecureEmail;
@property (nonatomic, readonly) BOOL ForServerAuthentication;
@property (nonatomic, readonly) BOOL ForTimeStamping;
@property (nonatomic, readonly, copy) NSNumber *IntendedKeyUsage;
@property (nonatomic, readonly) BOOL IsRoot;
@property (nonatomic, readonly, copy) NSString *IssuerC;
@property (nonatomic, readonly, copy) NSString *IssuerCN;
@property (nonatomic, readonly, copy) NSString *IssuerDN;
@property (nonatomic, readonly, copy) NSString *IssuerE;
@property (nonatomic, readonly, copy) NSString *IssuerL;
@property (nonatomic, readonly, copy) NSString *IssuerO;
@property (nonatomic, readonly, copy) NSString *IssuerOU;
@property (nonatomic, readonly, copy) NSString *IssuerS;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *OcspUrl;
@property (nonatomic, readonly) BOOL Revoked;
@property (nonatomic, readonly, copy) NSString *Rfc822Name;
@property (nonatomic, readonly) BOOL SelfSigned;
@property (nonatomic, readonly, copy) NSString *SerialNumber;
@property (nonatomic, readonly, copy) NSString *Sha1Thumbprint;
@property (nonatomic, readonly) BOOL SignatureVerified;
@property (nonatomic, readonly, copy) NSString *SubjectC;
@property (nonatomic, readonly, copy) NSString *SubjectCN;
@property (nonatomic, readonly, copy) NSString *SubjectDN;
@property (nonatomic, readonly, copy) NSString *SubjectE;
@property (nonatomic, readonly, copy) NSString *SubjectKeyId;
@property (nonatomic, readonly, copy) NSString *SubjectL;
@property (nonatomic, readonly, copy) NSString *SubjectO;
@property (nonatomic, readonly, copy) NSString *SubjectOU;
@property (nonatomic, readonly, copy) NSString *SubjectS;
@property (nonatomic, readonly) BOOL TrustedRoot;
@property (nonatomic, readonly, copy) NSDate *ValidFrom;
@property (nonatomic, readonly, copy) NSString *ValidFromStr;
@property (nonatomic, readonly, copy) NSDate *ValidTo;
@property (nonatomic, readonly, copy) NSString *ValidToStr;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CheckRevoked
- (NSNumber *)CheckRevoked;
// method: ExportCertDer
- (NSData *)ExportCertDer;
// method: ExportCertDerFile
- (BOOL)ExportCertDerFile: (NSString *)path;
// method: ExportCertPem
- (NSString *)ExportCertPem;
// method: ExportCertPemFile
- (BOOL)ExportCertPemFile: (NSString *)path;
// method: ExportCertXml
- (NSString *)ExportCertXml;
// method: ExportPrivateKey
- (CkoPrivateKey *)ExportPrivateKey;
// method: ExportPublicKey
- (CkoPublicKey *)ExportPublicKey;
// method: ExportToPfxData
- (NSData *)ExportToPfxData: (NSString *)password 
	includeCertChain: (BOOL)includeCertChain;
// method: FindIssuer
- (CkoCert *)FindIssuer;
// method: GetCertChain
- (CkoCertChain *)GetCertChain;
// method: GetEncoded
- (NSString *)GetEncoded;
// method: GetExtensionAsXml
- (NSString *)GetExtensionAsXml: (NSString *)oid;
// method: GetPrivateKeyPem
- (NSString *)GetPrivateKeyPem;
// method: GetValidFromDt
- (CkoDateTime *)GetValidFromDt;
// method: GetValidToDt
- (CkoDateTime *)GetValidToDt;
// method: HasPrivateKey
- (BOOL)HasPrivateKey;
// method: LoadFromBase64
- (BOOL)LoadFromBase64: (NSString *)encodedCert;
// method: LoadFromBinary
- (BOOL)LoadFromBinary: (NSData *)data;
// method: LoadFromBinary2
- (BOOL)LoadFromBinary2: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData;
// method: LoadFromFile
- (BOOL)LoadFromFile: (NSString *)path;
// method: LoadPem
- (BOOL)LoadPem: (NSString *)strPem;
// method: LoadPfxData
- (BOOL)LoadPfxData: (NSData *)pfxData 
	password: (NSString *)password;
// method: LoadPfxData2
- (BOOL)LoadPfxData2: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData 
	password: (NSString *)password;
// method: LoadPfxFile
- (BOOL)LoadPfxFile: (NSString *)path 
	password: (NSString *)password;
// method: PemFileToDerFile
- (BOOL)PemFileToDerFile: (NSString *)fromPath 
	toPath: (NSString *)toPath;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveToFile
- (BOOL)SaveToFile: (NSString *)path;
// method: SetFromEncoded
- (BOOL)SetFromEncoded: (NSString *)encodedCert;
// method: SetPrivateKey
- (BOOL)SetPrivateKey: (CkoPrivateKey *)privKey;
// method: SetPrivateKeyPem
- (BOOL)SetPrivateKeyPem: (NSString *)privKeyPem;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;
// method: VerifySignature
- (BOOL)VerifySignature;

@end
