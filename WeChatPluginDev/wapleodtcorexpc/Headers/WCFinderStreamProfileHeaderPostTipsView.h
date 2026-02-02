//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIButton, UILabel, WCFinderProfilePostTipsInfo;

@interface WCFinderStreamProfileHeaderPostTipsView
{
    WCFinderProfilePostTipsInfo *_info;
    MMWebImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_reasonLabel;
    UIButton *_postButton;
    CDUnknownBlockType _clickPostBtnBlock;
    CDUnknownBlockType _clickSelfViewBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickSelfViewBlock; // @synthesize clickSelfViewBlock=_clickSelfViewBlock;
@property(copy, nonatomic) CDUnknownBlockType clickPostBtnBlock; // @synthesize clickPostBtnBlock=_clickPostBtnBlock;
@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCFinderProfilePostTipsInfo *info; // @synthesize info=_info;
- (void)onClickTipsView;
- (void)onClickPostButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)setupUserAction;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

