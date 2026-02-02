//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIImageView, UIView;
@protocol MMAppRefreshTokenErrorViewControllerDelegate;

@interface MMAppRefreshTokenErrorViewController
{
    _Bool _isShare;
    id <MMAppRefreshTokenErrorViewControllerDelegate> _delegate;
    UIView *_errView;
    UIView *_scrollView;
    UIImageView *_imgView;
    MMUILabel *_titleLabel;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *errView; // @synthesize errView=_errView;
@property(nonatomic) __weak id <MMAppRefreshTokenErrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
- (void)onConfirmBtnClicked;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;

@end

