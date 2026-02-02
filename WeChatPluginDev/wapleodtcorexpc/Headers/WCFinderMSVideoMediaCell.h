//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SightIconView, UILabel, UIView, WCFinderFeedStaticCoverView;

@interface WCFinderMSVideoMediaCell
{
    WCFinderFeedStaticCoverView *_coverView;
    UIView *_timeBGView;
    UILabel *_timeLabel;
    SightIconView *_playIconView;
}

+ (double)calculateBaseLine:(struct CGSize)arg1 forVM:(id)arg2;
+ (struct CGSize)calculateCoverDisplaySize:(struct CGSize)arg1 forVM:(id)arg2;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *timeBGView; // @synthesize timeBGView=_timeBGView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
- (void)onLongPress:(id)arg1;
- (void)onClickVideo;
- (void)onContentVMChanged;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

