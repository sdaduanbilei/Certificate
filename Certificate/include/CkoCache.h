// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Cache
// Wrapped Chilkat C++ class name =  CkCache

@class CkoDateTime;


@interface CkoCache : NSObject {

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

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *LastEtagFetched;
@property (nonatomic, readonly, copy) NSDate *LastExpirationFetched;
@property (nonatomic, readonly, copy) NSString *LastExpirationFetchedStr;
@property (nonatomic, readonly) BOOL LastHitExpired;
@property (nonatomic, readonly, copy) NSString *LastKeyFetched;
@property (nonatomic, copy) NSNumber *Level;

@property (nonatomic, readonly, copy) NSNumber *NumRoots;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddRoot
- (void)AddRoot: (NSString *)path;
// method: DeleteAll
- (NSNumber *)DeleteAll;
// method: DeleteAllExpired
- (NSNumber *)DeleteAllExpired;
// method: DeleteFromCache
- (BOOL)DeleteFromCache: (NSString *)key;
// method: DeleteOlder
- (NSNumber *)DeleteOlder: (NSDate *)dt;
// method: DeleteOlderDt
- (NSNumber *)DeleteOlderDt: (CkoDateTime *)dt;
// method: DeleteOlderStr
- (NSNumber *)DeleteOlderStr: (NSString *)dateTimeStr;
// method: FetchFromCache
- (NSData *)FetchFromCache: (NSString *)key;
// method: FetchText
- (NSString *)FetchText: (NSString *)key;
// method: GetEtag
- (NSString *)GetEtag: (NSString *)key;
// method: GetExpiration
- (NSDate *)GetExpiration: (NSString *)key;
// method: GetExpirationDt
- (CkoDateTime *)GetExpirationDt: (NSString *)key;
// method: GetExpirationStr
- (NSString *)GetExpirationStr: (NSString *)url;
// method: GetFilename
- (NSString *)GetFilename: (NSString *)key;
// method: GetRoot
- (NSString *)GetRoot: (NSNumber *)index;
// method: IsCached
- (BOOL)IsCached: (NSString *)key;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveText
- (BOOL)SaveText: (NSString *)key 
	expire: (NSDate *)expire 
	eTag: (NSString *)eTag 
	strData: (NSString *)strData;
// method: SaveTextDt
- (BOOL)SaveTextDt: (NSString *)key 
	expire: (CkoDateTime *)expire 
	eTag: (NSString *)eTag 
	strData: (NSString *)strData;
// method: SaveTextNoExpire
- (BOOL)SaveTextNoExpire: (NSString *)key 
	eTag: (NSString *)eTag 
	strData: (NSString *)strData;
// method: SaveTextStr
- (BOOL)SaveTextStr: (NSString *)key 
	expireDateTimeStr: (NSString *)expireDateTimeStr 
	eTag: (NSString *)eTag 
	strData: (NSString *)strData;
// method: SaveToCache
- (BOOL)SaveToCache: (NSString *)key 
	expire: (NSDate *)expire 
	eTag: (NSString *)eTag 
	data: (NSData *)data;
// method: SaveToCacheDt
- (BOOL)SaveToCacheDt: (NSString *)key 
	expire: (CkoDateTime *)expire 
	eTag: (NSString *)eTag 
	data: (NSData *)data;
// method: SaveToCacheNoExpire
- (BOOL)SaveToCacheNoExpire: (NSString *)key 
	eTag: (NSString *)eTag 
	data: (NSData *)data;
// method: SaveToCacheStr
- (BOOL)SaveToCacheStr: (NSString *)url 
	expireDateTimeStr: (NSString *)expireDateTimeStr 
	eTag: (NSString *)eTag 
	data: (NSData *)data;
// method: UpdateExpiration
- (BOOL)UpdateExpiration: (NSString *)key 
	dt: (NSDate *)dt;
// method: UpdateExpirationDt
- (BOOL)UpdateExpirationDt: (NSString *)key 
	dt: (CkoDateTime *)dt;
// method: UpdateExpirationStr
- (BOOL)UpdateExpirationStr: (NSString *)url 
	dateTimeStr: (NSString *)dateTimeStr;

@end
