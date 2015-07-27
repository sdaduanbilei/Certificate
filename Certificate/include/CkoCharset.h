// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Charset
// Wrapped Chilkat C++ class name =  CkCharset



@interface CkoCharset : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *AltToCharset;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *ErrorAction;

@property (nonatomic, copy) NSString *FromCharset;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastInputAsHex;
@property (nonatomic, readonly, copy) NSString *LastInputAsQP;
@property (nonatomic, readonly, copy) NSString *LastOutputAsHex;
@property (nonatomic, readonly, copy) NSString *LastOutputAsQP;
@property (nonatomic) BOOL SaveLast;

@property (nonatomic, copy) NSString *ToCharset;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CharsetToCodePage
- (NSNumber *)CharsetToCodePage: (NSString *)charsetName;
// method: CodePageToCharset
- (NSString *)CodePageToCharset: (NSNumber *)codePage;
// method: ConvertData
- (NSData *)ConvertData: (NSData *)inData;
// method: ConvertFile
- (BOOL)ConvertFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: ConvertFileNoPreamble
- (BOOL)ConvertFileNoPreamble: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: ConvertFromUnicode
- (NSData *)ConvertFromUnicode: (NSString *)inData;
// method: ConvertFromUtf16
- (NSData *)ConvertFromUtf16: (NSData *)uniData;
// method: ConvertHtml
- (NSData *)ConvertHtml: (NSData *)htmlIn;
// method: ConvertHtmlFile
- (BOOL)ConvertHtmlFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: ConvertToUnicode
- (NSString *)ConvertToUnicode: (NSData *)inData;
// method: ConvertToUtf16
- (NSData *)ConvertToUtf16: (NSData *)mbData;
// method: EntityEncodeDec
- (NSString *)EntityEncodeDec: (NSString *)inStr;
// method: EntityEncodeHex
- (NSString *)EntityEncodeHex: (NSString *)inStr;
// method: GetHtmlCharset
- (NSString *)GetHtmlCharset: (NSData *)htmlData;
// method: GetHtmlFileCharset
- (NSString *)GetHtmlFileCharset: (NSString *)htmlPath;
// method: HtmlDecodeToStr
- (NSString *)HtmlDecodeToStr: (NSString *)str;
// method: HtmlEntityDecode
- (NSData *)HtmlEntityDecode: (NSData *)inData;
// method: HtmlEntityDecodeFile
- (BOOL)HtmlEntityDecodeFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: LowerCase
- (NSString *)LowerCase: (NSString *)inStr;
// method: ReadFile
- (NSData *)ReadFile: (NSString *)path;
// method: ReadFileToString
- (NSString *)ReadFileToString: (NSString *)path 
	srcCharset: (NSString *)srcCharset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetErrorBytes
- (void)SetErrorBytes: (NSData *)data;
// method: SetErrorString
- (void)SetErrorString: (NSString *)str 
	charset: (NSString *)charset;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UpperCase
- (NSString *)UpperCase: (NSString *)inStr;
// method: UrlDecodeStr
- (NSString *)UrlDecodeStr: (NSString *)inStr;
// method: VerifyData
- (BOOL)VerifyData: (NSString *)charset 
	charData: (NSData *)charData;
// method: VerifyFile
- (BOOL)VerifyFile: (NSString *)charset 
	path: (NSString *)path;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path 
	dataBuf: (NSData *)dataBuf;
// method: WriteStringToFile
- (BOOL)WriteStringToFile: (NSString *)str 
	path: (NSString *)path 
	charset: (NSString *)charset;

@end
