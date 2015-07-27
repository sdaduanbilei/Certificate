// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Ntlm
// Wrapped Chilkat C++ class name =  CkNtlm



@interface CkoNtlm : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *ClientChallenge;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSString *DnsComputerName;

@property (nonatomic, copy) NSString *DnsDomainName;

@property (nonatomic, copy) NSString *Domain;

@property (nonatomic, copy) NSString *EncodingMode;

@property (nonatomic, copy) NSString *Flags;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSString *NetBiosComputerName;

@property (nonatomic, copy) NSString *NetBiosDomainName;

@property (nonatomic, copy) NSNumber *NtlmVersion;

@property (nonatomic, copy) NSNumber *OemCodePage;

@property (nonatomic, copy) NSString *Password;

@property (nonatomic, copy) NSString *ServerChallenge;

@property (nonatomic, copy) NSString *TargetName;

@property (nonatomic, copy) NSString *UserName;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, copy) NSString *Workstation;

// method: CompareType3
- (BOOL)CompareType3: (NSString *)msg1 
	msg2: (NSString *)msg2;
// method: GenType1
- (NSString *)GenType1;
// method: GenType2
- (NSString *)GenType2: (NSString *)type1Msg;
// method: GenType3
- (NSString *)GenType3: (NSString *)type2Msg;
// method: LoadType3
- (BOOL)LoadType3: (NSString *)type3Msg;
// method: ParseType1
- (NSString *)ParseType1: (NSString *)type1Msg;
// method: ParseType2
- (NSString *)ParseType2: (NSString *)type2Msg;
// method: ParseType3
- (NSString *)ParseType3: (NSString *)type3Msg;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetFlag
- (BOOL)SetFlag: (NSString *)flagLetter 
	on: (BOOL)on;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
