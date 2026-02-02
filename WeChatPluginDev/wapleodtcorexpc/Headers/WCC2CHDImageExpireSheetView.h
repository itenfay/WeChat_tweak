//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIButton, UIImageView;

@interface WCC2CHDImageExpireSheetView
{
    CDUnknownBlockType _onClickConfirmButton;
    UIImageView *_imageView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    MMUIButton *_jumpButton;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType onClickConfirmButton; // @synthesize onClickConfirmButton=_onClickConfirmButton;
- (void)jumpToSetting;
- (void)initView;
- (void)initConfigs;
- (id)initWithType:(int)arg1;

@end

