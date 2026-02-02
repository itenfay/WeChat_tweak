//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIImageView, NSString, UILabel, UIView, WCMarqueeTextView, WCStoryLyricWaveView;

@interface WCVideoProducerMusicCardView : UICollectionViewCell
{
    UIView *_contentContainerView;
    MMUIImageView *_musicIconView;
    WCStoryLyricWaveView *_waveIconView;
    UILabel *_titleLabelView;
    WCMarqueeTextView *_lyricsMarqueeView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMarqueeTextView *lyricsMarqueeView; // @synthesize lyricsMarqueeView=_lyricsMarqueeView;
@property(retain, nonatomic) UILabel *titleLabelView; // @synthesize titleLabelView=_titleLabelView;
@property(retain, nonatomic) WCStoryLyricWaveView *waveIconView; // @synthesize waveIconView=_waveIconView;
@property(retain, nonatomic) MMUIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void)_initDescriptionBar;
- (void)_initTopInfoBar;
- (void)_initView;
- (void)_loadForAccessibility:(id)arg1;
- (void)_loadMusicDescription:(id)arg1;
- (void)_loadMusicTitle:(id)arg1;
- (void)_stopPlaying;
- (void)_startPlaying;
- (void)loadMusicCellViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

