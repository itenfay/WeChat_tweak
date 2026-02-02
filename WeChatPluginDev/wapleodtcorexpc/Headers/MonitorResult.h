//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MonitorResult : NSObject
{
    unsigned long long _monitorId;
    NSString *_rootBtnId;
    NSMutableArray *_monitorPointList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *monitorPointList; // @synthesize monitorPointList=_monitorPointList;
@property(retain, nonatomic) NSString *rootBtnId; // @synthesize rootBtnId=_rootBtnId;
@property(nonatomic) unsigned long long monitorId; // @synthesize monitorId=_monitorId;
- (double)getMaxColorDistanceWithMonitorResult:(id)arg1;
- (_Bool)isColorDistanceSimilarToMonitorResult:(id)arg1 similarColorDistance:(double)arg2 similarStandardRate:(double)arg3;
- (_Bool)isColorSimilarToMonitorResult:(id)arg1 similarContrastRatio:(double)arg2 similarStandardRate:(double)arg3;
- (_Bool)updatePixelColorForMonitorPoints:(id)arg1;
- (id)initWithMonitorId:(unsigned long long)arg1;

@end

