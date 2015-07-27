// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  EmailBundle
// Wrapped Chilkat C++ class name =  CkEmailBundle

@class CkoEmail;
@class CkoStringArray;


@interface CkoEmailBundle : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *MessageCount;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddEmail
- (BOOL)AddEmail: (CkoEmail *)email;
// method: FindByHeader
- (CkoEmail *)FindByHeader: (NSString *)name 
	value: (NSString *)value;
// method: GetEmail
- (CkoEmail *)GetEmail: (NSNumber *)index;
// method: GetUidls
- (CkoStringArray *)GetUidls;
// method: GetXml
- (NSString *)GetXml;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)path;
// method: LoadXmlString
- (BOOL)LoadXmlString: (NSString *)xmlStr;
// method: RemoveEmail
- (BOOL)RemoveEmail: (CkoEmail *)email;
// method: RemoveEmailByIndex
- (BOOL)RemoveEmailByIndex: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveXml
- (BOOL)SaveXml: (NSString *)path;
// method: SortByDate
- (void)SortByDate: (BOOL)ascending;
// method: SortByRecipient
- (void)SortByRecipient: (BOOL)ascending;
// method: SortBySender
- (void)SortBySender: (BOOL)ascending;
// method: SortBySubject
- (void)SortBySubject: (BOOL)ascending;

@end
