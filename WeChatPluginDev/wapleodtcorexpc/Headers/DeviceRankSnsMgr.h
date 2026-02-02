//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface DeviceRankSnsMgr
{
    NSArray *m_focusArray;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callExtensionOnReceivedCGIResp:(id)arg1;
- (void)handleRankAddLikeResponse:(id)arg1;
- (id)getFocusArrayFilePath;
- (void)tryLoadFocusArray;
- (void)saveFoucsArray:(id)arg1;
- (id)loadFocusArray;
- (void)getUserRankListCount:(id)arg1 brandUserName:(id)arg2;
- (void)likeFriendRank:(id)arg1 FriendUsernames:(id)arg2 brandUserName:(id)arg3 optype:(unsigned int)arg4;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

