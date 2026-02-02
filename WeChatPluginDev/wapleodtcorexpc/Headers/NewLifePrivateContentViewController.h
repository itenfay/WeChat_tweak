//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIScrollView, NSString, UIButton, UIImageView, UILabel;

@interface NewLifePrivateContentViewController
{
    NSString *_message;
    MMUIScrollView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUIScrollView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)onTapConfirmButton;
- (id)titleText;
- (void)initLayout;
- (_Bool)useTransparentNavibar;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;

@end

