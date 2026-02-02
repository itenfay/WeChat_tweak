//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIImageView, MMWebImageView, SightIconView;

@interface BizPersonalCenterRecentReadCover : UIView
{
    double _outSize;
    double _innerSize;
    double _imgIconSize;
    MMWebImageView *_coverImageView;
    MMUIImageView *_playVoiceFg;
    MMUIImageView *_playVoiceBg;
    SightIconView *_playIconView;
    MMUIImageView *_imgIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *imgIconView; // @synthesize imgIconView=_imgIconView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) MMUIImageView *playVoiceBg; // @synthesize playVoiceBg=_playVoiceBg;
@property(retain, nonatomic) MMUIImageView *playVoiceFg; // @synthesize playVoiceFg=_playVoiceFg;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) double imgIconSize; // @synthesize imgIconSize=_imgIconSize;
@property(nonatomic) double innerSize; // @synthesize innerSize=_innerSize;
@property(nonatomic) double outSize; // @synthesize outSize=_outSize;
- (void)showType:(long long)arg1 withURL:(id)arg2;
- (void)setupViews;
- (id)init;

@end

