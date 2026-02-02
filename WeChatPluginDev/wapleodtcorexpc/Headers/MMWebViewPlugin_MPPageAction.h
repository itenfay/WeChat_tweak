//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MPCommentEditView, MPShareWowEditView, NSMutableArray, NSString, WCActionSheet;

@interface MMWebViewPlugin_MPPageAction
{
    _Bool _hasForcePortaitWhenCmtViewShow;
    _Bool _hasIgnoreLongPressWhenCmtViewShow;
    MPCommentEditView *_commentEditView;
    MPShareWowEditView *_wowRecommendEditView;
    WCActionSheet *_actionSheet;
    NSMutableArray *_preloadedWebStores;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasIgnoreLongPressWhenCmtViewShow; // @synthesize hasIgnoreLongPressWhenCmtViewShow=_hasIgnoreLongPressWhenCmtViewShow;
@property(nonatomic) _Bool hasForcePortaitWhenCmtViewShow; // @synthesize hasForcePortaitWhenCmtViewShow=_hasForcePortaitWhenCmtViewShow;
@property(retain, nonatomic) NSMutableArray *preloadedWebStores; // @synthesize preloadedWebStores=_preloadedWebStores;
@property(retain, nonatomic) WCActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) MPShareWowEditView *wowRecommendEditView; // @synthesize wowRecommendEditView=_wowRecommendEditView;
@property(retain, nonatomic) MPCommentEditView *commentEditView; // @synthesize commentEditView=_commentEditView;
- (void)removePreloadedWebStores;
- (void)addPreloadedWebStoresWithUrl:(id)arg1 withAdItem:(id)arg2;
- (void)didTakeScreenshot;
- (void)onShareWowCommitBtnClick:(id)arg1;
- (void)onCommentViewDissmiss:(id)arg1;
- (void)onReplyLikeClick:(unsigned int)arg1 replyId:(unsigned int)arg2 targetLikeStatus:(unsigned int)arg3;
- (void)onCommentLikeClick:(unsigned int)arg1 targetLikeStatus:(unsigned int)arg2;
- (void)onDeleteEditViewCommentReply:(id)arg1 commentReply:(id)arg2;
- (void)onDeleteEditViewCommentMsg:(id)arg1;
- (id)getMainViewController;
- (void)initWowRecommendEditViewWithTheme:(unsigned int)arg1;
- (void)initCommentEditViewWithTheme:(unsigned int)arg1 params:(id)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)onOpenImmerseList:(id)arg1 enterScene:(unsigned int)arg2;
- (void)onDelExcerptOnFav:(id)arg1 excerptKeys:(id)arg2 favId:(id)arg3;
- (void)onAddExcerptToFav:(id)arg1 shareUrl:(id)arg2 itemShowType:(unsigned int)arg3 pageKey:(id)arg4 title:(id)arg5 name:(id)arg6 cover:(id)arg7 userName:(id)arg8 icon:(id)arg9;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShareActionSheet;
- (unsigned int)getMPPageMenuShareFuncFlag;
- (void)showToast:(id)arg1 status:(id)arg2;
- (_Bool)isShowWowRecommendCommentEditView;
- (void)closeWowRecommendCommentEditView;
- (void)showWowRecommendCommentEditViewWithTheme:(unsigned int)arg1;
- (void)destoryCommentEditView;
- (_Bool)isShowCommentEditView;
- (void)closeCommentEditView;
- (void)showCommentEditViewWithTheme:(unsigned int)arg1 params:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

