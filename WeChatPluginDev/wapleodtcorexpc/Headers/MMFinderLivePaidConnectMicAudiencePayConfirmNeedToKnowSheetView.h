//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UILabel;

@interface MMFinderLivePaidConnectMicAudiencePayConfirmNeedToKnowSheetView
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onConfirm;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (void)initViews;
- (id)init;

@end

