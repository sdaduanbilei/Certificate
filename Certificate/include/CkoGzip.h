// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Gzip
// Wrapped Chilkat C++ class name =  CkGzip

@class CkoDateTime;


@class CkoBaseProgress;

@interface CkoGzip : NSObject {

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

@property (nonatomic, copy) NSString *Comment;

@property (nonatomic, copy) NSNumber *CompressionLevel;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSData *ExtraData;

@property (nonatomic, copy) NSString *Filename;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSDate *LastMod;

@property (nonatomic, copy) NSString *LastModStr;

@property (nonatomic) BOOL UseCurrentDate;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CompressFile
- (BOOL)CompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressFile2
- (BOOL)CompressFile2: (NSString *)srcPath 
	embeddedFilename: (NSString *)embeddedFilename 
	destPath: (NSString *)destPath;
// method: CompressFileToMem
- (NSData *)CompressFileToMem: (NSString *)srcPath;
// method: CompressMemToFile
- (BOOL)CompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: CompressMemory
- (NSData *)CompressMemory: (NSData *)dbIn;
// method: CompressString
- (NSData *)CompressString: (NSString *)inStr 
	destCharset: (NSString *)destCharset;
// method: CompressStringENC
- (NSString *)CompressStringENC: (NSString *)strIn 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: CompressStringToFile
- (BOOL)CompressStringToFile: (NSString *)inStr 
	destCharset: (NSString *)destCharset 
	destPath: (NSString *)destPath;
// method: Decode
- (NSData *)Decode: (NSString *)str 
	encoding: (NSString *)encoding;
// method: DeflateStringENC
- (NSString *)DeflateStringENC: (NSString *)str 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: Encode
- (NSString *)Encode: (NSData *)byteData 
	encoding: (NSString *)encoding;
// method: ExamineFile
- (BOOL)ExamineFile: (NSString *)inGzPath;
// method: ExamineMemory
- (BOOL)ExamineMemory: (NSData *)inGzData;
// method: GetDt
- (CkoDateTime *)GetDt;
// method: InflateStringENC
- (NSString *)InflateStringENC: (NSString *)str 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: ReadFile
- (NSData *)ReadFile: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetDt
- (BOOL)SetDt: (CkoDateTime *)dt;
// method: UnTarGz
- (BOOL)UnTarGz: (NSString *)gzPath 
	destDir: (NSString *)destDir 
	bNoAbsolute: (BOOL)bNoAbsolute;
// method: UncompressFile
- (BOOL)UncompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: UncompressFileToMem
- (NSData *)UncompressFileToMem: (NSString *)srcPath;
// method: UncompressFileToString
- (NSString *)UncompressFileToString: (NSString *)srcPath 
	inCharset: (NSString *)inCharset;
// method: UncompressMemToFile
- (BOOL)UncompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: UncompressMemory
- (NSData *)UncompressMemory: (NSData *)dbIn;
// method: UncompressString
- (NSString *)UncompressString: (NSData *)inData 
	inCharset: (NSString *)inCharset;
// method: UncompressStringENC
- (NSString *)UncompressStringENC: (NSString *)strIn 
	charset: (NSString *)charset 
	encoding: (NSString *)encoding;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path 
	binaryData: (NSData *)binaryData;
// method: XfdlToXml
- (NSString *)XfdlToXml: (NSString *)xfdl;

@end
