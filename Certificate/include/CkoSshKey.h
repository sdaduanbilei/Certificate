// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  SshKey
// Wrapped Chilkat C++ class name =  CkSshKey



@interface CkoSshKey : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *Comment;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly) BOOL IsDsaKey;
@property (nonatomic, readonly) BOOL IsPrivateKey;
@property (nonatomic, readonly) BOOL IsRsaKey;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSString *Password;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: FromOpenSshPrivateKey
- (BOOL)FromOpenSshPrivateKey: (NSString *)keyStr;
// method: FromOpenSshPublicKey
- (BOOL)FromOpenSshPublicKey: (NSString *)keyStr;
// method: FromPuttyPrivateKey
- (BOOL)FromPuttyPrivateKey: (NSString *)keyStr;
// method: FromRfc4716PublicKey
- (BOOL)FromRfc4716PublicKey: (NSString *)keyStr;
// method: FromXml
- (BOOL)FromXml: (NSString *)xmlKey;
// method: GenFingerprint
- (NSString *)GenFingerprint;
// method: GenerateDsaKey
- (BOOL)GenerateDsaKey: (NSNumber *)numBits;
// method: GenerateRsaKey
- (BOOL)GenerateRsaKey: (NSNumber *)numBits 
	exponent: (NSNumber *)exponent;
// method: LoadText
- (NSString *)LoadText: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveText
- (BOOL)SaveText: (NSString *)strToSave 
	path: (NSString *)path;
// method: ToOpenSshPrivateKey
- (NSString *)ToOpenSshPrivateKey: (BOOL)bEncrypt;
// method: ToOpenSshPublicKey
- (NSString *)ToOpenSshPublicKey;
// method: ToPuttyPrivateKey
- (NSString *)ToPuttyPrivateKey: (BOOL)bEncrypt;
// method: ToRfc4716PublicKey
- (NSString *)ToRfc4716PublicKey;
// method: ToXml
- (NSString *)ToXml;

@end
