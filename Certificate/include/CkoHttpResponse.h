// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  HttpResponse
// Wrapped Chilkat C++ class name =  CkHttpResponse



@interface CkoHttpResponse : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSData *Body;
@property (nonatomic, readonly, copy) NSString *BodyQP;
@property (nonatomic, readonly, copy) NSString *BodyStr;
@property (nonatomic, readonly, copy) NSString *Charset;
@property (nonatomic, readonly, copy) NSNumber *ContentLength;
@property (nonatomic, readonly, copy) NSDate *Date;
@property (nonatomic, readonly, copy) NSString *DateStr;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *Domain;
@property (nonatomic, readonly, copy) NSString *FinalRedirectUrl;
@property (nonatomic, readonly, copy) NSString *FullMime;
@property (nonatomic, readonly, copy) NSString *Header;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumCookies;
@property (nonatomic, readonly, copy) NSNumber *NumHeaderFields;
@property (nonatomic, readonly, copy) NSNumber *StatusCode;
@property (nonatomic, readonly, copy) NSString *StatusLine;
@property (nonatomic, readonly, copy) NSString *StatusText;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: GetCookieDomain
- (NSString *)GetCookieDomain: (NSNumber *)index;
// method: GetCookieExpires
- (NSDate *)GetCookieExpires: (NSNumber *)index;
// method: GetCookieExpiresStr
- (NSString *)GetCookieExpiresStr: (NSNumber *)index;
// method: GetCookieName
- (NSString *)GetCookieName: (NSNumber *)index;
// method: GetCookiePath
- (NSString *)GetCookiePath: (NSNumber *)index;
// method: GetCookieValue
- (NSString *)GetCookieValue: (NSNumber *)index;
// method: GetHeaderField
- (NSString *)GetHeaderField: (NSString *)fieldName;
// method: GetHeaderFieldAttr
- (NSString *)GetHeaderFieldAttr: (NSString *)fieldName 
	attrName: (NSString *)attrName;
// method: GetHeaderName
- (NSString *)GetHeaderName: (NSNumber *)index;
// method: GetHeaderValue
- (NSString *)GetHeaderValue: (NSNumber *)index;
// method: SaveBodyBinary
- (BOOL)SaveBodyBinary: (NSString *)path;
// method: SaveBodyText
- (BOOL)SaveBodyText: (BOOL)bCrlf 
	path: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UrlEncParamValue
- (NSString *)UrlEncParamValue: (NSString *)encodedParams 
	paramName: (NSString *)paramName;

@end
