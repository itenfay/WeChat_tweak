//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DataReportObjectDataEntity : NSObject
{
    NSMutableDictionary *_objectParams;
    NSMutableDictionary *_objectEventParams;
    NSMutableDictionary *_dynamicParamsBlocks;
    NSMutableDictionary *_reportPolicy;
    NSMutableDictionary *_reportIntervals;
    NSMutableDictionary *_lastReportTimes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *lastReportTimes; // @synthesize lastReportTimes=_lastReportTimes;
@property(retain, nonatomic) NSMutableDictionary *reportIntervals; // @synthesize reportIntervals=_reportIntervals;
@property(retain, nonatomic) NSMutableDictionary *reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(retain, nonatomic) NSMutableDictionary *dynamicParamsBlocks; // @synthesize dynamicParamsBlocks=_dynamicParamsBlocks;
@property(retain, nonatomic) NSMutableDictionary *objectEventParams; // @synthesize objectEventParams=_objectEventParams;
@property(retain, nonatomic) NSMutableDictionary *objectParams; // @synthesize objectParams=_objectParams;
- (id)toString;
- (void)reset;
- (id)init;

@end

