// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  StringArray
// Wrapped Chilkat C++ class name =  CkStringArray



@interface CkoStringArray : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSNumber *Count;
@property (nonatomic) BOOL Crlf;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *Length;
@property (nonatomic) BOOL Trim;

@property (nonatomic) BOOL Unique;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: Append
- (BOOL)Append: (NSString *)str;
// method: AppendSerialized
- (BOOL)AppendSerialized: (NSString *)encodedStr;
// method: Clear
- (void)Clear;
// method: Contains
- (BOOL)Contains: (NSString *)str;
// method: Find
- (NSNumber *)Find: (NSString *)str 
	firstIndex: (NSNumber *)firstIndex;
// method: FindFirstMatch
- (NSNumber *)FindFirstMatch: (NSString *)str 
	firstIndex: (NSNumber *)firstIndex;
// method: GetString
- (NSString *)GetString: (NSNumber *)index;
// method: GetStringLen
- (NSNumber *)GetStringLen: (NSNumber *)index;
// method: InsertAt
- (void)InsertAt: (NSNumber *)index 
	str: (NSString *)str;
// method: LastString
- (NSString *)LastString;
// method: LoadFromFile
- (BOOL)LoadFromFile: (NSString *)path;
// method: LoadFromFile2
- (BOOL)LoadFromFile2: (NSString *)path 
	charset: (NSString *)charset;
// method: LoadFromText
- (void)LoadFromText: (NSString *)str;
// method: Pop
- (NSString *)Pop;
// method: Prepend
- (void)Prepend: (NSString *)str;
// method: Remove
- (void)Remove: (NSString *)str;
// method: RemoveAt
- (BOOL)RemoveAt: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveNthToFile
- (BOOL)SaveNthToFile: (NSNumber *)index 
	path: (NSString *)path;
// method: SaveToFile
- (BOOL)SaveToFile: (NSString *)path;
// method: SaveToFile2
- (BOOL)SaveToFile2: (NSString *)path 
	charset: (NSString *)charset;
// method: SaveToText
- (NSString *)SaveToText;
// method: Serialize
- (NSString *)Serialize;
// method: Sort
- (void)Sort: (BOOL)ascending;
// method: SplitAndAppend
- (void)SplitAndAppend: (NSString *)str 
	boundary: (NSString *)boundary;
// method: StrAt
- (NSString *)StrAt: (NSNumber *)index;
// method: Subtract
- (void)Subtract: (CkoStringArray *)sa;
// method: Union
- (void)Union: (CkoStringArray *)sa;

@end
