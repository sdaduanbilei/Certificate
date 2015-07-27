// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Bounce
// Wrapped Chilkat C++ class name =  CkBounce

@class CkoEmail;


@interface CkoBounce : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSString *BounceAddress;
@property (nonatomic, readonly, copy) NSString *BounceData;
@property (nonatomic, readonly, copy) NSNumber *BounceType;
@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: ExamineEmail
- (BOOL)ExamineEmail: (CkoEmail *)email;
// method: ExamineEml
- (BOOL)ExamineEml: (NSString *)emlPath;
// method: ExamineMime
- (BOOL)ExamineMime: (NSString *)mimeString;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
