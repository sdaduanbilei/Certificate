// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Email
// Wrapped Chilkat C++ class name =  CkEmail

@class CkoCert;
@class CkoStringArray;
@class CkoDateTime;
@class CkoCertChain;
@class CkoPrivateKey;
@class CkoXmlCertVault;


@interface CkoEmail : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, copy) NSString *Body;

@property (nonatomic, copy) NSString *BounceAddress;

@property (nonatomic, copy) NSString *Charset;

@property (nonatomic, copy) NSString *DebugLogFilePath;

@property (nonatomic, readonly) BOOL Decrypted;
@property (nonatomic, copy) NSDate *EmailDate;

@property (nonatomic, copy) NSString *EmailDateStr;

@property (nonatomic, readonly, copy) NSString *EncryptedBy;
@property (nonatomic, copy) NSString *FileDistList;

@property (nonatomic, copy) NSString *From;

@property (nonatomic, copy) NSString *FromAddress;

@property (nonatomic, copy) NSString *FromName;

@property (nonatomic, readonly, copy) NSString *Header;
@property (nonatomic, readonly, copy) NSString *Language;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic, copy) NSDate *LocalDate;

@property (nonatomic, copy) NSString *LocalDateStr;

@property (nonatomic, copy) NSString *Mailer;

@property (nonatomic, readonly, copy) NSNumber *NumAlternatives;
@property (nonatomic, readonly, copy) NSNumber *NumAttachedMessages;
@property (nonatomic, readonly, copy) NSNumber *NumAttachments;
@property (nonatomic, readonly, copy) NSNumber *NumBcc;
@property (nonatomic, readonly, copy) NSNumber *NumCC;
@property (nonatomic, readonly, copy) NSNumber *NumDaysOld;
@property (nonatomic, readonly, copy) NSNumber *NumHeaderFields;
@property (nonatomic, readonly, copy) NSNumber *NumRelatedItems;
@property (nonatomic, readonly, copy) NSNumber *NumReplacePatterns;
@property (nonatomic, readonly, copy) NSNumber *NumReports;
@property (nonatomic, readonly, copy) NSNumber *NumTo;
@property (nonatomic) BOOL OverwriteExisting;

@property (nonatomic, copy) NSString *Pkcs7CryptAlg;

@property (nonatomic, copy) NSNumber *Pkcs7KeyLength;

@property (nonatomic, copy) NSString *PreferredCharset;

@property (nonatomic) BOOL PrependHeaders;

@property (nonatomic, readonly) BOOL ReceivedEncrypted;
@property (nonatomic, readonly) BOOL ReceivedSigned;
@property (nonatomic, copy) NSString *ReplyTo;

@property (nonatomic) BOOL ReturnReceipt;

@property (nonatomic) BOOL SendEncrypted;

@property (nonatomic) BOOL SendSigned;

@property (nonatomic, copy) NSString *Sender;

@property (nonatomic, readonly) BOOL SignaturesValid;
@property (nonatomic, readonly, copy) NSString *SignedBy;
@property (nonatomic, copy) NSString *SigningHashAlg;

@property (nonatomic, readonly, copy) NSNumber *Size;
@property (nonatomic, copy) NSString *Subject;

@property (nonatomic, readonly, copy) NSString *Uidl;
@property (nonatomic) BOOL UnpackUseRelPaths;

@property (nonatomic) BOOL VerboseLogging;

@property (nonatomic, readonly, copy) NSString *Version;
// method: AddAttachmentHeader
- (void)AddAttachmentHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;
// method: AddBcc
- (BOOL)AddBcc: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;
// method: AddCC
- (BOOL)AddCC: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;
// method: AddDataAttachment
- (BOOL)AddDataAttachment: (NSString *)fileName 
	content: (NSData *)content;
// method: AddDataAttachment2
- (BOOL)AddDataAttachment2: (NSString *)fileName 
	content: (NSData *)content 
	contentType: (NSString *)contentType;
// method: AddEncryptCert
- (BOOL)AddEncryptCert: (CkoCert *)cert;
// method: AddFileAttachment
- (NSString *)AddFileAttachment: (NSString *)path;
// method: AddFileAttachment2
- (BOOL)AddFileAttachment2: (NSString *)path 
	contentType: (NSString *)contentType;
// method: AddHeaderField
- (void)AddHeaderField: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;
// method: AddHeaderField2
- (void)AddHeaderField2: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;
// method: AddHtmlAlternativeBody
- (BOOL)AddHtmlAlternativeBody: (NSString *)body;
// method: AddMultipleBcc
- (BOOL)AddMultipleBcc: (NSString *)commaSeparatedAddresses;
// method: AddMultipleCC
- (BOOL)AddMultipleCC: (NSString *)commaSeparatedAddresses;
// method: AddMultipleTo
- (BOOL)AddMultipleTo: (NSString *)commaSeparatedAddresses;
// method: AddPfxSourceData
- (BOOL)AddPfxSourceData: (NSData *)pfxData 
	password: (NSString *)password;
// method: AddPfxSourceFile
- (BOOL)AddPfxSourceFile: (NSString *)pfxFilePath 
	password: (NSString *)password;
// method: AddPlainTextAlternativeBody
- (BOOL)AddPlainTextAlternativeBody: (NSString *)body;
// method: AddRelatedData
- (NSString *)AddRelatedData: (NSString *)fileName 
	inData: (NSData *)inData;
// method: AddRelatedData2
- (void)AddRelatedData2: (NSData *)inData 
	fileNameInHtml: (NSString *)fileNameInHtml;
// method: AddRelatedData2P
- (void)AddRelatedData2P: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData 
	fileNameInHtml: (NSString *)fileNameInHtml;
// method: AddRelatedDataP
- (NSString *)AddRelatedDataP: (NSString *)nameInHtml 
	pByteData: (NSData *)pByteData 
	szByteData: (NSNumber *)szByteData;
// method: AddRelatedFile
- (NSString *)AddRelatedFile: (NSString *)path;
// method: AddRelatedFile2
- (BOOL)AddRelatedFile2: (NSString *)fileNameOnDisk 
	filenameInHtml: (NSString *)filenameInHtml;
// method: AddRelatedHeader
- (void)AddRelatedHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	fieldValue: (NSString *)fieldValue;
// method: AddRelatedString
- (NSString *)AddRelatedString: (NSString *)nameInHtml 
	str: (NSString *)str 
	charset: (NSString *)charset;
// method: AddRelatedString2
- (void)AddRelatedString2: (NSString *)str 
	charset: (NSString *)charset 
	filenameInHtml: (NSString *)filenameInHtml;
// method: AddStringAttachment
- (BOOL)AddStringAttachment: (NSString *)fileName 
	str: (NSString *)str;
// method: AddStringAttachment2
- (BOOL)AddStringAttachment2: (NSString *)fileName 
	str: (NSString *)str 
	charset: (NSString *)charset;
// method: AddTo
- (BOOL)AddTo: (NSString *)friendlyName 
	emailAddress: (NSString *)emailAddress;
// method: AddiCalendarAlternativeBody
- (BOOL)AddiCalendarAlternativeBody: (NSString *)body 
	methodName: (NSString *)methodName;
// method: AesDecrypt
- (BOOL)AesDecrypt: (NSString *)password;
// method: AesEncrypt
- (BOOL)AesEncrypt: (NSString *)password;
// method: AppendToBody
- (void)AppendToBody: (NSString *)str;
// method: AspUnpack
- (BOOL)AspUnpack: (NSString *)prefix 
	saveDir: (NSString *)saveDir 
	urlPath: (NSString *)urlPath 
	cleanFiles: (BOOL)cleanFiles;
// method: AspUnpack2
- (NSData *)AspUnpack2: (NSString *)prefix 
	saveDir: (NSString *)saveDir 
	urlPath: (NSString *)urlPath 
	cleanFiles: (BOOL)cleanFiles;
// method: AttachMessage
- (BOOL)AttachMessage: (NSData *)mimeBytes;
// method: BEncodeBytes
- (NSString *)BEncodeBytes: (NSData *)inData 
	charset: (NSString *)charset;
// method: BEncodeString
- (NSString *)BEncodeString: (NSString *)str 
	charset: (NSString *)charset;
// method: ClearBcc
- (void)ClearBcc;
// method: ClearCC
- (void)ClearCC;
// method: ClearEncryptCerts
- (void)ClearEncryptCerts;
// method: ClearTo
- (void)ClearTo;
// method: Clone
- (CkoEmail *)Clone;
// method: ComputeGlobalKey
- (NSString *)ComputeGlobalKey: (NSString *)encoding 
	bFold: (BOOL)bFold;
// method: CreateDsn
- (CkoEmail *)CreateDsn: (NSString *)explanation 
	xmlDeliveryStatus: (NSString *)xmlDeliveryStatus 
	bHeaderOnly: (BOOL)bHeaderOnly;
// method: CreateForward
- (CkoEmail *)CreateForward;
// method: CreateMdn
- (CkoEmail *)CreateMdn: (NSString *)explanation 
	xmlMdnFields: (NSString *)xmlMdnFields 
	bHeaderOnly: (BOOL)bHeaderOnly;
// method: CreateReply
- (CkoEmail *)CreateReply;
// method: CreateTempMht
- (NSString *)CreateTempMht: (NSString *)inPath;
// method: DropAttachments
- (void)DropAttachments;
// method: DropRelatedItem
- (void)DropRelatedItem: (NSNumber *)index;
// method: DropRelatedItems
- (void)DropRelatedItems;
// method: DropSingleAttachment
- (BOOL)DropSingleAttachment: (NSNumber *)index;
// method: FindIssuer
- (CkoCert *)FindIssuer: (CkoCert *)cert;
// method: GenerateFilename
- (NSString *)GenerateFilename;
// method: GetAltHeaderField
- (NSString *)GetAltHeaderField: (NSNumber *)index 
	fieldName: (NSString *)fieldName;
// method: GetAlternativeBody
- (NSString *)GetAlternativeBody: (NSNumber *)index;
// method: GetAlternativeBodyByContentType
- (NSString *)GetAlternativeBodyByContentType: (NSString *)contentType;
// method: GetAlternativeContentType
- (NSString *)GetAlternativeContentType: (NSNumber *)index;
// method: GetAttachedMessage
- (CkoEmail *)GetAttachedMessage: (NSNumber *)index;
// method: GetAttachedMessageAttr
- (NSString *)GetAttachedMessageAttr: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	attrName: (NSString *)attrName;
// method: GetAttachedMessageFilename
- (NSString *)GetAttachedMessageFilename: (NSNumber *)index;
// method: GetAttachmentAttr
- (NSString *)GetAttachmentAttr: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	attrName: (NSString *)attrName;
// method: GetAttachmentContentID
- (NSString *)GetAttachmentContentID: (NSNumber *)index;
// method: GetAttachmentContentType
- (NSString *)GetAttachmentContentType: (NSNumber *)index;
// method: GetAttachmentData
- (NSData *)GetAttachmentData: (NSNumber *)index;
// method: GetAttachmentFilename
- (NSString *)GetAttachmentFilename: (NSNumber *)index;
// method: GetAttachmentHeader
- (NSString *)GetAttachmentHeader: (NSNumber *)index 
	fieldName: (NSString *)fieldName;
// method: GetAttachmentSize
- (NSNumber *)GetAttachmentSize: (NSNumber *)index;
// method: GetAttachmentString
- (NSString *)GetAttachmentString: (NSNumber *)index 
	charset: (NSString *)charset;
// method: GetAttachmentStringCrLf
- (NSString *)GetAttachmentStringCrLf: (NSNumber *)index 
	charset: (NSString *)charset;
// method: GetBcc
- (NSString *)GetBcc: (NSNumber *)index;
// method: GetBccAddr
- (NSString *)GetBccAddr: (NSNumber *)index;
// method: GetBccName
- (NSString *)GetBccName: (NSNumber *)index;
// method: GetCC
- (NSString *)GetCC: (NSNumber *)index;
// method: GetCcAddr
- (NSString *)GetCcAddr: (NSNumber *)index;
// method: GetCcName
- (NSString *)GetCcName: (NSNumber *)index;
// method: GetDeliveryStatusInfo
- (NSString *)GetDeliveryStatusInfo: (NSString *)fieldName;
// method: GetDsnFinalRecipients
- (CkoStringArray *)GetDsnFinalRecipients;
// method: GetDt
- (CkoDateTime *)GetDt;
// method: GetEncryptCert
- (CkoCert *)GetEncryptCert;
// method: GetEncryptedByCert
- (CkoCert *)GetEncryptedByCert;
// method: GetFileContent
- (NSData *)GetFileContent: (NSString *)path;
// method: GetHeaderField
- (NSString *)GetHeaderField: (NSString *)fieldName;
// method: GetHeaderFieldName
- (NSString *)GetHeaderFieldName: (NSNumber *)index;
// method: GetHeaderFieldValue
- (NSString *)GetHeaderFieldValue: (NSNumber *)index;
// method: GetHtmlBody
- (NSString *)GetHtmlBody;
// method: GetImapUid
- (NSNumber *)GetImapUid;
// method: GetLinkedDomains
- (CkoStringArray *)GetLinkedDomains;
// method: GetMbHeaderField
- (NSData *)GetMbHeaderField: (NSString *)fieldName 
	charset: (NSString *)charset;
// method: GetMbHtmlBody
- (NSData *)GetMbHtmlBody: (NSString *)charset;
// method: GetMbPlainTextBody
- (NSData *)GetMbPlainTextBody: (NSString *)charset;
// method: GetMime
- (NSString *)GetMime;
// method: GetMimeBinary
- (NSData *)GetMimeBinary;
// method: GetNthBinaryPartOfType
- (NSData *)GetNthBinaryPartOfType: (NSNumber *)index 
	contentType: (NSString *)contentType 
	inlineOnly: (BOOL)inlineOnly 
	excludeAttachments: (BOOL)excludeAttachments;
// method: GetNthTextPartOfType
- (NSString *)GetNthTextPartOfType: (NSNumber *)index 
	contentType: (NSString *)contentType 
	inlineOnly: (BOOL)inlineOnly 
	excludeAttachments: (BOOL)excludeAttachments;
// method: GetNumPartsOfType
- (NSNumber *)GetNumPartsOfType: (NSString *)contentType 
	inlineOnly: (BOOL)inlineOnly 
	excludeAttachments: (BOOL)excludeAttachments;
// method: GetPlainTextBody
- (NSString *)GetPlainTextBody;
// method: GetRelatedAttr
- (NSString *)GetRelatedAttr: (NSNumber *)index 
	fieldName: (NSString *)fieldName 
	attrName: (NSString *)attrName;
// method: GetRelatedContentID
- (NSString *)GetRelatedContentID: (NSNumber *)index;
// method: GetRelatedContentLocation
- (NSString *)GetRelatedContentLocation: (NSNumber *)index;
// method: GetRelatedContentType
- (NSString *)GetRelatedContentType: (NSNumber *)index;
// method: GetRelatedData
- (NSData *)GetRelatedData: (NSNumber *)index;
// method: GetRelatedFilename
- (NSString *)GetRelatedFilename: (NSNumber *)index;
// method: GetRelatedString
- (NSString *)GetRelatedString: (NSNumber *)index 
	charset: (NSString *)charset;
// method: GetRelatedStringCrLf
- (NSString *)GetRelatedStringCrLf: (NSNumber *)index 
	charset: (NSString *)charset;
// method: GetReplacePattern
- (NSString *)GetReplacePattern: (NSNumber *)index;
// method: GetReplaceString
- (NSString *)GetReplaceString: (NSNumber *)index;
// method: GetReplaceString2
- (NSString *)GetReplaceString2: (NSString *)pattern;
// method: GetReport
- (NSString *)GetReport: (NSNumber *)index;
// method: GetSignedByCert
- (CkoCert *)GetSignedByCert;
// method: GetSignedByCertChain
- (CkoCertChain *)GetSignedByCertChain;
// method: GetSigningCert
- (CkoCert *)GetSigningCert;
// method: GetTo
- (NSString *)GetTo: (NSNumber *)index;
// method: GetToAddr
- (NSString *)GetToAddr: (NSNumber *)index;
// method: GetToName
- (NSString *)GetToName: (NSNumber *)index;
// method: GetXml
- (NSString *)GetXml;
// method: HasHeaderMatching
- (BOOL)HasHeaderMatching: (NSString *)fieldName 
	valuePattern: (NSString *)valuePattern 
	caseInsensitive: (BOOL)caseInsensitive;
// method: HasHtmlBody
- (BOOL)HasHtmlBody;
// method: HasPlainTextBody
- (BOOL)HasPlainTextBody;
// method: IsMultipartReport
- (BOOL)IsMultipartReport;
// method: LoadEml
- (BOOL)LoadEml: (NSString *)mimePath;
// method: LoadXml
- (BOOL)LoadXml: (NSString *)xmlPath;
// method: LoadXmlString
- (BOOL)LoadXmlString: (NSString *)xmlStr;
// method: QEncodeBytes
- (NSString *)QEncodeBytes: (NSData *)inData 
	charset: (NSString *)charset;
// method: QEncodeString
- (NSString *)QEncodeString: (NSString *)str 
	charset: (NSString *)charset;
// method: RemoveAttachedMessage
- (void)RemoveAttachedMessage: (NSNumber *)index;
// method: RemoveAttachedMessages
- (void)RemoveAttachedMessages;
// method: RemoveAttachmentPaths
- (void)RemoveAttachmentPaths;
// method: RemoveHeaderField
- (void)RemoveHeaderField: (NSString *)fieldName;
// method: RemoveHtmlAlternative
- (void)RemoveHtmlAlternative;
// method: RemovePlainTextAlternative
- (void)RemovePlainTextAlternative;
// method: SaveAllAttachments
- (BOOL)SaveAllAttachments: (NSString *)directory;
// method: SaveAttachedFile
- (BOOL)SaveAttachedFile: (NSNumber *)index 
	directory: (NSString *)directory;
// method: SaveEml
- (BOOL)SaveEml: (NSString *)path;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveRelatedItem
- (BOOL)SaveRelatedItem: (NSNumber *)index 
	directory: (NSString *)directory;
// method: SaveXml
- (BOOL)SaveXml: (NSString *)path;
// method: SetAttachmentCharset
- (BOOL)SetAttachmentCharset: (NSNumber *)index 
	charset: (NSString *)charset;
// method: SetAttachmentDisposition
- (BOOL)SetAttachmentDisposition: (NSNumber *)index 
	disposition: (NSString *)disposition;
// method: SetAttachmentFilename
- (BOOL)SetAttachmentFilename: (NSNumber *)index 
	filename: (NSString *)filename;
// method: SetBinaryBody
- (BOOL)SetBinaryBody: (NSData *)byteData 
	contentType: (NSString *)contentType 
	disposition: (NSString *)disposition 
	filename: (NSString *)filename;
// method: SetDecryptCert
- (BOOL)SetDecryptCert: (CkoCert *)cert;
// method: SetDecryptCert2
- (BOOL)SetDecryptCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetDt
- (BOOL)SetDt: (CkoDateTime *)dt;
// method: SetEdifactBody
- (void)SetEdifactBody: (NSString *)message 
	name: (NSString *)name 
	filename: (NSString *)filename 
	charset: (NSString *)charset;
// method: SetEncryptCert
- (BOOL)SetEncryptCert: (CkoCert *)cert;
// method: SetFromMimeBytes
- (BOOL)SetFromMimeBytes: (NSData *)mimeBytes;
// method: SetFromMimeBytes2
- (BOOL)SetFromMimeBytes2: (NSData *)mimeBytes 
	charset: (NSString *)charset;
// method: SetFromMimeText
- (BOOL)SetFromMimeText: (NSString *)mimeText;
// method: SetFromXmlText
- (BOOL)SetFromXmlText: (NSString *)xmlStr;
// method: SetHtmlBody
- (void)SetHtmlBody: (NSString *)html;
// method: SetMbHtmlBody
- (BOOL)SetMbHtmlBody: (NSString *)charset 
	inData: (NSData *)inData;
// method: SetMbPlainTextBody
- (BOOL)SetMbPlainTextBody: (NSString *)charset 
	inData: (NSData *)inData;
// method: SetRelatedFilename
- (BOOL)SetRelatedFilename: (NSNumber *)index 
	filename: (NSString *)filename;
// method: SetReplacePattern
- (BOOL)SetReplacePattern: (NSString *)pattern 
	replaceString: (NSString *)replaceString;
// method: SetSigningCert
- (BOOL)SetSigningCert: (CkoCert *)cert;
// method: SetSigningCert2
- (BOOL)SetSigningCert2: (CkoCert *)cert 
	key: (CkoPrivateKey *)key;
// method: SetTextBody
- (void)SetTextBody: (NSString *)bodyText 
	contentType: (NSString *)contentType;
// method: UidlEquals
- (BOOL)UidlEquals: (CkoEmail *)e;
// method: UnSpamify
- (void)UnSpamify;
// method: UnpackHtml
- (BOOL)UnpackHtml: (NSString *)unpackDir 
	htmlFilename: (NSString *)htmlFilename 
	partsSubdir: (NSString *)partsSubdir;
// method: UnzipAttachments
- (BOOL)UnzipAttachments;
// method: UseCertVault
- (BOOL)UseCertVault: (CkoXmlCertVault *)vault;
// method: ZipAttachments
- (BOOL)ZipAttachments: (NSString *)zipFilename;

@end
