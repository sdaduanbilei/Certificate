// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  HtmlToXml
// Wrapped Chilkat C++ class name =  CkHtmlToXml



@interface CkoHtmlToXml : NSObject {

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

@property (nonatomic) BOOL DropCustomTags;

@property (nonatomic, copy) NSString *Html;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSNumber *Nbsp;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSString *XmlCharset;

// method: ConvertFile
- (BOOL)ConvertFile: (NSString *)inHtmlPath 
	destXmlPath: (NSString *)destXmlPath;
// method: DropTagType
- (void)DropTagType: (NSString *)tagName;
// method: DropTextFormattingTags
- (void)DropTextFormattingTags;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: ReadFile
- (NSData *)ReadFile: (NSString *)path;
// method: ReadFileToString
- (NSString *)ReadFileToString: (NSString *)path 
	srcCharset: (NSString *)srcCharset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetHtmlBytes
- (void)SetHtmlBytes: (NSData *)inData;
// method: SetHtmlFromFile
- (BOOL)SetHtmlFromFile: (NSString *)path;
// method: ToXml
- (NSString *)ToXml;
// method: UndropTagType
- (void)UndropTagType: (NSString *)tagName;
// method: UndropTextFormattingTags
- (void)UndropTextFormattingTags;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path 
	fileData: (NSData *)fileData;
// method: WriteStringToFile
- (BOOL)WriteStringToFile: (NSString *)str 
	path: (NSString *)path 
	charset: (NSString *)charset;
// method: Xml
- (NSString *)Xml;

@end
