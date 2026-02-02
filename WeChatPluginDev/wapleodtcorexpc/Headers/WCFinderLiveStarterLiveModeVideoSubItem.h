//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveStarterLiveModeVideoSubItem
{
    _Bool _isPureAudioMode;
    _Bool _disableVideoLandscape;
    unsigned long long _videoSubType;
}

+ (void)initialize;
+ (void)PBArrayAdd_redDotPath;
+ (void)PBArrayAdd_isPureAudioMode;
+ (void)PBArrayAdd_videoSubType;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_liveMode;
@property(nonatomic) _Bool disableVideoLandscape; // @synthesize disableVideoLandscape=_disableVideoLandscape;
@property(nonatomic) _Bool isPureAudioMode; // @synthesize isPureAudioMode=_isPureAudioMode;
@property(nonatomic) unsigned long long videoSubType; // @synthesize videoSubType=_videoSubType;
- (_Bool)isLandscapSubItem;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

