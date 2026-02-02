//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, NSNumber;

@interface MMFinderLiveShopSettingItemView : UIView
{
    _Bool _enableDarkmode;
    unsigned long long _level;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIView *_titlePreLineView;
    NSNumber *_customLabelLeft;
    NSNumber *_customDetailLabelWidth;
    UIView *_highLightShadowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highLightShadowView; // @synthesize highLightShadowView=_highLightShadowView;
@property(nonatomic) _Bool enableDarkmode; // @synthesize enableDarkmode=_enableDarkmode;
@property(retain, nonatomic) NSNumber *customDetailLabelWidth; // @synthesize customDetailLabelWidth=_customDetailLabelWidth;
@property(retain, nonatomic) NSNumber *customLabelLeft; // @synthesize customLabelLeft=_customLabelLeft;
@property(retain, nonatomic) UIView *titlePreLineView; // @synthesize titlePreLineView=_titlePreLineView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void)addLayoutObserveFor:(id)arg1 keyPaths:(id)arg2;
- (void)layoutSubviews;
- (void)setDetailLabelFontSize:(double)arg1;
- (void)setTitleLabelFontSize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

