// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Asn
// Wrapped Chilkat C++ class name =  CkAsn



@interface CkoAsn : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic) BOOL BoolValue;

@property (nonatomic, readonly) BOOL Constructed;
@property (nonatomic, copy) NSString *ContentStr;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, copy) NSNumber *IntValue;

@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, readonly, copy) NSNumber *NumSubItems;
@property (nonatomic, readonly, copy) NSString *Tag;
@property (nonatomic, readonly, copy) NSNumber *TagValue;
@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AppendBigInt
- (BOOL)AppendBigInt: (NSString *)encodedBytes 
	encoding: (NSString *)encoding;
// method: AppendBits
- (BOOL)AppendBits: (NSString *)encodedBytes 
	encoding: (NSString *)encoding;
// method: AppendBool
- (BOOL)AppendBool: (BOOL)value;
// method: AppendContextConstructed
- (BOOL)AppendContextConstructed: (NSNumber *)tag;
// method: AppendContextPrimitive
- (BOOL)AppendContextPrimitive: (NSNumber *)tag 
	encodedBytes: (NSString *)encodedBytes 
	encoding: (NSString *)encoding;
// method: AppendInt
- (BOOL)AppendInt: (NSNumber *)value;
// method: AppendNull
- (BOOL)AppendNull;
// method: AppendOctets
- (BOOL)AppendOctets: (NSString *)encodedBytes 
	encoding: (NSString *)encoding;
// method: AppendOid
- (BOOL)AppendOid: (NSString *)oid;
// method: AppendSequence
- (BOOL)AppendSequence;
// method: AppendSequence2
- (BOOL)AppendSequence2;
// method: AppendSequenceR
- (CkoAsn *)AppendSequenceR;
// method: AppendSet
- (BOOL)AppendSet;
// method: AppendSet2
- (BOOL)AppendSet2;
// method: AppendSetR
- (CkoAsn *)AppendSetR;
// method: AppendString
- (BOOL)AppendString: (NSString *)strType 
	value: (NSString *)value;
// method: AppendTime
- (BOOL)AppendTime: (NSString *)timeFormat 
	dateTimeStr: (NSString *)dateTimeStr;
// method: AsnToXml
- (NSString *)AsnToXml;
// method: DeleteSubItem
- (BOOL)DeleteSubItem: (NSNumber *)index;
// method: GetBinaryDer
- (NSData *)GetBinaryDer;
// method: GetEncodedContent
- (NSString *)GetEncodedContent: (NSString *)encoding;
// method: GetEncodedDer
- (NSString *)GetEncodedDer: (NSString *)encoding;
// method: GetLastSubItem
- (CkoAsn *)GetLastSubItem;
// method: GetSubItem
- (CkoAsn *)GetSubItem: (NSNumber *)index;
// method: LoadAsnXml
- (BOOL)LoadAsnXml: (NSString *)xmlStr;
// method: LoadBinary
- (BOOL)LoadBinary: (NSData *)derBytes;
// method: LoadBinaryFile
- (BOOL)LoadBinaryFile: (NSString *)path;
// method: LoadEncoded
- (BOOL)LoadEncoded: (NSString *)asnContent 
	encoding: (NSString *)encoding;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetEncodedContent
- (BOOL)SetEncodedContent: (NSString *)encodedBytes 
	encoding: (NSString *)encoding;
// method: WriteBinaryDer
- (BOOL)WriteBinaryDer: (NSString *)path;

@end
