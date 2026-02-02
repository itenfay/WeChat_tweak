//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIImageView, UILabel, UIView;

@interface GCImgLinkCell
{
    MMWebImageView *_coverImgView;
    UIImageView *_playBtn;
    UILabel *_timeDuration;
    UIView *_videoLayerView;
    UIView *_imgAndVideoContainerView;
}

+ (struct CGSize)getFitSizeForImgSize:(struct CGSize)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *imgAndVideoContainerView; // @synthesize imgAndVideoContainerView=_imgAndVideoContainerView;
@property(retain, nonatomic) UIView *videoLayerView; // @synthesize videoLayerView=_videoLayerView;
@property(retain, nonatomic) UILabel *timeDuration; // @synthesize timeDuration=_timeDuration;
@property(retain, nonatomic) UIImageView *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)configureWithCellModel:(id)arg1;
- (id)timeTextForDutation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

