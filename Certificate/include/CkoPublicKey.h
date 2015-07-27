// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  PublicKey
// Wrapped Chilkat C++ class name =  CkPublicKey



@interface CkoPublicKey : NSObject {

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
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: GetOpenSslDer
- (NSData *)GetOpenSslDer;
// method: GetOpenSslPem
- (NSString *)GetOpenSslPem;
// method: GetRsaDer
- (NSData *)GetRsaDer;
// method: GetXml
- (NSString *)GetXml;
// method: LoadBase64
- (BOOL)LoadBase64: (NSString *)keyStr;
// method: LoadOpenSslDer
- (BOOL)LoadOpenSslDer: (NSData *)data;
// method: LoadOpenSslDerFile
- (BOOL)LoadOpenSslDerFile: (NSString *)path;
// method: LoadOpenSslPem
- (BOOL)LoadOpenSslPem: (NSString *)str;
// method: LoadOpenSslPemFile
- (BOOL)LoadOpenSslPemFile: (NSString *)path;
// method: LoadPkcs1Pem
- (BOOL)LoadPkcs1Pem: (NSString *)str;
// method: LoadRsaDer
- (BOOL)LoadRsaDer: (NSData *)data;
// method: LoadRsaDerFile
- (BOOL)LoadRsaDerFile: (NSString *)path;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)xml;
// method: LoadXmlFile
- (BOOL)LoadXmlFile: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveOpenSslDerFile
- (BOOL)SaveOpenSslDerFile: (NSString *)path;
// method: SaveOpenSslPemFile
- (BOOL)SaveOpenSslPemFile: (NSString *)path;
// method: SaveRsaDerFile
- (BOOL)SaveRsaDerFile: (NSString *)path;
// method: SaveXmlFile
- (BOOL)SaveXmlFile: (NSString *)path;

@end
