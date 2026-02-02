//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCTimelineSessionStatItem
{
    _Bool _lastStayed;
    _Bool _isReport;
    unsigned int _pId;
    unsigned int _seq;
    unsigned int _scrollTotalCount;
    unsigned int _scrollErrorCount;
    NSString *_pName;
    NSString *_sessionId;
    NSString *_formSessionId;
    unsigned long long _frontTime;
    unsigned long long _scrollTotalTime;
    unsigned long long _stayTotalTime;
    NSMutableDictionary *_reportFeedDic;
    unsigned long long _lastEnterTimelinePageTime;
    unsigned long long _lastExitTimelinePageTime;
    unsigned long long _lastCalcTime;
    double _lastCalcOffsetY;
    unsigned long long _lastCalcOffsetTime;
    unsigned long long _scrollTotalCostTime;
    unsigned long long _scrollOriginalTotalCostTime;
    NSMutableArray *_adSessionIDs;
    NSMutableArray *_nextPageLocations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *nextPageLocations; // @synthesize nextPageLocations=_nextPageLocations;
@property(retain, nonatomic) NSMutableArray *adSessionIDs; // @synthesize adSessionIDs=_adSessionIDs;
@property(nonatomic) unsigned int scrollErrorCount; // @synthesize scrollErrorCount=_scrollErrorCount;
@property(nonatomic) unsigned int scrollTotalCount; // @synthesize scrollTotalCount=_scrollTotalCount;
@property(nonatomic) unsigned long long scrollOriginalTotalCostTime; // @synthesize scrollOriginalTotalCostTime=_scrollOriginalTotalCostTime;
@property(nonatomic) unsigned long long scrollTotalCostTime; // @synthesize scrollTotalCostTime=_scrollTotalCostTime;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(nonatomic) _Bool lastStayed; // @synthesize lastStayed=_lastStayed;
@property(nonatomic) unsigned long long lastCalcOffsetTime; // @synthesize lastCalcOffsetTime=_lastCalcOffsetTime;
@property(nonatomic) double lastCalcOffsetY; // @synthesize lastCalcOffsetY=_lastCalcOffsetY;
@property(nonatomic) unsigned long long lastCalcTime; // @synthesize lastCalcTime=_lastCalcTime;
@property(nonatomic) unsigned long long lastExitTimelinePageTime; // @synthesize lastExitTimelinePageTime=_lastExitTimelinePageTime;
@property(nonatomic) unsigned long long lastEnterTimelinePageTime; // @synthesize lastEnterTimelinePageTime=_lastEnterTimelinePageTime;
@property(retain, nonatomic) NSMutableDictionary *reportFeedDic; // @synthesize reportFeedDic=_reportFeedDic;
@property(nonatomic) unsigned long long stayTotalTime; // @synthesize stayTotalTime=_stayTotalTime;
@property(nonatomic) unsigned long long scrollTotalTime; // @synthesize scrollTotalTime=_scrollTotalTime;
@property(nonatomic) unsigned long long frontTime; // @synthesize frontTime=_frontTime;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *formSessionId; // @synthesize formSessionId=_formSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *pName; // @synthesize pName=_pName;
@property(nonatomic) unsigned int pId; // @synthesize pId=_pId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;
- (id)init;

@end

