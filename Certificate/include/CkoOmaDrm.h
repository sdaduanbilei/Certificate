// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  OmaDrm
// Wrapped Chilkat C++ class name =  CkOmaDrm



@interface CkoOmaDrm : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *Base64Key;

@property (nonatomic, copy) NSString *ContentType;

@property (nonatomic, copy) NSString *ContentUri;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSData *DecryptedData;
@property (nonatomic, readonly, copy) NSNumber *DrmContentVersion;
@property (nonatomic, readonly, copy) NSData *EncryptedData;
@property (nonatomic, copy) NSString *Headers;

@property (nonatomic, copy) NSData *IV;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CreateDcfFile
- (BOOL)CreateDcfFile: (NSString *)path;
// method: GetHeaderField
- (NSString *)GetHeaderField: (NSString *)fieldName;
// method: LoadDcfData
- (BOOL)LoadDcfData: (NSData *)data;
// method: LoadDcfFile
- (BOOL)LoadDcfFile: (NSString *)path;
// method: LoadUnencryptedData
- (void)LoadUnencryptedData: (NSData *)data;
// method: LoadUnencryptedFile
- (BOOL)LoadUnencryptedFile: (NSString *)path;
// method: SaveDecrypted
- (BOOL)SaveDecrypted: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetEncodedIV
- (void)SetEncodedIV: (NSString *)encodedIv 
	encoding: (NSString *)encoding;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
