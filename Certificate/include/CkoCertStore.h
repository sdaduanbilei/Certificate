// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  CertStore
// Wrapped Chilkat C++ class name =  CkCertStore

@class CkoCert;


@interface CkoCertStore : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumCertificates;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: FindCertByRfc822Name
- (CkoCert *)FindCertByRfc822Name: (NSString *)name;
// method: FindCertBySerial
- (CkoCert *)FindCertBySerial: (NSString *)serialNumber;
// method: FindCertBySha1Thumbprint
- (CkoCert *)FindCertBySha1Thumbprint: (NSString *)str;
// method: FindCertBySubject
- (CkoCert *)FindCertBySubject: (NSString *)subject;
// method: FindCertBySubjectCN
- (CkoCert *)FindCertBySubjectCN: (NSString *)commonName;
// method: FindCertBySubjectE
- (CkoCert *)FindCertBySubjectE: (NSString *)emailAddress;
// method: FindCertBySubjectO
- (CkoCert *)FindCertBySubjectO: (NSString *)organization;
// method: GetCertificate
- (CkoCert *)GetCertificate: (NSNumber *)index;
// method: LoadPemFile
- (BOOL)LoadPemFile: (NSString *)pemPath;
// method: LoadPemStr
- (BOOL)LoadPemStr: (NSString *)pemString;
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
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
