//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSNumber, NSString;

@interface BizEnterStatusInfo : NSObject
{
    NSNumber *_enterSource;
    NSNumber *_openArticleFromScene;
    NSNumber *_isTeenMode;
    NSNumber *_redDotCount;
    NSNumber *_pos;
    NSNumber *_finderLiveRedDotType;
    NSString *_finderFeedExportId;
    NSNumber *_exposeMsgType;
    NSString *_exposeUserName;
    NSNumber *_lastExposeId;
    NSNumber *_lastExposeMsgId;
    NSNumber *_lastExposeMid;
    NSNumber *_sessionId;
    NSNumber *_enterTime;
    NSString *_netType;
    NSNumber *_isHeadsetOn;
    FlutterStandardTypedData *_redDotReportItem;
    NSNumber *_createEngineGroup;
    NSNumber *_createEngine;
    NSNumber *_startOpenTime;
    NSNumber *_endOnEnterTime;
    NSNumber *_startCreateEngineGroupTime;
    NSNumber *_startCreateEngineTime;
    NSNumber *_startShowFlutterPageTime;
    NSNumber *_firstGroupMsgCount;
    NSString *_reddotReportInfo;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithEnterSource:(id)arg1 openArticleFromScene:(id)arg2 isTeenMode:(id)arg3 redDotCount:(id)arg4 pos:(id)arg5 finderLiveRedDotType:(id)arg6 finderFeedExportId:(id)arg7 exposeMsgType:(id)arg8 exposeUserName:(id)arg9 lastExposeId:(id)arg10 lastExposeMsgId:(id)arg11 lastExposeMid:(id)arg12 sessionId:(id)arg13 enterTime:(id)arg14 netType:(id)arg15 isHeadsetOn:(id)arg16 redDotReportItem:(id)arg17 createEngineGroup:(id)arg18 createEngine:(id)arg19 startOpenTime:(id)arg20 endOnEnterTime:(id)arg21 startCreateEngineGroupTime:(id)arg22 startCreateEngineTime:(id)arg23 startShowFlutterPageTime:(id)arg24 firstGroupMsgCount:(id)arg25 reddotReportInfo:(id)arg26;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reddotReportInfo; // @synthesize reddotReportInfo=_reddotReportInfo;
@property(retain, nonatomic) NSNumber *firstGroupMsgCount; // @synthesize firstGroupMsgCount=_firstGroupMsgCount;
@property(retain, nonatomic) NSNumber *startShowFlutterPageTime; // @synthesize startShowFlutterPageTime=_startShowFlutterPageTime;
@property(retain, nonatomic) NSNumber *startCreateEngineTime; // @synthesize startCreateEngineTime=_startCreateEngineTime;
@property(retain, nonatomic) NSNumber *startCreateEngineGroupTime; // @synthesize startCreateEngineGroupTime=_startCreateEngineGroupTime;
@property(retain, nonatomic) NSNumber *endOnEnterTime; // @synthesize endOnEnterTime=_endOnEnterTime;
@property(retain, nonatomic) NSNumber *startOpenTime; // @synthesize startOpenTime=_startOpenTime;
@property(retain, nonatomic) NSNumber *createEngine; // @synthesize createEngine=_createEngine;
@property(retain, nonatomic) NSNumber *createEngineGroup; // @synthesize createEngineGroup=_createEngineGroup;
@property(retain, nonatomic) FlutterStandardTypedData *redDotReportItem; // @synthesize redDotReportItem=_redDotReportItem;
@property(retain, nonatomic) NSNumber *isHeadsetOn; // @synthesize isHeadsetOn=_isHeadsetOn;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSNumber *enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSNumber *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSNumber *lastExposeMid; // @synthesize lastExposeMid=_lastExposeMid;
@property(retain, nonatomic) NSNumber *lastExposeMsgId; // @synthesize lastExposeMsgId=_lastExposeMsgId;
@property(retain, nonatomic) NSNumber *lastExposeId; // @synthesize lastExposeId=_lastExposeId;
@property(copy, nonatomic) NSString *exposeUserName; // @synthesize exposeUserName=_exposeUserName;
@property(retain, nonatomic) NSNumber *exposeMsgType; // @synthesize exposeMsgType=_exposeMsgType;
@property(copy, nonatomic) NSString *finderFeedExportId; // @synthesize finderFeedExportId=_finderFeedExportId;
@property(retain, nonatomic) NSNumber *finderLiveRedDotType; // @synthesize finderLiveRedDotType=_finderLiveRedDotType;
@property(retain, nonatomic) NSNumber *pos; // @synthesize pos=_pos;
@property(retain, nonatomic) NSNumber *redDotCount; // @synthesize redDotCount=_redDotCount;
@property(retain, nonatomic) NSNumber *isTeenMode; // @synthesize isTeenMode=_isTeenMode;
@property(retain, nonatomic) NSNumber *openArticleFromScene; // @synthesize openArticleFromScene=_openArticleFromScene;
@property(retain, nonatomic) NSNumber *enterSource; // @synthesize enterSource=_enterSource;
- (id)toList;

@end

