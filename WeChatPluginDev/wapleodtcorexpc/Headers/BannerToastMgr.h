//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface BannerToastMgr
{
    NSMutableArray *m_msgDic;
    NSMutableDictionary *m_friendRecommandMsgs;
    NSMutableDictionary *m_dicSecurityBannerMsgs;
    NSMutableDictionary *m_dicPersistentSecurityBannerMsgs;
}

- (void).cxx_destruct;
- (void)logUniDirectionFriendBanner:(id)arg1 opType:(unsigned int)arg2;
- (void)logRecommandFriendBanner:(id)arg1 opType:(unsigned int)arg2 recCount:(unsigned int)arg3;
- (void)logMainFrameBanner:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)deleteSecurityBannerMsg:(id)arg1;
- (id)getSecurityBannerData:(id)arg1;
- (_Bool)shouldShowSecurityBannerToUser:(id)arg1;
- (id)pathForPersistentSecurityBannerMsgs;
- (void)filterSecurityBannerMsgs;
- (void)loadPersistentSecurityBannerMsgs;
- (void)savePersistentSecurityBannerMsgs;
- (id)pathForFriendRec;
- (void)loadFriendRecMsgs;
- (void)saveFriendRecMsgs;
- (void)deleteRecommandFriendMsg:(id)arg1;
- (_Bool)shouldRecommandFriendToUser:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleBannerMsg:(id)arg1;
- (id)makeMsgByType:(int)arg1;
- (void)loadMsgs;
- (void)saveOneMsg:(id)arg1;
- (void)saveMsgs;
- (id)pathForBannerMsg;
- (id)getRootDir;
- (void)trigBanner;
- (id)getShowMsg;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

