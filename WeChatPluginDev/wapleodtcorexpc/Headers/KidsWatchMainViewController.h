//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchActionCardView, MMUILabel, NSString, RichTextView, SightIconView, UIImageView;
@protocol KidsWatchMainViewControllerDelegate;

@interface KidsWatchMainViewController
{
    MMUILabel *_titleLabel;
    KidsWatchActionCardView *_loginCardView;
    RichTextView *_registerTextView;
    SightIconView *_loadingView;
    UIImageView *_shapeView;
    UIImageView *_bottomBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) UIImageView *shapeView; // @synthesize shapeView=_shapeView;
@property(retain, nonatomic) SightIconView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) RichTextView *registerTextView; // @synthesize registerTextView=_registerTextView;
@property(retain, nonatomic) KidsWatchActionCardView *loginCardView; // @synthesize loginCardView=_loginCardView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTapCloseBarButtonItem;
- (void)onTapHelpBarButton;
- (void)onTapRegisterButton;
- (void)onTapLoginButton;
- (void)showMainViewNeedShowRegister:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <KidsWatchMainViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

