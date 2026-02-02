//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicFadeOutLayer, MMUIButton, UIView, UIViewController, WCFinderBGMPlayer, WCFinderDataItem, WCFinderFeedImageCDNView, WCFinderSimplePlayerView;
@protocol WCFinderFeedPickerPreviewViewControllerDelegate;

@interface WCFinderFeedPickerPreviewViewController
{
    id <WCFinderFeedPickerPreviewViewControllerDelegate> _delegate;
    UIViewController *_weakVC;
    WCFinderSimplePlayerView *_playerView;
    MMUIButton *_doneBtn;
    UIView *_containerView;
    WCFinderFeedImageCDNView *_bgImageView;
    UIView *_bgBlurView;
    UIView *_outterBorderView;
    UIView *_innterBorderView;
    MMMusicFadeOutLayer *_imageMaskLayer;
    WCFinderBGMPlayer *_bgmPlayer;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCFinderBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) MMMusicFadeOutLayer *imageMaskLayer; // @synthesize imageMaskLayer=_imageMaskLayer;
@property(retain, nonatomic) UIView *innterBorderView; // @synthesize innterBorderView=_innterBorderView;
@property(retain, nonatomic) UIView *outterBorderView; // @synthesize outterBorderView=_outterBorderView;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) WCFinderSimplePlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak UIViewController *weakVC; // @synthesize weakVC=_weakVC;
@property(nonatomic) __weak id <WCFinderFeedPickerPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onReturn;
- (void)onDoneBtnClick;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupContentView;
- (void)viewWillLayoutSubviews;
- (void)setupSubView;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1;

@end

