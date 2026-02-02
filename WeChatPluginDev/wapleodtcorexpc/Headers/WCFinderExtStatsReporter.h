//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface WCFinderExtStatsReporter : NSObject
{
    int _commentScene;
    NSString *_replayEnterScene;
    NSMutableArray *_stats;
    NSMutableSet *_exposeTidSet;
}

+ (void)extStatReportWithType:(int)arg1 dataItem:(id)arg2 commentScene:(int)arg3 liveNoticeInfo:(id)arg4;
+ (void)extStatReportWithType:(int)arg1 dataItem:(id)arg2 commentScene:(int)arg3 templateInfo:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposeTidSet; // @synthesize exposeTidSet=_exposeTidSet;
@property(retain, nonatomic) NSMutableArray *stats; // @synthesize stats=_stats;
@property(copy, nonatomic) NSString *replayEnterScene; // @synthesize replayEnterScene=_replayEnterScene;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)reportAndClearExistData;
- (id)genExtStatsWithType:(int)arg1 dataItem:(id)arg2;
- (void)addExtStat:(id)arg1 withType:(int)arg2 tid:(id)arg3;
- (void)addExtStat:(id)arg1;
- (void)addStatReportDataWithType:(int)arg1 dataItem:(id)arg2 searchData:(id)arg3 resultList:(id)arg4 fromTab:(id)arg5 toTab:(id)arg6 value:(id)arg7 strValue:(id)arg8;
- (void)addStatReportDataWithType:(int)arg1 dataItem:(id)arg2;

@end

