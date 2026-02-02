//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol TrustedFriendsCgiDelegate;

@interface TrustedFriendsCgi
{
    id <TrustedFriendsCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TrustedFriendsCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleSyncTrustedFriendsResp:(id)arg1;
- (void)handleGetTrustedFriendsResp:(id)arg1;
- (_Bool)syncFriendsToTrustedList:(id)arg1;
- (_Bool)getTrustedFriendsList;

@end

