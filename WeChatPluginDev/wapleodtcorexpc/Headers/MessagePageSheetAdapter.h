//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMsgContentViewController, CMessageWrap, MessagePageSheetTransition, NSString, UIViewController;
@protocol MessagePageSheetAdapterDelegate;

@interface MessagePageSheetAdapter
{
    _Bool _pageSheetWillClose;
    _Bool _shouldCallbackAtPageSheetAppear;
    _Bool _markUnreadAtClose;
    _Bool _isPageSheetPresented;
    CMessageWrap *_jumpTargetMsg;
    id <MessagePageSheetAdapterDelegate> _bizDelegate;
    BaseMsgContentViewController *_msgVC;
    MessagePageSheetTransition *_presentTransition;
    NSString *_currUsername;
}

+ (id)adapterWithMsgViewController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currUsername; // @synthesize currUsername=_currUsername;
@property(nonatomic) _Bool isPageSheetPresented; // @synthesize isPageSheetPresented=_isPageSheetPresented;
@property(nonatomic) _Bool markUnreadAtClose; // @synthesize markUnreadAtClose=_markUnreadAtClose;
@property(retain, nonatomic) MessagePageSheetTransition *presentTransition; // @synthesize presentTransition=_presentTransition;
@property(nonatomic) _Bool shouldCallbackAtPageSheetAppear; // @synthesize shouldCallbackAtPageSheetAppear=_shouldCallbackAtPageSheetAppear;
@property(nonatomic) _Bool pageSheetWillClose; // @synthesize pageSheetWillClose=_pageSheetWillClose;
@property(nonatomic) __weak BaseMsgContentViewController *msgVC; // @synthesize msgVC=_msgVC;
@property(nonatomic) __weak id <MessagePageSheetAdapterDelegate> bizDelegate; // @synthesize bizDelegate=_bizDelegate;
@property(retain, nonatomic) CMessageWrap *jumpTargetMsg; // @synthesize jumpTargetMsg=_jumpTargetMsg;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)pageSheetWillBePresentFrom:(id)arg1 inContainer:(id)arg2;
- (void)pageSheetPresentWillBegin:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(_Bool)arg2;
- (void)pageSheetWillAppear:(id)arg1;
- (double)pageSheetContentWidth;
- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, nonatomic) id <MessagePageSheetAdapterDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIViewController *hostViewController; // @dynamic hostViewController;
@property(readonly) Class superclass;

@end

