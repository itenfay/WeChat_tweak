//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, RichTextView, UIButton, UIImageView, UILabel;

@interface WCFinderClaimPOIHalfScreenViewController
{
    UILabel *_titleLabel;
    UIImageView *_wechatImageView;
    UIImageView *_finderImageView;
    UILabel *_wechatLabel;
    UILabel *_finderLabel;
    MMUIButton *_checkBox;
    RichTextView *_protoTextView;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) RichTextView *protoTextView; // @synthesize protoTextView=_protoTextView;
@property(retain, nonatomic) MMUIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UILabel *wechatLabel; // @synthesize wechatLabel=_wechatLabel;
@property(retain, nonatomic) UIImageView *finderImageView; // @synthesize finderImageView=_finderImageView;
@property(retain, nonatomic) UIImageView *wechatImageView; // @synthesize wechatImageView=_wechatImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)useTransparentNavibar;
- (void)tapNextButton;
- (void)tapCheckBox;
- (void)initViews;
- (void)viewDidLoad;
- (id)init;

@end

