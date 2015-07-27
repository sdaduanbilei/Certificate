// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.49

// Generic/internal class name =  Mailboxes
// Wrapped Chilkat C++ class name =  CkMailboxes



@interface CkoMailboxes : NSObject {

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
@property (nonatomic) BOOL VerboseLogging;

// method: GetFlags
- (NSString *)GetFlags: (NSNumber *)index;
// method: GetMailboxIndex
- (NSNumber *)GetMailboxIndex: (NSString *)mbxName;
// method: GetName
- (NSString *)GetName: (NSNumber *)index;
// method: GetNthFlag
- (NSString *)GetNthFlag: (NSNumber *)index 
	flagIndex: (NSNumber *)flagIndex;
// method: GetNumFlags
- (NSNumber *)GetNumFlags: (NSNumber *)index;
// method: HasFlag
- (BOOL)HasFlag: (NSNumber *)index 
	flagName: (NSString *)flagName;
// method: HasInferiors
- (BOOL)HasInferiors: (NSNumber *)index;
// method: IsMarked
- (BOOL)IsMarked: (NSNumber *)index;
// method: IsSelectable
- (BOOL)IsSelectable: (NSNumber *)index;

@end
