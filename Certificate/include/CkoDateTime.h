// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  CkDateTime
// Wrapped Chilkat C++ class name =  CkDateTime

@class CkoDtObj;


@interface CkoDateTime : NSObject {

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

@property (nonatomic, readonly, copy) NSNumber *IsDst;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *UtcOffset;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddDays
- (BOOL)AddDays: (NSNumber *)numDays;
// method: DeSerialize
- (void)DeSerialize: (NSString *)serializedDateTime;
// method: GetAsDateTimeTicks
- (NSNumber *)GetAsDateTimeTicks: (BOOL)bLocal;
// method: GetAsDosDate
- (NSNumber *)GetAsDosDate: (BOOL)bLocal;
// method: GetAsOleDate
- (NSNumber *)GetAsOleDate: (BOOL)bLocal;
// method: GetAsRfc822
- (NSString *)GetAsRfc822: (BOOL)bLocal;
// method: GetAsUnixTime
- (NSNumber *)GetAsUnixTime: (BOOL)bLocal;
// method: GetAsUnixTime64
- (NSNumber *)GetAsUnixTime64: (BOOL)bLocal;
// method: GetAsUnixTimeDbl
- (NSNumber *)GetAsUnixTimeDbl: (BOOL)bLocal;
// method: GetDtObj
- (CkoDtObj *)GetDtObj: (BOOL)bLocal;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: Serialize
- (NSString *)Serialize;
// method: SetFromCurrentSystemTime
- (void)SetFromCurrentSystemTime;
// method: SetFromDateTimeTicks
- (void)SetFromDateTimeTicks: (BOOL)bLocal 
	n: (NSNumber *)n;
// method: SetFromDosDate
- (void)SetFromDosDate: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromDtObj
- (BOOL)SetFromDtObj: (CkoDtObj *)dt;
// method: SetFromNtpTime
- (void)SetFromNtpTime: (NSNumber *)ntpSeconds;
// method: SetFromOleDate
- (void)SetFromOleDate: (BOOL)bLocal 
	dt: (NSNumber *)dt;
// method: SetFromRfc822
- (BOOL)SetFromRfc822: (NSString *)rfc822Str;
// method: SetFromSystemTime
- (void)SetFromSystemTime: (BOOL)bLocal 
	sysTime: (NSDate *)sysTime;
// method: SetFromUnixTime
- (void)SetFromUnixTime: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromUnixTime64
- (void)SetFromUnixTime64: (BOOL)bLocal 
	t: (NSNumber *)t;
// method: SetFromUnixTimeDbl
- (void)SetFromUnixTimeDbl: (BOOL)bLocal 
	t: (NSNumber *)t;

@end
