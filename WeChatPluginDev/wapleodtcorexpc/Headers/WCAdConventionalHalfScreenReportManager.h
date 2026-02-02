//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdConventionalHalfScreenReportModel, WCAdvertiseInfo, WCStatTimerHelper;

@interface WCAdConventionalHalfScreenReportManager : NSObject
{
    int _scene;
    WCStatTimerHelper *_halfScreenTimerHelper;
    WCAdConventionalHalfScreenReportModel *_reportModel;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
    unsigned long long _contentOption;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentOption; // @synthesize contentOption=_contentOption;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) WCAdConventionalHalfScreenReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) WCStatTimerHelper *halfScreenTimerHelper; // @synthesize halfScreenTimerHelper=_halfScreenTimerHelper;
- (void)reportHalfScreenGridIncreaseExposureCountWithIndex:(long long)arg1;
- (void)reportHalfScreenVideoIncreasePlayCompletedCount;
- (void)reportHalfScreenVideoIncreasePlayCount;
- (void)reportHalfScreenVideoPlayTimeInterval:(unsigned long long)arg1;
- (void)reportHalfScreenVideoDuration:(unsigned long long)arg1;
- (void)reportHalfScreenPinToTop;
- (void)reportHalfScreenDragToFullScreen;
- (void)reportHalfScreenClickToFullScreen;
- (void)reportHalfScreenExposureEnd;
- (void)reportHalfScreenExposureStart;
- (void)doHalfScreenReport;
- (id)initWithAdInfo:(id)arg1 snsId:(id)arg2 scene:(int)arg3 contentOption:(unsigned long long)arg4;

@end

