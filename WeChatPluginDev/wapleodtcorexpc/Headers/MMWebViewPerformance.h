//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface MMWebViewPerformance : NSObject
{
    NSMutableArray *_timeRecordList;
    NSMutableDictionary *_timeRecordDic;
    unsigned long long _startTime;
}

+ (unsigned long long)currentTimeInMs;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *timeRecordDic; // @synthesize timeRecordDic=_timeRecordDic;
@property(retain, nonatomic) NSMutableArray *timeRecordList; // @synthesize timeRecordList=_timeRecordList;
- (int)relativeRecordTimeForName:(id)arg1;
- (void)removeAllRecords;
- (void)sortTimeRecord;
- (void)recordTimeWithName:(id)arg1 time:(unsigned long long)arg2 newCategory:(_Bool)arg3 detail:(id)arg4;
- (void)recordTimeWithName:(id)arg1 newCategory:(_Bool)arg2 detail:(id)arg3;
- (id)description;
- (id)init;

@end

