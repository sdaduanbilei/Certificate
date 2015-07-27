// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Dh
// Wrapped Chilkat C++ class name =  CkDh



@interface CkoDh : NSObject {

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

@property (nonatomic, readonly, copy) NSNumber *G;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSString *P;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: CreateE
- (NSString *)CreateE: (NSNumber *)numBits;
// method: FindK
- (NSString *)FindK: (NSString *)e;
// method: GenPG
- (BOOL)GenPG: (NSNumber *)numBits 
	g: (NSNumber *)g;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetPG
- (BOOL)SetPG: (NSString *)p 
	g: (NSNumber *)g;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UseKnownPrime
- (void)UseKnownPrime: (NSNumber *)index;

@end
