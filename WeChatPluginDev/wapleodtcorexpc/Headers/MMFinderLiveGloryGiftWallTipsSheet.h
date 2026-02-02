//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, UIView;

@interface MMFinderLiveGloryGiftWallTipsSheet
{
    UIView *_gloryLine;
    MMUILabel *_gloryTitleLabel;
    MMUILabel *_gloryDetailLabel;
    UIImageView *_gloryIntroImageView;
    UIView *_giftWallLine;
    MMUILabel *_giftWallTitleLabel;
    MMUILabel *_giftWallDetailLabel;
    UIImageView *_giftWallIntroImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *giftWallIntroImageView; // @synthesize giftWallIntroImageView=_giftWallIntroImageView;
@property(retain, nonatomic) MMUILabel *giftWallDetailLabel; // @synthesize giftWallDetailLabel=_giftWallDetailLabel;
@property(retain, nonatomic) MMUILabel *giftWallTitleLabel; // @synthesize giftWallTitleLabel=_giftWallTitleLabel;
@property(retain, nonatomic) UIView *giftWallLine; // @synthesize giftWallLine=_giftWallLine;
@property(retain, nonatomic) UIImageView *gloryIntroImageView; // @synthesize gloryIntroImageView=_gloryIntroImageView;
@property(retain, nonatomic) MMUILabel *gloryDetailLabel; // @synthesize gloryDetailLabel=_gloryDetailLabel;
@property(retain, nonatomic) MMUILabel *gloryTitleLabel; // @synthesize gloryTitleLabel=_gloryTitleLabel;
@property(retain, nonatomic) UIView *gloryLine; // @synthesize gloryLine=_gloryLine;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

@end

