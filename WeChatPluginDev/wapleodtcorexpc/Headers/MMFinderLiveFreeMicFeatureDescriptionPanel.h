//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel, UIView;

@interface MMFinderLiveFreeMicFeatureDescriptionPanel
{
    CDUnknownBlockType _freeMicFeatureDescriptionPanelDidCloseBlock;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_dotLabel1;
    UILabel *_dotLabel2;
    UILabel *_tipLabel1;
    UILabel *_tipLabel2;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *tipLabel2; // @synthesize tipLabel2=_tipLabel2;
@property(retain, nonatomic) UILabel *tipLabel1; // @synthesize tipLabel1=_tipLabel1;
@property(retain, nonatomic) UILabel *dotLabel2; // @synthesize dotLabel2=_dotLabel2;
@property(retain, nonatomic) UILabel *dotLabel1; // @synthesize dotLabel1=_dotLabel1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType freeMicFeatureDescriptionPanelDidCloseBlock; // @synthesize freeMicFeatureDescriptionPanelDidCloseBlock=_freeMicFeatureDescriptionPanelDidCloseBlock;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

