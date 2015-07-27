// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Global
// Wrapped Chilkat C++ class name =  CkGlobal



@interface CkoGlobal : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSNumber *AnsiCodePage;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic) BOOL DefaultUtf8;

@property (nonatomic, copy) NSNumber *DnsTimeToLive;

@property (nonatomic) BOOL EnableDnsCaching;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: DnsClearCache
- (BOOL)DnsClearCache;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockBundle
- (BOOL)UnlockBundle: (NSString *)bundleUnlockCode;

@end
