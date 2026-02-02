//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIScreenEdgePanGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderGoodsInfo, WCFinderJumpInfo;
@protocol WCFinderCommentGoodsSelectVCDelegate;

@interface WCFinderCommentGoodsSelectVC
{
    _Bool _miniAppHasSet;
    UIView *_containerView;
    UIButton *_backButton;
    UILabel *_titleView;
    UIScreenEdgePanGestureRecognizer *_popGesture;
    NSString *_tid;
    WCFinderGoodsInfo *_selectedGoodsInfo;
    WCFinderJumpInfo *_selectedGoodsJumpInfo;
    WCFinderAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool miniAppHasSet; // @synthesize miniAppHasSet=_miniAppHasSet;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderJumpInfo *selectedGoodsJumpInfo; // @synthesize selectedGoodsJumpInfo=_selectedGoodsJumpInfo;
@property(retain, nonatomic) WCFinderGoodsInfo *selectedGoodsInfo; // @synthesize selectedGoodsInfo=_selectedGoodsInfo;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture; // @synthesize popGesture=_popGesture;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)completeSelectGoodsTitle:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)genCommentGoodsJumpInfoWithGoods:(id)arg1;
- (void)handlePopGesture:(id)arg1;
- (void)setupTopView;
- (void)setupPopGes;
- (void)setupShopMiniApp;
- (void)setupUI;
- (double)topViewHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useCustomNavibar;
- (_Bool)useTransparentNavibar;
- (void)baseInit;
- (id)initWithTid:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WCFinderCommentGoodsSelectVCDelegate> delegate;

@end

