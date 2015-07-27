// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Tar
// Wrapped Chilkat C++ class name =  CkTar



@class CkoTarProgress;

@interface CkoTar : NSObject {

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
- (void)setEventCallbackObject: (CkoTarProgress *)eventObj;

@property (nonatomic) BOOL CaptureXmlListing;

@property (nonatomic, copy) NSString *Charset;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *DirMode;

@property (nonatomic, copy) NSString *DirPrefix;

@property (nonatomic, copy) NSNumber *FileMode;

@property (nonatomic, copy) NSNumber *GroupId;

@property (nonatomic, copy) NSString *GroupName;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL MatchCaseSensitive;

@property (nonatomic, copy) NSString *MustMatch;

@property (nonatomic, copy) NSString *MustNotMatch;

@property (nonatomic) BOOL NoAbsolutePaths;

@property (nonatomic, readonly, copy) NSNumber *NumDirRoots;
@property (nonatomic, copy) NSNumber *PercentDoneScale;

@property (nonatomic, copy) NSNumber *ScriptFileMode;

@property (nonatomic) BOOL SuppressOutput;

@property (nonatomic) BOOL UntarCaseSensitive;

@property (nonatomic) BOOL UntarDebugLog;

@property (nonatomic) BOOL UntarDiscardPaths;

@property (nonatomic, copy) NSString *UntarFromDir;

@property (nonatomic, copy) NSString *UntarMatchPattern;

@property (nonatomic, copy) NSNumber *UntarMaxCount;

@property (nonatomic, copy) NSNumber *UserId;

@property (nonatomic, copy) NSString *UserName;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSString *WriteFormat;

@property (nonatomic, copy) NSString *XmlListing;

// method: AddDirRoot
- (BOOL)AddDirRoot: (NSString *)dirPath;
// method: AddFile
- (BOOL)AddFile: (NSString *)path;
// method: GetDirRoot
- (NSString *)GetDirRoot: (NSNumber *)index;
// method: ListXml
- (NSString *)ListXml: (NSString *)tarPath;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: Untar
- (NSNumber *)Untar: (NSString *)tarPath;
// method: UntarBz2
- (BOOL)UntarBz2: (NSString *)tarPath;
// method: UntarFirstMatchingToMemory
- (NSData *)UntarFirstMatchingToMemory: (NSData *)tarFileBytes 
	matchPattern: (NSString *)matchPattern;
// method: UntarFromMemory
- (NSNumber *)UntarFromMemory: (NSData *)tarFileBytes;
// method: UntarGz
- (BOOL)UntarGz: (NSString *)tarPath;
// method: UntarZ
- (BOOL)UntarZ: (NSString *)tarPath;
// method: VerifyTar
- (BOOL)VerifyTar: (NSString *)tarPath;
// method: WriteTar
- (BOOL)WriteTar: (NSString *)tarPath;
// method: WriteTarBz2
- (BOOL)WriteTarBz2: (NSString *)bz2Path;
// method: WriteTarGz
- (BOOL)WriteTarGz: (NSString *)gzPath;

@end
