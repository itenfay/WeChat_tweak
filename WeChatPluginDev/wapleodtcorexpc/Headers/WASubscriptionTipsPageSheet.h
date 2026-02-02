//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface WASubscriptionTipsPageSheet
{
    CDUnknownBlockType _okAction;
    UIImageView *_iconView;
    UILabel *_titlelLabel;
    UILabel *_descLabel;
    UIImageView *_imageView;
    UIButton *_okButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titlelLabel; // @synthesize titlelLabel=_titlelLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType okAction; // @synthesize okAction=_okAction;
- (void)setupUI;
- (id)init;
- (double)contentHeight;

@end

