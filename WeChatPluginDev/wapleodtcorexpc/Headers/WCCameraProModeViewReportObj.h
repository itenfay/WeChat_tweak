//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCCameraBeautyViewReportObj, WCCameraFilterViewReportObj;

@interface WCCameraProModeViewReportObj : NSObject
{
    unsigned long long _beautyState;
    WCCameraBeautyViewReportObj *_beautySubReportObj;
    unsigned long long _filterState;
    WCCameraFilterViewReportObj *_filterSubReportObj;
    unsigned long long _gridState;
    unsigned long long _timeState;
    unsigned long long _aspectRatioState;
}

+ (unsigned long long)optionWithEventID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aspectRatioState; // @synthesize aspectRatioState=_aspectRatioState;
@property(nonatomic) unsigned long long timeState; // @synthesize timeState=_timeState;
@property(nonatomic) unsigned long long gridState; // @synthesize gridState=_gridState;
@property(retain, nonatomic) WCCameraFilterViewReportObj *filterSubReportObj; // @synthesize filterSubReportObj=_filterSubReportObj;
@property(nonatomic) unsigned long long filterState; // @synthesize filterState=_filterState;
@property(retain, nonatomic) WCCameraBeautyViewReportObj *beautySubReportObj; // @synthesize beautySubReportObj=_beautySubReportObj;
@property(nonatomic) unsigned long long beautyState; // @synthesize beautyState=_beautyState;
- (id)genReportStrWithType:(unsigned long long)arg1;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2 subType:(unsigned long long)arg3;
- (void)updateProModeViewState:(unsigned long long)arg1 withType:(unsigned long long)arg2;

@end

