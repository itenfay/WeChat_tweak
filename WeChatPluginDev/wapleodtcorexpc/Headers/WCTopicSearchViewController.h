//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, GetSearchShareResponse_SearchShareContext, NSDictionary, NSString, WCTopicSearchActionLogic, WCTopicSearchContext;
@protocol WCTopicSearchViewControllerDelegate;

@interface WCTopicSearchViewController
{
    _Bool _hasEndTranscationInVC;
    id <WCTopicSearchViewControllerDelegate> _delegate;
    WCTopicSearchContext *_context;
    NSDictionary *_customInitedParams;
    ForwardMessageLogicController *_forwardMessageLogicController;
    WCTopicSearchActionLogic *_shareActionLogic;
    GetSearchShareResponse_SearchShareContext *_shareContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEndTranscationInVC; // @synthesize hasEndTranscationInVC=_hasEndTranscationInVC;
@property(retain, nonatomic) GetSearchShareResponse_SearchShareContext *shareContext; // @synthesize shareContext=_shareContext;
@property(retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic; // @synthesize shareActionLogic=_shareActionLogic;
@property(retain, nonatomic) ForwardMessageLogicController *forwardMessageLogicController; // @synthesize forwardMessageLogicController=_forwardMessageLogicController;
@property(retain, nonatomic) NSDictionary *customInitedParams; // @synthesize customInitedParams=_customInitedParams;
@property(retain, nonatomic) WCTopicSearchContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WCTopicSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (void)reportShareMsgAction:(long long)arg1;
- (void)reportAppendInputQueryActionWithSessionId:(id)arg1 requestId:(id)arg2 searchId:(id)arg3;
- (void)reportSearchVCCompleteAction;
- (void)reportSearchVCCanceledAction;
- (void)reportSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)onSearchVCAppearAction;
- (unsigned long long)localJSBizType;
- (void)doForwardMessageSended;
- (id)getCurrentViewController;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (id)defaultNavTitle;
- (unsigned long long)searchScene;
- (id)initedUrlParams;
- (id)stayTimeReporter;
- (id)initWithQuery:(id)arg1 customInitedParams:(id)arg2;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

