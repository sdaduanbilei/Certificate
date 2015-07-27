// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Mht
// Wrapped Chilkat C++ class name =  CkMht



@class CkoBaseProgress;

@interface CkoMht : NSObject {

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

@property (nonatomic, copy) NSString *BaseUrl;

@property (nonatomic, copy) NSNumber *ConnectTimeout;

@property (nonatomic, copy) NSString *DebugHtmlAfter;

@property (nonatomic, copy) NSString *DebugHtmlBefore;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic) BOOL DebugTagCleaning;

@property (nonatomic) BOOL EmbedImages;

@property (nonatomic) BOOL EmbedLocalOnly;

@property (nonatomic) BOOL FetchFromCache;

@property (nonatomic, copy) NSNumber *HeartbeatMs;

@property (nonatomic) BOOL IgnoreMustRevalidate;

@property (nonatomic) BOOL IgnoreNoCache;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL NoScripts;

@property (nonatomic) BOOL NtlmAuth;

@property (nonatomic, copy) NSNumber *NumCacheLevels;

@property (nonatomic, readonly, copy) NSNumber *NumCacheRoots;
@property (nonatomic) BOOL PreferIpv6;

@property (nonatomic) BOOL PreferMHTScripts;

@property (nonatomic, copy) NSString *Proxy;

@property (nonatomic, copy) NSString *ProxyLogin;

@property (nonatomic, copy) NSString *ProxyPassword;

@property (nonatomic, copy) NSNumber *ReadTimeout;

@property (nonatomic) BOOL RequireSslCertVerify;

@property (nonatomic, copy) NSString *SocksHostname;

@property (nonatomic, copy) NSString *SocksPassword;

@property (nonatomic, copy) NSNumber *SocksPort;

@property (nonatomic, copy) NSString *SocksUsername;

@property (nonatomic, copy) NSNumber *SocksVersion;

@property (nonatomic) BOOL UnpackDirect;

@property (nonatomic) BOOL UnpackUseRelPaths;

@property (nonatomic) BOOL UpdateCache;

@property (nonatomic) BOOL UseCids;

@property (nonatomic) BOOL UseFilename;

@property (nonatomic) BOOL UseIEProxy;

@property (nonatomic) BOOL UseInline;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSString *WebSiteLogin;

@property (nonatomic, copy) NSString *WebSiteLoginDomain;

@property (nonatomic, copy) NSString *WebSitePassword;

// method: AddCacheRoot
- (void)AddCacheRoot: (NSString *)dir;
// method: AddCustomHeader
- (void)AddCustomHeader: (NSString *)name 
	value: (NSString *)value;
// method: AddExternalStyleSheet
- (void)AddExternalStyleSheet: (NSString *)url;
// method: ClearCustomHeaders
- (void)ClearCustomHeaders;
// method: ExcludeImagesMatching
- (void)ExcludeImagesMatching: (NSString *)pattern;
// method: GetAndSaveEML
- (BOOL)GetAndSaveEML: (NSString *)url 
	emlPath: (NSString *)emlPath;
// method: GetAndSaveMHT
- (BOOL)GetAndSaveMHT: (NSString *)url 
	mhtPath: (NSString *)mhtPath;
// method: GetAndZipEML
- (BOOL)GetAndZipEML: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath;
// method: GetAndZipMHT
- (BOOL)GetAndZipMHT: (NSString *)url 
	zipEntryFilename: (NSString *)zipEntryFilename 
	zipPath: (NSString *)zipPath;
// method: GetCacheRoot
- (NSString *)GetCacheRoot: (NSNumber *)index;
// method: GetEML
- (NSString *)GetEML: (NSString *)url;
// method: GetMHT
- (NSString *)GetMHT: (NSString *)url;
// method: HtmlToEML
- (NSString *)HtmlToEML: (NSString *)htmlText;
// method: HtmlToEMLFile
- (BOOL)HtmlToEMLFile: (NSString *)html 
	emlPath: (NSString *)emlPath;
// method: HtmlToMHT
- (NSString *)HtmlToMHT: (NSString *)htmlText;
// method: HtmlToMHTFile
- (BOOL)HtmlToMHTFile: (NSString *)html 
	mhtPath: (NSString *)mhtPath;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: RemoveCustomHeader
- (void)RemoveCustomHeader: (NSString *)name;
// method: RestoreDefaults
- (void)RestoreDefaults;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UnpackMHT
- (BOOL)UnpackMHT: (NSString *)mhtPath 
	unpackDir: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubDir: (NSString *)partsSubDir;
// method: UnpackMHTString
- (BOOL)UnpackMHTString: (NSString *)mhtContents 
	unpackDir: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubDir: (NSString *)partsSubDir;

@end
