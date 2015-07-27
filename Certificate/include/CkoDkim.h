// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Dkim
// Wrapped Chilkat C++ class name =  CkDkim



@class CkoBaseProgress;

@interface CkoDkim : NSObject {

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

@property (nonatomic, copy) NSString *DkimAlg;

@property (nonatomic, copy) NSNumber *DkimBodyLengthCount;

@property (nonatomic, copy) NSString *DkimCanon;

@property (nonatomic, copy) NSString *DkimDomain;

@property (nonatomic, copy) NSString *DkimHeaders;

@property (nonatomic, copy) NSString *DkimSelector;

@property (nonatomic, copy) NSString *DomainKeyAlg;

@property (nonatomic, copy) NSString *DomainKeyCanon;

@property (nonatomic, copy) NSString *DomainKeyDomain;

@property (nonatomic, copy) NSString *DomainKeyHeaders;

@property (nonatomic, copy) NSString *DomainKeySelector;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddDkimSignature
- (NSData *)AddDkimSignature: (NSData *)mimeIn;
// method: AddDomainKeySignature
- (NSData *)AddDomainKeySignature: (NSData *)mimeIn;
// method: LoadDkimPk
- (BOOL)LoadDkimPk: (NSString *)privateKey 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadDkimPkBytes
- (BOOL)LoadDkimPkBytes: (NSData *)privateKeyDer 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadDkimPkFile
- (BOOL)LoadDkimPkFile: (NSString *)privateKeyFilepath 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadDomainKeyPk
- (BOOL)LoadDomainKeyPk: (NSString *)privateKey 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadDomainKeyPkBytes
- (BOOL)LoadDomainKeyPkBytes: (NSData *)privateKeyDer 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadDomainKeyPkFile
- (BOOL)LoadDomainKeyPkFile: (NSString *)privateKeyFilepath 
	optionalPassword: (NSString *)optionalPassword;
// method: LoadPublicKey
- (BOOL)LoadPublicKey: (NSString *)selector 
	domain: (NSString *)domain 
	publicKey: (NSString *)publicKey;
// method: LoadPublicKeyFile
- (BOOL)LoadPublicKeyFile: (NSString *)selector 
	domain: (NSString *)domain 
	publicKeyFilepath: (NSString *)publicKeyFilepath;
// method: NumDkimSignatures
- (NSNumber *)NumDkimSignatures: (NSData *)mimeData;
// method: NumDomainKeySignatures
- (NSNumber *)NumDomainKeySignatures: (NSData *)mimeData;
// method: PrefetchPublicKey
- (BOOL)PrefetchPublicKey: (NSString *)selector 
	domain: (NSString *)domain;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: VerifyDkimSignature
- (BOOL)VerifyDkimSignature: (NSNumber *)sigIdx 
	mimeData: (NSData *)mimeData;
// method: VerifyDomainKeySignature
- (BOOL)VerifyDomainKeySignature: (NSNumber *)sigIdx 
	mimeData: (NSData *)mimeData;

@end
