// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  DirTree
// Wrapped Chilkat C++ class name =  CkDirTree



@interface CkoDirTree : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *BaseDir;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly) BOOL DoneIterating;
@property (nonatomic, readonly, copy) NSNumber *FileSize32;
@property (nonatomic, readonly, copy) NSNumber *FileSize64;
@property (nonatomic, readonly, copy) NSString *FullPath;
@property (nonatomic, readonly, copy) NSString *FullUncPath;
@property (nonatomic, readonly) BOOL IsDirectory;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL Recurse;

@property (nonatomic, readonly, copy) NSString *RelativePath;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AdvancePosition
- (BOOL)AdvancePosition;
// method: BeginIterate
- (BOOL)BeginIterate;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
