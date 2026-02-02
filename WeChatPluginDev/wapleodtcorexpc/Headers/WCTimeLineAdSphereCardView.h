//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SightIconView, UIImageView, UILabel, WCAdvertiseSphereView;

@interface WCTimeLineAdSphereCardView
{
    WCAdvertiseSphereView *_sphereView;
    SightIconView *_sightIconView;
    double _currentProgress;
    UIImageView *_weAppLogo;
    UILabel *_weAppTips;
}

+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *weAppTips; // @synthesize weAppTips=_weAppTips;
@property(retain, nonatomic) UIImageView *weAppLogo; // @synthesize weAppLogo=_weAppLogo;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) WCAdvertiseSphereView *sphereView; // @synthesize sphereView=_sphereView;
- (void)onPanGestureEnd;
- (void)onFullCoverButtonClicked;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)tryToResumeLoadingView;
- (void)initSightIconView;
- (void)resourceLoadingWithProgress:(double)arg1;
- (id)getBackGroundColorWhenLoading;
- (void)resourceDidFailed;
- (void)resourceDidLoad;
- (void)resourceLoading;
- (id)genLabelWithFont:(double)arg1 text:(id)arg2;
- (void)genWeAppLogoAndTip;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)addTopRight360Icon;
- (void)addSpherePhotoViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)tryToResetSphereMotionData;
- (void)tryToStopSphereMonitoring;
- (void)tryToStartSphereMonitoring;
- (void)contentItemDidEndDecelerating;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (id)fetchOriginSnapshot;
- (id)fetchCurrentSnapshot;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

