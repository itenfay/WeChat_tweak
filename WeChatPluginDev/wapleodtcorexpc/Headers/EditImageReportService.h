//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EditImageReportObj, NSMutableArray, NSString;

@interface EditImageReportService
{
    _Bool _isSightBeautyEffect;
    unsigned int _seekBarDragCount;
    unsigned int _cropRectChangeCount;
    unsigned int _isTimeLimitExceeded;
    float _cpuUsage;
    EditImageReportObj *_editImageReportObj;
    NSMutableArray *_editImageReportObjArray;
    unsigned long long _eventPublishId;
    unsigned long long _showPostEntranceTime;
    NSString *_sightBeautyEffectInfo;
    long long _memoryResideng;
}

- (void).cxx_destruct;
@property(nonatomic) long long memoryResideng; // @synthesize memoryResideng=_memoryResideng;
@property(nonatomic) float cpuUsage; // @synthesize cpuUsage=_cpuUsage;
@property(copy, nonatomic) NSString *sightBeautyEffectInfo; // @synthesize sightBeautyEffectInfo=_sightBeautyEffectInfo;
@property(nonatomic) _Bool isSightBeautyEffect; // @synthesize isSightBeautyEffect=_isSightBeautyEffect;
@property(nonatomic) unsigned int isTimeLimitExceeded; // @synthesize isTimeLimitExceeded=_isTimeLimitExceeded;
@property(nonatomic) unsigned int cropRectChangeCount; // @synthesize cropRectChangeCount=_cropRectChangeCount;
@property(nonatomic) unsigned int seekBarDragCount; // @synthesize seekBarDragCount=_seekBarDragCount;
@property(nonatomic) unsigned long long showPostEntranceTime; // @synthesize showPostEntranceTime=_showPostEntranceTime;
@property(nonatomic) unsigned long long eventPublishId; // @synthesize eventPublishId=_eventPublishId;
@property(retain, nonatomic) NSMutableArray *editImageReportObjArray; // @synthesize editImageReportObjArray=_editImageReportObjArray;
@property(retain, nonatomic) EditImageReportObj *editImageReportObj; // @synthesize editImageReportObj=_editImageReportObj;
- (void)reportCameraActionsLog;
- (void)reportFinderEditResultWithType:(unsigned long long)arg1 successful:(_Bool)arg2 videoDuration:(double)arg3 videoSize:(struct CGSize)arg4 composeDuration:(unsigned int)arg5;
- (void)cleanPerformance;
- (void)resavePerformanceWithCpuUsage:(float)arg1 memoryResident:(long long)arg2;
- (void)resetEventPublishId;
- (void)quitReport;
- (void)finishReport;
- (void)initReportService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

