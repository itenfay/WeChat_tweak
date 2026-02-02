//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, TrustedFriendsCgi;
@protocol TrustedFriendsLogicDelegate;

@interface TrustedFriendsLogic
{
    _Bool _m_isListHadChanged;
    unsigned int _m_maxTrustedFriendCount;
    id <TrustedFriendsLogicDelegate> _m_delegate;
    TrustedFriendsCgi *_m_trustedFriendCgi;
    NSMutableArray *_m_trustedFriendList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isListHadChanged; // @synthesize m_isListHadChanged=_m_isListHadChanged;
@property(nonatomic) unsigned int m_maxTrustedFriendCount; // @synthesize m_maxTrustedFriendCount=_m_maxTrustedFriendCount;
@property(retain, nonatomic) NSMutableArray *m_trustedFriendList; // @synthesize m_trustedFriendList=_m_trustedFriendList;
@property(retain, nonatomic) TrustedFriendsCgi *m_trustedFriendCgi; // @synthesize m_trustedFriendCgi=_m_trustedFriendCgi;
@property(nonatomic) __weak id <TrustedFriendsLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)showErrorTips:(id)arg1 forReason:(unsigned int)arg2;
- (void)onCgiFailed:(unsigned int)arg1 error:(int)arg2 msg:(id)arg3;
- (void)onSyncTrustedFriendsSuccess:(id)arg1;
- (void)onGetTrustedFriendsListSuccess:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (id)getContactsFromTrustedFriendContacts:(id)arg1;
- (void)startSyncTrustedFriends;
- (void)startGetTrustedFriends;
- (void)startChooseTrustedFriendsForRemoving:(id)arg1;
- (void)startChooseTrustedFriendsForAdding;
- (_Bool)shouldSyncTrustedFriendList;
- (_Bool)shouldNofityUserForCurrentFriendNotEnough;
- (_Bool)canAddFriendToTrustedFriendList;
- (id)getTrustedFriends;
- (unsigned long long)getMaxLimit;
- (unsigned long long)getTrustedFriendsCount;
- (id)getTrustedFriendViewController;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

