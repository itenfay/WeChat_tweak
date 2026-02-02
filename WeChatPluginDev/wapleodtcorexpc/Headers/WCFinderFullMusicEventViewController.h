//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIBarButtonItem, WCFinderMusicEventView, WCFinderTopicRouteParams;

@interface WCFinderFullMusicEventViewController
{
    WCFinderMusicEventView *_musicEventView;
    WCFinderTopicRouteParams *_params;
    NSString *_navigationBarTitle;
    UIBarButtonItem *_moreRightButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *moreRightButtonItem; // @synthesize moreRightButtonItem=_moreRightButtonItem;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) WCFinderTopicRouteParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderMusicEventView *musicEventView; // @synthesize musicEventView=_musicEventView;
- (void)onConfirmButtonClicked;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (double)topInsetOfFinderTabPageView;
- (void)onFinderMusicTopicHeaderViewRefresh;
- (void)initMusicNaviItems;
- (id)currentViewController;
- (id)getCurMediaListObject;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onClickRightItem:(id)arg1;
- (void)onClickBackItem;
- (double)contentLeftMargin;
- (double)contentDisplayWidth;
- (void)setupNavigationBarTitle;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

