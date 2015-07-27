// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  HttpRequest
// Wrapped Chilkat C++ class name =  CkHttpRequest



@interface CkoHttpRequest : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *Boundary;

@property (nonatomic, copy) NSString *Charset;

@property (nonatomic, copy) NSString *ContentType;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *EntireHeader;

@property (nonatomic, copy) NSString *HttpVerb;

@property (nonatomic, copy) NSString *HttpVersion;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumHeaderFields;
@property (nonatomic, readonly, copy) NSNumber *NumParams;
@property (nonatomic, copy) NSString *Path;

@property (nonatomic) BOOL SendCharset;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddBytesForUpload
- (BOOL)AddBytesForUpload: (NSString *)name 
	filename: (NSString *)filename 
	byteData: (NSData *)byteData;
// method: AddBytesForUpload2
- (BOOL)AddBytesForUpload2: (NSString *)name 
	filename: (NSString *)filename 
	byteData: (NSData *)byteData 
	contentType: (NSString *)contentType;
// method: AddFileForUpload
- (BOOL)AddFileForUpload: (NSString *)name 
	path: (NSString *)path;
// method: AddFileForUpload2
- (BOOL)AddFileForUpload2: (NSString *)name 
	path: (NSString *)path 
	contentType: (NSString *)contentType;
// method: AddHeader
- (void)AddHeader: (NSString *)name 
	value: (NSString *)value;
// method: AddParam
- (void)AddParam: (NSString *)name 
	value: (NSString *)value;
// method: AddStringForUpload
- (BOOL)AddStringForUpload: (NSString *)name 
	filename: (NSString *)filename 
	strData: (NSString *)strData 
	charset: (NSString *)charset;
// method: AddStringForUpload2
- (BOOL)AddStringForUpload2: (NSString *)name 
	filename: (NSString *)filename 
	strData: (NSString *)strData 
	charset: (NSString *)charset 
	contentType: (NSString *)contentType;
// method: GenerateRequestText
- (NSString *)GenerateRequestText;
// method: GetHeaderField
- (NSString *)GetHeaderField: (NSString *)name;
// method: GetHeaderName
- (NSString *)GetHeaderName: (NSNumber *)index;
// method: GetHeaderValue
- (NSString *)GetHeaderValue: (NSNumber *)index;
// method: GetParam
- (NSString *)GetParam: (NSString *)name;
// method: GetParamName
- (NSString *)GetParamName: (NSNumber *)index;
// method: GetParamValue
- (NSString *)GetParamValue: (NSNumber *)index;
// method: GetUrlEncodedParams
- (NSString *)GetUrlEncodedParams;
// method: LoadBodyFromBytes
- (BOOL)LoadBodyFromBytes: (NSData *)binaryData;
// method: LoadBodyFromFile
- (BOOL)LoadBodyFromFile: (NSString *)path;
// method: LoadBodyFromString
- (BOOL)LoadBodyFromString: (NSString *)bodyStr 
	charset: (NSString *)charset;
// method: RemoveAllParams
- (void)RemoveAllParams;
// method: RemoveHeader
- (BOOL)RemoveHeader: (NSString *)name;
// method: RemoveParam
- (void)RemoveParam: (NSString *)name;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetFromUrl
- (void)SetFromUrl: (NSString *)url;
// method: StreamBodyFromFile
- (BOOL)StreamBodyFromFile: (NSString *)path;
// method: UseGet
- (void)UseGet;
// method: UseHead
- (void)UseHead;
// method: UsePost
- (void)UsePost;
// method: UsePostMultipartForm
- (void)UsePostMultipartForm;
// method: UsePut
- (void)UsePut;
// method: UseUpload
- (void)UseUpload;
// method: UseUploadPut
- (void)UseUploadPut;
// method: UseXmlHttp
- (void)UseXmlHttp: (NSString *)xmlBody;

@end
