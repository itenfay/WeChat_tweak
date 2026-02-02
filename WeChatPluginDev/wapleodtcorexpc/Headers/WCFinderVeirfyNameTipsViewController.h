//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UILabel, UIView;
@protocol WCFinderVeirfyNameTipsViewControllerDelegate;

@interface WCFinderVeirfyNameTipsViewController
{
    NSString *_tips;
    NSString *_tinyAppName;
    NSString *_tinyAppPath;
    id <WCFinderVeirfyNameTipsViewControllerDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_tipsLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCFinderVeirfyNameTipsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *tinyAppPath; // @synthesize tinyAppPath=_tinyAppPath;
@property(retain, nonatomic) NSString *tinyAppName; // @synthesize tinyAppName=_tinyAppName;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)startVerify;
- (void)onClickConfirm;
- (void)hide;
- (void)showTips;
- (void)viewDidLoad;

@end

