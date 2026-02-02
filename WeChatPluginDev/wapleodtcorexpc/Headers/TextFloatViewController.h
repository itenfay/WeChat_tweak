//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, CTRichTextView, CrossfadeAnimationController, MMRichTextCoverView, MMScrollView, MMTextFloatBottomToolView, NSString, UIButton, UIFont, UIView;
@protocol ILinkEventExt, TextFloatPreviewDelegate;

@interface TextFloatViewController
{
    UIView *m_oBackView;
    UIButton *m_view;
    MMScrollView *m_oScrollView;
    CTRichTextView *m_oRichTextView;
    id <ILinkEventExt> m_linkDelegate;
    id <TextFloatPreviewDelegate> m_delegate;
    _Bool _bNeedRebuildTextView;
    _Bool m_bHidden;
    MMRichTextCoverView *m_oRichTextCoverView;
    CrossfadeAnimationController *m_transitionInstance;
    _Bool m_allowAutorotate;
    struct CGRect m_originFrame;
    MMTextFloatBottomToolView *m_bottomToolView;
    _Bool m_bHadDragHiddeToolView;
    double m_currentOffset;
    _Bool _forbidShare;
    _Bool _forbidOperate;
    _Bool _forbidCopy;
    NSString *_nsContent;
    CMessageWrap *_msgWrap;
    NSString *_tipUrl;
    UIFont *_oFont;
    unsigned long long _parserType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidCopy; // @synthesize forbidCopy=_forbidCopy;
@property(nonatomic) _Bool forbidOperate; // @synthesize forbidOperate=_forbidOperate;
@property(nonatomic) _Bool forbidShare; // @synthesize forbidShare=_forbidShare;
@property(nonatomic) unsigned long long parserType; // @synthesize parserType=_parserType;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) NSString *tipUrl; // @synthesize tipUrl=_tipUrl;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(nonatomic) __weak id <TextFloatPreviewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIButton *m_view; // @synthesize m_view;
- (void)onPerformShortCut:(id)arg1;
- (_Bool)ignoreVCCheckJumpOutWhenOpen;
- (void)onFakeLongPress;
- (void)installFakeLongPressGesture;
- (void)showVoipCheckMicView;
- (void)setupDeepLinkConfig;
- (void)rtcScrollViewWillBeginDragging:(id)arg1;
- (void)rtcScrollViewDidScroll:(id)arg1;
- (void)OnDetailClickedUrl:(id)arg1;
- (id)getCurrentViewController;
- (id)getScrollView;
- (void)onRichTextViewExit;
- (void)onPushNewVieController:(id)arg1;
- (void)animateHiddeToolView;
- (void)animateShowToolView;
- (void)onMenuControllerWillShow;
- (void)onMenuControllerDidHide;
- (void)menuResponderDidSearch:(id)arg1 didCopyText:(id)arg2;
- (void)menuResponderDidForward:(id)arg1;
- (void)menuResponderDidSelectAll:(id)arg1;
- (void)menuResponder:(id)arg1 didCopyText:(id)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)onWeAppMPShortLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)hidesStatusBar;
- (void)hideWithAnimate:(_Bool)arg1;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onSingleTap;
- (void)onSingleTapRTCV;
- (void)onSingleTapWithPoint:(struct CGPoint)arg1;
- (void)setOriginFrame:(struct CGRect)arg1;
- (void)setContent:(id)arg1;
- (unsigned int)getTextPreFontSize;
- (void)updateTextView;
- (void)setLinkDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)showTransitioningAnimationCompleted;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

