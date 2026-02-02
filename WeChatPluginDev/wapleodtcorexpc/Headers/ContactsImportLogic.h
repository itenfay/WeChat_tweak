//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, OrderedDictionary;
@protocol ContactsImportLogicDelegate;

@interface ContactsImportLogic : NSObject
{
    _Bool _hasBindedOldWechatAccount;
    _Bool _hasFetchedContactList;
    unsigned int _clientSequence;
    id <ContactsImportLogicDelegate> _delegate;
    NSString *_qrCode;
    NSString *_sessionId;
    NSString *_oldUsername;
    NSString *_oldAlias;
    OrderedDictionary *_encryptedUsernameToOldAccountContactMap;
}

+ (id)pathForOldAccountContactsCacheForUsername:(id)arg1;
+ (void)encodeEncryptedUsernameToOldAccountContactMap:(id)arg1 toFilePath:(id)arg2;
+ (id)decodeOrCreateEncryptedUsernameToOldAccountContactMapFromFilePath:(id)arg1 maxClientSequence:(unsigned int *)arg2;
+ (void)fixContactStatus:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *encryptedUsernameToOldAccountContactMap; // @synthesize encryptedUsernameToOldAccountContactMap=_encryptedUsernameToOldAccountContactMap;
@property(nonatomic) unsigned int clientSequence; // @synthesize clientSequence=_clientSequence;
@property(retain, nonatomic) NSString *oldAlias; // @synthesize oldAlias=_oldAlias;
@property(retain, nonatomic) NSString *oldUsername; // @synthesize oldUsername=_oldUsername;
@property(nonatomic) _Bool hasFetchedContactList; // @synthesize hasFetchedContactList=_hasFetchedContactList;
@property(nonatomic) _Bool hasBindedOldWechatAccount; // @synthesize hasBindedOldWechatAccount=_hasBindedOldWechatAccount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) __weak id <ContactsImportLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveContactList;
- (id)getOldAccountContactForEncryptedUsername:(id)arg1;
- (void)callFetchContactListSucceedDelegateWithAppendContactList:(id)arg1 isFinished:(_Bool)arg2;
- (void)callFetchContactListFailDelegate;
- (void)onGetFetchContactListCgiResponse:(id)arg1;
- (void)internalFetchContactList;
- (void)fetchContactList;
@property(readonly, nonatomic) NSArray *oldAccountContacts;
- (void)callBindOldAccountFailDelegateWithErrorMessage:(id)arg1 canRecover:(_Bool)arg2;
- (void)callBindOldAccountSucceedDelegate;
- (void)onGetBindOldWechatAccountCgiResponse:(id)arg1;
- (void)bindOldWechatAccount;
- (id)initWithQRCode:(id)arg1;

@end

