// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Rss
// Wrapped Chilkat C++ class name =  CkRss



@class CkoBaseProgress;

@interface CkoRss : NSObject {

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

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumChannels;
@property (nonatomic, readonly, copy) NSNumber *NumItems;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddNewChannel
- (CkoRss *)AddNewChannel;
// method: AddNewImage
- (CkoRss *)AddNewImage;
// method: AddNewItem
- (CkoRss *)AddNewItem;
// method: DownloadRss
- (BOOL)DownloadRss: (NSString *)url;
// method: GetAttr
- (NSString *)GetAttr: (NSString *)tag 
	attrName: (NSString *)attrName;
// method: GetChannel
- (CkoRss *)GetChannel: (NSNumber *)index;
// method: GetCount
- (NSNumber *)GetCount: (NSString *)tag;
// method: GetDate
- (NSDate *)GetDate: (NSString *)tag;
// method: GetDateStr
- (NSString *)GetDateStr: (NSString *)tag;
// method: GetImage
- (CkoRss *)GetImage;
// method: GetInt
- (NSNumber *)GetInt: (NSString *)tag;
// method: GetItem
- (CkoRss *)GetItem: (NSNumber *)index;
// method: GetString
- (NSString *)GetString: (NSString *)tag;
// method: LoadRssFile
- (BOOL)LoadRssFile: (NSString *)path;
// method: LoadRssString
- (BOOL)LoadRssString: (NSString *)rssString;
// method: MGetAttr
- (NSString *)MGetAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName;
// method: MGetString
- (NSString *)MGetString: (NSString *)tag 
	index: (NSNumber *)index;
// method: MSetAttr
- (BOOL)MSetAttr: (NSString *)tag 
	index: (NSNumber *)index 
	attrName: (NSString *)attrName 
	value: (NSString *)value;
// method: MSetString
- (BOOL)MSetString: (NSString *)tag 
	index: (NSNumber *)index 
	value: (NSString *)value;
// method: NewRss
- (void)NewRss;
// method: Remove
- (void)Remove: (NSString *)tag;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetAttr
- (void)SetAttr: (NSString *)tag 
	attrName: (NSString *)attrName 
	value: (NSString *)value;
// method: SetDate
- (void)SetDate: (NSString *)tag 
	dateTime: (NSDate *)dateTime;
// method: SetDateNow
- (void)SetDateNow: (NSString *)tag;
// method: SetDateStr
- (void)SetDateStr: (NSString *)tag 
	dateTimeStr: (NSString *)dateTimeStr;
// method: SetInt
- (void)SetInt: (NSString *)tag 
	value: (NSNumber *)value;
// method: SetString
- (void)SetString: (NSString *)tag 
	value: (NSString *)value;
// method: ToXmlString
- (NSString *)ToXmlString;

@end
