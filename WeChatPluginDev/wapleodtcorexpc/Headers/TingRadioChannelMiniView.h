//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class PAGFile, PAGView, UIImageView;

@interface TingRadioChannelMiniView : UIView
{
    UIImageView *_coverImage;
    UIView *_barView;
    PAGView *_waveMaskLayer;
    PAGFile *_waveFile;
    UIView *_waveColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *waveColorView; // @synthesize waveColorView=_waveColorView;
@property(nonatomic) __weak PAGFile *waveFile; // @synthesize waveFile=_waveFile;
@property(retain, nonatomic) PAGView *waveMaskLayer; // @synthesize waveMaskLayer=_waveMaskLayer;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UIImageView *coverImage; // @synthesize coverImage=_coverImage;
- (void)setCustomImage:(id)arg1;
- (void)layoutSubviews;
- (void)initPagWave;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

