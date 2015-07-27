// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  FileAccess
// Wrapped Chilkat C++ class name =  CkFileAccess

@class CkoDateTime;


@interface CkoFileAccess : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSString *CurrentDir;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly) BOOL EndOfFile;
@property (nonatomic, readonly, copy) NSNumber *FileOpenError;
@property (nonatomic, readonly, copy) NSString *FileOpenErrorMsg;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AppendAnsi
- (BOOL)AppendAnsi: (NSString *)text;
// method: AppendText
- (BOOL)AppendText: (NSString *)text 
	charset: (NSString *)charset;
// method: AppendUnicodeBOM
- (BOOL)AppendUnicodeBOM;
// method: AppendUtf8BOM
- (BOOL)AppendUtf8BOM;
// method: DirAutoCreate
- (BOOL)DirAutoCreate: (NSString *)path;
// method: DirCreate
- (BOOL)DirCreate: (NSString *)path;
// method: DirDelete
- (BOOL)DirDelete: (NSString *)path;
// method: DirEnsureExists
- (BOOL)DirEnsureExists: (NSString *)filePath;
// method: FileClose
- (void)FileClose;
// method: FileContentsEqual
- (BOOL)FileContentsEqual: (NSString *)path1 
	path2: (NSString *)path2;
// method: FileCopy
- (BOOL)FileCopy: (NSString *)existingPath 
	newPath: (NSString *)newPath 
	failIfExists: (BOOL)failIfExists;
// method: FileDelete
- (BOOL)FileDelete: (NSString *)path;
// method: FileExists
- (BOOL)FileExists: (NSString *)path;
// method: FileExists3
- (NSNumber *)FileExists3: (NSString *)path;
// method: FileOpen
- (BOOL)FileOpen: (NSString *)path 
	accessMode: (NSNumber *)accessMode 
	shareMode: (NSNumber *)shareMode 
	createDisp: (NSNumber *)createDisp 
	attr: (NSNumber *)attr;
// method: FileRead
- (NSData *)FileRead: (NSNumber *)numBytes;
// method: FileRename
- (BOOL)FileRename: (NSString *)existingPath 
	newPath: (NSString *)newPath;
// method: FileSeek
- (BOOL)FileSeek: (NSNumber *)offset 
	origin: (NSNumber *)origin;
// method: FileSize
- (NSNumber *)FileSize: (NSString *)path;
// method: FileWrite
- (BOOL)FileWrite: (NSData *)data;
// method: GetTempFilename
- (NSString *)GetTempFilename: (NSString *)dirName 
	prefix: (NSString *)prefix;
// method: OpenForAppend
- (BOOL)OpenForAppend: (NSString *)filePath;
// method: OpenForRead
- (BOOL)OpenForRead: (NSString *)filePath;
// method: OpenForReadWrite
- (BOOL)OpenForReadWrite: (NSString *)filePath;
// method: OpenForWrite
- (BOOL)OpenForWrite: (NSString *)filePath;
// method: ReadBinaryToEncoded
- (NSString *)ReadBinaryToEncoded: (NSString *)path 
	encoding: (NSString *)encoding;
// method: ReadEntireFile
- (NSData *)ReadEntireFile: (NSString *)path;
// method: ReadEntireTextFile
- (NSString *)ReadEntireTextFile: (NSString *)path 
	charset: (NSString *)charset;
// method: ReassembleFile
- (BOOL)ReassembleFile: (NSString *)partsDirPath 
	partPrefix: (NSString *)partPrefix 
	partExtension: (NSString *)partExtension 
	reassembledFilename: (NSString *)reassembledFilename;
// method: ReplaceStrings
- (NSNumber *)ReplaceStrings: (NSString *)path 
	charset: (NSString *)charset 
	existingString: (NSString *)existingString 
	replacementString: (NSString *)replacementString;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetCurrentDir
- (BOOL)SetCurrentDir: (NSString *)path;
// method: SetFileTimes
- (BOOL)SetFileTimes: (NSString *)path 
	create: (CkoDateTime *)create 
	lastAccess: (CkoDateTime *)lastAccess 
	lastModified: (CkoDateTime *)lastModified;
// method: SetLastModified
- (BOOL)SetLastModified: (NSString *)path 
	lastModified: (CkoDateTime *)lastModified;
// method: SplitFile
- (BOOL)SplitFile: (NSString *)fileToSplit 
	partPrefix: (NSString *)partPrefix 
	partExtension: (NSString *)partExtension 
	partSize: (NSNumber *)partSize 
	destDir: (NSString *)destDir;
// method: TreeDelete
- (BOOL)TreeDelete: (NSString *)path;
// method: WriteEntireFile
- (BOOL)WriteEntireFile: (NSString *)path 
	fileData: (NSData *)fileData;
// method: WriteEntireTextFile
- (BOOL)WriteEntireTextFile: (NSString *)path 
	fileData: (NSString *)fileData 
	charset: (NSString *)charset 
	includePreamble: (BOOL)includePreamble;

@end
