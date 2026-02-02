//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImage, UIView, WCFinderPageControl;
@protocol WCFinderImageBrowserViewControllerDelegate;

@interface WCFinderImageBrowserViewController
{
    _Bool _isRotating;
    id <WCFinderImageBrowserViewControllerDelegate> _delegate;
    UIImage *_transitionImage;
    long long _transitionImageContentMode;
    NSArray *_mediaList;
    UICollectionViewFlowLayout *_layout;
    UICollectionView *_collectionView;
    UIView *_backgroundView;
    WCFinderPageControl *_pageCtrl;
    unsigned long long _currentPage;
    unsigned long long _pageInitialIndex;
    struct CGRect _transitionImageStartRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pageInitialIndex; // @synthesize pageInitialIndex=_pageInitialIndex;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) WCFinderPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList=_mediaList;
@property(nonatomic) long long transitionImageContentMode; // @synthesize transitionImageContentMode=_transitionImageContentMode;
@property(nonatomic) struct CGRect transitionImageStartRect; // @synthesize transitionImageStartRect=_transitionImageStartRect;
@property(nonatomic) __weak UIImage *transitionImage; // @synthesize transitionImage=_transitionImage;
@property(nonatomic) __weak id <WCFinderImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)imageBrowserCellShouldStartPullingDown:(id)arg1;
- (void)imageBrowserCellPullingToDismiss:(id)arg1;
- (void)imageBrowserCellOnSingleTap:(id)arg1;
- (_Bool)imageBrowserCellIsRotating:(id)arg1;
- (void)imageBrowserCell:(id)arg1 changePullingDownState:(_Bool)arg2;
- (void)imageBrowserCell:(id)arg1 changeBackgrondColorAlpha:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1;
- (id)centerCell;
- (void)onPageCtrlValueChange;
- (void)layoutOnSizeChanged;
- (void)layoutViews;
- (struct CGRect)collectionViewFrame;
- (void)setupSubviews;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaList:(id)arg1 pageIndex:(unsigned long long)arg2;
- (_Bool)disableScrollViewBottomInsetAdjustment;
- (_Bool)shouldInteractivePop;
- (_Bool)useTransparentNavibar;
- (_Bool)useCustomNavibar;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

