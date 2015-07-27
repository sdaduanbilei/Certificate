// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  SFtpFile
// Wrapped Chilkat C++ class name =  CkSFtpFile

@class CkoDateTime;


@interface CkoSFtpFile : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

@property (nonatomic, readonly, copy) NSDate *CreateTime;
@property (nonatomic, readonly, copy) NSString *CreateTimeStr;
@property (nonatomic, readonly, copy) NSString *FileType;
@property (nonatomic, readonly, copy) NSString *Filename;
@property (nonatomic, readonly, copy) NSNumber *Gid;
@property (nonatomic, readonly, copy) NSString *Group;
@property (nonatomic, readonly) BOOL IsAppendOnly;
@property (nonatomic, readonly) BOOL IsArchive;
@property (nonatomic, readonly) BOOL IsCaseInsensitive;
@property (nonatomic, readonly) BOOL IsCompressed;
@property (nonatomic, readonly) BOOL IsDirectory;
@property (nonatomic, readonly) BOOL IsEncrypted;
@property (nonatomic, readonly) BOOL IsHidden;
@property (nonatomic, readonly) BOOL IsImmutable;
@property (nonatomic, readonly) BOOL IsReadOnly;
@property (nonatomic, readonly) BOOL IsRegular;
@property (nonatomic, readonly) BOOL IsSparse;
@property (nonatomic, readonly) BOOL IsSymLink;
@property (nonatomic, readonly) BOOL IsSync;
@property (nonatomic, readonly) BOOL IsSystem;
@property (nonatomic, readonly, copy) NSDate *LastAccessTime;
@property (nonatomic, readonly, copy) NSString *LastAccessTimeStr;
@property (nonatomic, readonly, copy) NSDate *LastModifiedTime;
@property (nonatomic, readonly, copy) NSString *LastModifiedTimeStr;
@property (nonatomic, readonly, copy) NSString *Owner;
@property (nonatomic, readonly, copy) NSNumber *Permissions;
@property (nonatomic, readonly, copy) NSNumber *Size64;
@property (nonatomic, readonly, copy) NSNumber *Uid;
@property (nonatomic) BOOL VerboseLogging;

// method: GetCreateDt
- (CkoDateTime *)GetCreateDt;
// method: GetLastAccessDt
- (CkoDateTime *)GetLastAccessDt;
// method: GetLastModifiedDt
- (CkoDateTime *)GetLastModifiedDt;

@end
