//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLimitedModeVerifyPasswordUtilLogic, MMUIViewController, NSString;

@interface MMLimitedModeExternalUtilMgr
{
    MMLimitedModeVerifyPasswordUtilLogic *m_verifyPasswordUtilLogic;
    unsigned int m_scene;
    MMUIViewController *_sourceViewController;
    CDUnknownBlockType _verifyPasswordOrSetSuccessBlock;
    CDUnknownBlockType _verifyPasswordOrSetFailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType verifyPasswordOrSetFailBlock; // @synthesize verifyPasswordOrSetFailBlock=_verifyPasswordOrSetFailBlock;
@property(copy, nonatomic) CDUnknownBlockType verifyPasswordOrSetSuccessBlock; // @synthesize verifyPasswordOrSetSuccessBlock=_verifyPasswordOrSetSuccessBlock;
@property(nonatomic) __weak MMUIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)resetVerifyPasswordUtilLogic;
- (void)doCheckLimitedModeVerifyPasswordOrGoToSet;
- (void)startCheckLimitedModeVerifyPasswordOrGoToSet:(id)arg1 scene:(unsigned int)arg2 successBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

