//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, WCAdCardBtnInfo, WCAdContactInfoHalfScreenViewController, WCAdConventionalDetailContainerViewController, WCAdConventionalHalfScreenScrollView, WCDataItem;
@protocol WCAdConventionalHalfScreenDetailViewDelegate;

@interface WCAdConventionalHalfScreenDetailBaseView
{
    CContact *_contactInfo;
    id <WCAdConventionalHalfScreenDetailViewDelegate> _delegate;
    WCAdCardBtnInfo *_actionInfo;
    WCDataItem *_dataItem;
    WCAdContactInfoHalfScreenViewController *_contactViewController;
    WCAdConventionalHalfScreenScrollView *_contentScrollView;
    WCAdConventionalDetailContainerViewController *_containerViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdConventionalDetailContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) WCAdConventionalHalfScreenScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) WCAdContactInfoHalfScreenViewController *contactViewController; // @synthesize contactViewController=_contactViewController;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdCardBtnInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(nonatomic) __weak id <WCAdConventionalHalfScreenDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void)onDetailContainerViewPageSheetTryToDismissParent:(_Bool)arg1;
- (id)onDetailContainerViewHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onDetailContainerViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onDetailContainerViewPageSheetDidClose;
- (void)onDetailContainerViewPageSheetWillClose;
- (id)onContactInfoHalfScreenHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onContactInfoHalfScreenPageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onContactInfoHalfScreenPageSheetDidClose;
- (void)onContactInfoHalfScreenPageSheetWillClose;
- (void)onHalfScreenScrollViewUpdateAnimatingState:(_Bool)arg1;
- (void)onHalfScreenScrollViewWillStickToBottom;
- (void)onHalfScreenScrollViewDidPinToTop;
- (void)onHalfScreenScrollViewDidChangeVisibleHeight:(double)arg1;
- (void)onHalfScreenScrollViewWillShowViewController:(id)arg1;
- (void)onHalfScreenScrollViewWillAddViewController:(id)arg1;
- (void)onHalfScreenScrollViewUpdateTitle:(id)arg1;
- (void)onHalfScreenScrollViewCeilingTopWithPercent:(double)arg1 animated:(_Bool)arg2;
- (double)onHalfScreenScrollViewFetchCalculatedHeight;
- (unsigned long long)onHalfScreenScrollViewFetchContentItemScene;
- (id)onHalfScreenScrollViewFetchDataItem;
- (void)showDetailContainerVCWithAnimated:(_Bool)arg1;
- (void)tryToResumeDetailContainerVC;
- (void)tryToLoadDetailContainerVC;
- (_Bool)isActionInfoValidForDetailContainerVC;
- (void)onKeyboardWillShow:(id)arg1;
- (void)tryToResumeContentScrollView;
- (void)tryToLoadWebViewContent;
- (void)showWeWorkContact:(id)arg1 animated:(_Bool)arg2;
- (void)tryToResumeWeWorkContact;
- (void)tryToShowWeWorkContact;
- (void)tryToLoadWeWorkContact;
- (void)resumeDetailPageSheet;
- (void)dismissDetailPageSheet;
- (_Bool)isDetailPageSheetPinToTop;
- (void)onViewDidDisappear;
- (void)onViewWillDisappear;
- (void)onViewDidAppear;
- (void)onViewWillAppear;
- (void)onHostViewDidExit;
- (void)onHostViewDidEnter;
- (void)onHostViewWillEnter;
- (void)tryToAdaptDetailLayout;
- (void)layoutDetailPageSheet;
- (void)layoutDetailPageSheetWithReset:(_Bool)arg1;
- (id)fetchContentViewToDoTransition;
- (double)fetchHeightPercent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)fetchContentScrollViewEmptyAreaHeight;
- (double)fetchContentScrollViewMarginTop;
- (void)configSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 clickActionInfo:(id)arg2 dataItem:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

