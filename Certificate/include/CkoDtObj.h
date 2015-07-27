// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  DtObj
// Wrapped Chilkat C++ class name =  CkDtObj



@interface CkoDtObj : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSNumber *Day;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *Hour;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSNumber *Minute;

@property (nonatomic, copy) NSNumber *Month;

@property (nonatomic, copy) NSNumber *Second;

@property (nonatomic, copy) NSNumber *StructTmMonth;

@property (nonatomic, copy) NSNumber *StructTmYear;

@property (nonatomic) BOOL Utc;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSNumber *Year;

// method: DeSerialize
- (void)DeSerialize: (NSString *)serializedDtObj;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: Serialize
- (NSString *)Serialize;

@end
