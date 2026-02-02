//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface ForwardMessageMgr
{
    ForwardMessageLogicController *m_forwardLogicController;
    UIViewController *m_forwardFromViewController;
    NSMutableDictionary *_forwardMessageLogics;
    NSMutableArray *_sessionStackPages;
    NSMutableArray *_shareSheetStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *shareSheetStack; // @synthesize shareSheetStack=_shareSheetStack;
@property(retain, nonatomic) NSMutableArray *sessionStackPages; // @synthesize sessionStackPages=_sessionStackPages;
@property(retain, nonatomic) NSMutableDictionary *forwardMessageLogics; // @synthesize forwardMessageLogics=_forwardMessageLogics;
- (id)currentLogicController;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)OnSharePreConfirmSheetViewShow:(id)arg1;
- (void)onLeaveSessionPage:(id)arg1;
- (void)onEnterSessionPage:(id)arg1;
- (void)reportFinderFeedShare:(id)arg1 toContact:(id)arg2 shareSuccessful:(_Bool)arg3;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 forwardType:(long long)arg4;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 forwardType:(long long)arg3;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3;
- (id)getCurrentViewController;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

