//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UILabel;

@interface MMFinderLiveNoticeCreateHintPageSheet
{
    CDUnknownBlockType _onCreateNotice;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_imageView;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onCreateNotice; // @synthesize onCreateNotice=_onCreateNotice;
- (void)onConfirm;
- (void)layoutSubviews;
- (_Bool)useCompactLayoutPadding;
- (void)initViews;
- (void)setupPageSheetConfig;
- (id)init;

@end

