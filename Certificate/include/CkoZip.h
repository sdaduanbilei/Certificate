// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.51

// Generic/internal class name =  Zip
// Wrapped Chilkat C++ class name =  CkZip

@class CkoZipEntry;
@class CkoStringArray;


@class CkoZipProgress;

@interface CkoZip : NSObject {

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
- (void)setEventCallbackObject: (CkoZipProgress *)eventObj;

@property (nonatomic, copy) NSString *AppendFromDir;

@property (nonatomic) BOOL CaseSensitive;

@property (nonatomic) BOOL ClearArchiveAttribute;

@property (nonatomic) BOOL ClearReadOnlyAttr;

@property (nonatomic, copy) NSString *Comment;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *DecryptPassword;

@property (nonatomic) BOOL DiscardPaths;

@property (nonatomic, copy) NSNumber *EncryptKeyLength;

@property (nonatomic, copy) NSString *EncryptPassword;

@property (nonatomic, copy) NSNumber *Encryption;

@property (nonatomic, readonly, copy) NSNumber *FileCount;
@property (nonatomic, copy) NSString *FileName;

@property (nonatomic, readonly) BOOL HasZipFormatErrors;
@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic) BOOL IgnoreAccessDenied;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumEntries;
@property (nonatomic, copy) NSNumber *OemCodePage;

@property (nonatomic) BOOL OverwriteExisting;

@property (nonatomic) BOOL PasswordProtect;

@property (nonatomic, copy) NSString *PathPrefix;

@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, copy) NSString *TempDir;

@property (nonatomic) BOOL TextFlag;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic) BOOL Zipx;

@property (nonatomic, copy) NSString *ZipxDefaultAlg;

// method: AddNoCompressExtension
- (void)AddNoCompressExtension: (NSString *)fileExtension;
// method: AppendBase64
- (CkoZipEntry *)AppendBase64: (NSString *)pathInZip 
	data: (NSString *)data;
// method: AppendCompressed
- (CkoZipEntry *)AppendCompressed: (NSString *)pathInZip 
	data: (NSData *)data;
// method: AppendData
- (CkoZipEntry *)AppendData: (NSString *)pathInZip 
	data: (NSData *)data;
// method: AppendFiles
- (BOOL)AppendFiles: (NSString *)filePattern 
	recurse: (BOOL)recurse;
// method: AppendFilesEx
- (BOOL)AppendFilesEx: (NSString *)filePattern 
	recurse: (BOOL)recurse 
	saveExtraPath: (BOOL)saveExtraPath 
	archiveOnly: (BOOL)archiveOnly 
	includeHidden: (BOOL)includeHidden 
	includeSystem: (BOOL)includeSystem;
// method: AppendHex
- (CkoZipEntry *)AppendHex: (NSString *)pathInZip 
	data: (NSString *)data;
// method: AppendMultiple
- (BOOL)AppendMultiple: (CkoStringArray *)fileSpecs 
	recurse: (BOOL)recurse;
// method: AppendNew
- (CkoZipEntry *)AppendNew: (NSString *)pathInZip;
// method: AppendNewDir
- (CkoZipEntry *)AppendNewDir: (NSString *)pathInZip;
// method: AppendOneFileOrDir
- (BOOL)AppendOneFileOrDir: (NSString *)path 
	saveExtraPath: (BOOL)saveExtraPath;
// method: AppendString
- (CkoZipEntry *)AppendString: (NSString *)pathInZip 
	str: (NSString *)str;
// method: AppendString2
- (CkoZipEntry *)AppendString2: (NSString *)pathInZip 
	str: (NSString *)str 
	charset: (NSString *)charset;
// method: AppendZip
- (BOOL)AppendZip: (NSString *)zipPath;
// method: CloseZip
- (void)CloseZip;
// method: DeleteEntry
- (BOOL)DeleteEntry: (CkoZipEntry *)entry;
// method: ExcludeDir
- (void)ExcludeDir: (NSString *)dirName;
// method: Extract
- (BOOL)Extract: (NSString *)dirPath;
// method: ExtractInto
- (BOOL)ExtractInto: (NSString *)dirPath;
// method: ExtractMatching
- (BOOL)ExtractMatching: (NSString *)dirPath 
	pattern: (NSString *)pattern;
// method: ExtractNewer
- (BOOL)ExtractNewer: (NSString *)dirPath;
// method: ExtractOne
- (BOOL)ExtractOne: (CkoZipEntry *)entry 
	dirPath: (NSString *)dirPath;
// method: FirstEntry
- (CkoZipEntry *)FirstEntry;
// method: FirstMatchingEntry
- (CkoZipEntry *)FirstMatchingEntry: (NSString *)pattern;
// method: GetDirectoryAsXML
- (NSString *)GetDirectoryAsXML;
// method: GetEntryByID
- (CkoZipEntry *)GetEntryByID: (NSNumber *)entryID;
// method: GetEntryByIndex
- (CkoZipEntry *)GetEntryByIndex: (NSNumber *)index;
// method: GetEntryByName
- (CkoZipEntry *)GetEntryByName: (NSString *)entryName;
// method: GetExclusions
- (CkoStringArray *)GetExclusions;
// method: InsertNew
- (CkoZipEntry *)InsertNew: (NSString *)pathInZip 
	beforeIndex: (NSNumber *)beforeIndex;
// method: IsNoCompressExtension
- (BOOL)IsNoCompressExtension: (NSString *)fileExtension;
// method: IsPasswordProtected
- (BOOL)IsPasswordProtected: (NSString *)zipPath;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: NewZip
- (BOOL)NewZip: (NSString *)zipPath;
// method: OpenFromByteData
- (BOOL)OpenFromByteData: (NSData *)byteData;
// method: OpenFromMemory
- (BOOL)OpenFromMemory: (NSData *)inData;
// method: OpenZip
- (BOOL)OpenZip: (NSString *)zipPath;
// method: QuickAppend
- (BOOL)QuickAppend: (NSString *)zipPath;
// method: RemoveNoCompressExtension
- (void)RemoveNoCompressExtension: (NSString *)fileExtension;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetCompressionLevel
- (void)SetCompressionLevel: (NSNumber *)level;
// method: SetExclusions
- (void)SetExclusions: (CkoStringArray *)excludePatterns;
// method: SetPassword
- (void)SetPassword: (NSString *)password;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)regCode;
// method: Unzip
- (NSNumber *)Unzip: (NSString *)dirPath;
// method: UnzipInto
- (NSNumber *)UnzipInto: (NSString *)dirPath;
// method: UnzipMatching
- (NSNumber *)UnzipMatching: (NSString *)dirPath 
	pattern: (NSString *)pattern 
	verbose: (BOOL)verbose;
// method: UnzipMatchingInto
- (NSNumber *)UnzipMatchingInto: (NSString *)dirPath 
	pattern: (NSString *)pattern 
	verbose: (BOOL)verbose;
// method: UnzipNewer
- (NSNumber *)UnzipNewer: (NSString *)dirPath;
// method: VerifyPassword
- (BOOL)VerifyPassword;
// method: WriteToMemory
- (NSData *)WriteToMemory;
// method: WriteZip
- (BOOL)WriteZip;
// method: WriteZipAndClose
- (BOOL)WriteZipAndClose;

@end
