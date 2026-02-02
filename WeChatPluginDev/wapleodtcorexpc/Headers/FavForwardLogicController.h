//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol FavForwardLogicDelegate;

@interface FavForwardLogicController
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSArray *m_forwardingItems;
    NSArray *m_forwardingDataWraps;
    NSMutableArray *m_messageWrapList;
    _Bool m_bAddAppMsgSourceType;
    _Bool m_isFromSession;
    id <FavForwardLogicDelegate> m_delegate;
    NSMutableDictionary *_forwardMessageLogics;
    NSMutableArray *_shareSheetStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *shareSheetStack; // @synthesize shareSheetStack=_shareSheetStack;
@property(retain, nonatomic) NSMutableDictionary *forwardMessageLogics; // @synthesize forwardMessageLogics=_forwardMessageLogics;
@property(nonatomic) __weak id <FavForwardLogicDelegate> m_delegate; // @synthesize m_delegate;
- (id)currentLogicController;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)OnSharePreConfirmSheetViewShow:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)checkAppMsgSourceType:(id)arg1;
- (void)addMsgFromItem:(id)arg1;
- (void)forMessage:(id)arg1 showConfirmView:(_Bool)arg2;
- (void)forMessage:(id)arg1;
- (void)forwardMessage:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)forwardMessage:(id)arg1 delegate:(id)arg2;
- (void)doForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(_Bool)arg4;
- (void)BaseMsgForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (_Bool)addFavItemList:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(_Bool)arg4;
- (id)checkBaseMsgForwardFavDataItemWraps:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)forwardFavDataItemWraps:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItemList:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)ForwardFavItemList:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

