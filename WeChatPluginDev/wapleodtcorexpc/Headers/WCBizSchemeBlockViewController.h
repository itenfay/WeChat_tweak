//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CheckExternalUrlAntiSpam, NSMutableArray, UIButton, UIImageView, UILabel, UIView, WCBizSchemeHandleContext;
@protocol WCBizSchemeBlockViewControllerDelegate;

@interface WCBizSchemeBlockViewController
{
    _Bool _shouldDismissWhenAppear;
    id <WCBizSchemeBlockViewControllerDelegate> _delegate;
    WCBizSchemeHandleContext *_handleContext;
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_actionButton;
    NSMutableArray *_actionButtons;
    CheckExternalUrlAntiSpam *_antiSpamInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDismissWhenAppear; // @synthesize shouldDismissWhenAppear=_shouldDismissWhenAppear;
@property(retain, nonatomic) CheckExternalUrlAntiSpam *antiSpamInfo; // @synthesize antiSpamInfo=_antiSpamInfo;
@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCBizSchemeHandleContext *handleContext; // @synthesize handleContext=_handleContext;
@property(nonatomic) __weak id <WCBizSchemeBlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didClickBackNavigationItem;
- (void)didEnterBackground;
- (_Bool)DismissMyselfAnimated:(_Bool)arg1;
- (void)onButtonClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)configureLayout;
- (_Bool)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)endLoadingAndShowAntiSpamInfoView:(id)arg1;
- (id)init;

@end

