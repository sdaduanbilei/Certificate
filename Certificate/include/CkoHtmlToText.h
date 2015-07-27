// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  HtmlToText
// Wrapped Chilkat C++ class name =  CkHtmlToText



@interface CkoHtmlToText : NSObject {

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

@property (nonatomic) BOOL DecodeHtmlEntities;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSNumber *RightMargin;

@property (nonatomic) BOOL SuppressLinks;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: ReadFileToString
- (NSString *)ReadFileToString: (NSString *)path 
	srcCharset: (NSString *)srcCharset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: ToText
- (NSString *)ToText: (NSString *)html;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)code;
// method: WriteStringToFile
- (BOOL)WriteStringToFile: (NSString *)str 
	path: (NSString *)path 
	charset: (NSString *)charset;

@end
