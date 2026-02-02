//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMUILabel, RingToneDetail, SightIconView, UIImage, UIView;

@interface RingToneImageView : UIImageView
{
    _Bool _isPlaying;
    _Bool _showForCellOnly;
    UIImageView *_webCoverView;
    RingToneDetail *_ring;
    MMUILabel *_sourceLabel;
    UIImageView *_qqMusicIconView;
    UIView *_coverMaskView;
    UIImage *_defaultImage;
    SightIconView *_playImageView;
    UIImageView *_musicDancingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *musicDancingView; // @synthesize musicDancingView=_musicDancingView;
@property(retain, nonatomic) SightIconView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) UIImageView *qqMusicIconView; // @synthesize qqMusicIconView=_qqMusicIconView;
@property(retain, nonatomic) MMUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
@property(retain, nonatomic) UIImageView *webCoverView; // @synthesize webCoverView=_webCoverView;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)prepareForReuse;
- (void)updateCoverImageWith:(id)arg1;
- (void)dancingMusicView:(_Bool)arg1 type:(unsigned long long)arg2;
- (void)addDancingMusicView;
- (void)initView;
- (id)initWithFrameForCell:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

