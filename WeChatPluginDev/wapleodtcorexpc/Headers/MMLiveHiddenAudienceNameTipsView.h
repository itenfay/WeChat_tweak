//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIView;

@interface MMLiveHiddenAudienceNameTipsView
{
    CDUnknownBlockType _clickAction;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUIButton *_okButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

