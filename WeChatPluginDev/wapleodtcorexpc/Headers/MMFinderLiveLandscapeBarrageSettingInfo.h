//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveLandscapeBarrageDisplaySettingInfo, MMFinderLiveLandscapeBarrageState, MMLiveTaskId;

@interface MMFinderLiveLandscapeBarrageSettingInfo : NSObject
{
    _Bool _enableBarrageStyle;
    _Bool _enableDisplayBarrageStyle;
    double _barrageDisplayRange;
    double _barrageDisplayAlpha;
    MMFinderLiveLandscapeBarrageState *_barrageState;
    MMLiveTaskId *_taskId;
    LiveLandscapeBarrageDisplaySettingInfo *_displaySetting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LiveLandscapeBarrageDisplaySettingInfo *displaySetting; // @synthesize displaySetting=_displaySetting;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveLandscapeBarrageState *barrageState; // @synthesize barrageState=_barrageState;
@property(nonatomic) double barrageDisplayAlpha; // @synthesize barrageDisplayAlpha=_barrageDisplayAlpha;
@property(nonatomic) double barrageDisplayRange; // @synthesize barrageDisplayRange=_barrageDisplayRange;
@property(nonatomic) _Bool enableDisplayBarrageStyle; // @synthesize enableDisplayBarrageStyle=_enableDisplayBarrageStyle;
@property(nonatomic) _Bool enableBarrageStyle; // @synthesize enableBarrageStyle=_enableBarrageStyle;
- (_Bool)checkDisplaySettingParamValid:(id)arg1;
- (int)getDisplayBarrageAlphaReportTag;
- (int)getDisplayBarrageRangeReportTag;
- (void)updateBarrageDisplayAlpha:(double)arg1;
- (void)updateBarrageDisplayRange:(double)arg1;
- (void)updateEnableDisplayBarrageStyle:(_Bool)arg1;
- (void)updateEnableBarrageStyle:(_Bool)arg1;
- (id)initWithTaskId:(id)arg1;

@end

