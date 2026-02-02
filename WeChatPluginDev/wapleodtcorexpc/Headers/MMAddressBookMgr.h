//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddressBookArchive, NSMutableArray, NSMutableDictionary, NSString;

@interface MMAddressBookMgr
{
    NSMutableArray *m_phoneContacts;
    NSMutableDictionary *m_phoneAddressBooks;
    NSMutableDictionary *m_emailAddressBooks;
    AddressBookArchive *m_addressBookArchive;
    _Bool m_isSyningAddressBook;
    _Bool m_isFirstSync;
    _Bool m_bLocalAddressBookChanged;
    NSString *m_curLang;
    NSMutableArray *m_countryCodes;
    _Bool m_bTempCanSyncAddressBook;
    _Bool m_bHasLoadAddressBook;
}

+ (id)loadCountryWrapFromStr:(id)arg1 lang:(id)arg2 locale:(id)arg3;
+ (_Bool)isMobileVerifiedForStatic;
+ (_Bool)isBindMobile;
+ (id)getDefaultPhoneLabel;
+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3 AuthScene:(unsigned long long)arg4;
+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3;
+ (id)validEmail:(id)arg1;
+ (id)validPhoneNumber:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bTempCanSyncAddressBook; // @synthesize m_bTempCanSyncAddressBook;
- (unsigned int)getAddressBookStatusForAuthScene:(unsigned long long)arg1;
- (unsigned int)getAddressBookStatus;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (id)getCurCountryCode;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (id)findCountryWrapFromCountryCode:(id)arg1;
- (id)getAllCountryCode;
- (void)setCanSyncAddressBook:(_Bool)arg1;
- (_Bool)canSyncAddressBookWithShowLog:(_Bool)arg1;
- (_Bool)canSyncAddressBook;
- (_Bool)isMobileVerified;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)safeSyncedData:(id)arg1;
- (void)clearLocalSnapshot;
- (void)trySyncAddressBook;
- (void)uploadNewPhones:(id)arg1 withNewMD5Emails:(id)arg2;
- (id)getNewMD5Emails;
- (id)getNewPhones;
- (void)updateUploadedList;
- (void)LoadAddressBookArchive;
- (_Bool)SaveAddressBookArchive;
- (id)getPhoneContacts;
- (id)getNickNameForPhone:(id)arg1;
- (_Bool)CheckPhoneInAddressBook:(id)arg1;
- (id)getAddressBookForPhone:(id)arg1;
- (void)onServiceInit;
- (void)tryLoad;
- (void)onContactStoreDidChange:(id)arg1;
- (void)load;
- (void)doLoadFromDBUseBlock:(_Bool)arg1;
- (void)addToCacheInMainThreadWithPhone:(id)arg1 email:(id)arg2 phoneContacts:(id)arg3;
- (_Bool)isAddressBookLoaded;
- (id)newContactStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

