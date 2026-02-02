//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface AddressBookFriendMgr
{
    NSMutableDictionary *m_friends;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)trySyncAddressBookFriends;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (id)getAddressBookFriends;
- (void)LoadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

