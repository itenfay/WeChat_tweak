//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIImage, UIImageView;

@interface MMScrollActionSheetIconView
{
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    MMUIButton *_iconButton;
    UIImageView *_highLightView;
    UIImage *_iconImg;
    UIImage *_cornerImg;
    NSString *_title;
    NSString *_subTitle;
}

+ (double)displayHeightForItem:(id)arg1 width:(double)arg2 iconMargin:(double)arg3;
+ (double)displayHeightForItem:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *cornerImg; // @synthesize cornerImg=_cornerImg;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) UIImageView *highLightView; // @synthesize highLightView=_highLightView;
@property(retain, nonatomic) MMUIButton *iconButton; // @synthesize iconButton=_iconButton;
- (void)onTaped;
- (void)reloadData;
- (void)reloadItem:(id)arg1;
- (void)updateRedDot;
- (void)highLight;
- (id)initWithItem:(id)arg1 iconMargin:(double)arg2;
- (id)initWithItem:(id)arg1;

@end

