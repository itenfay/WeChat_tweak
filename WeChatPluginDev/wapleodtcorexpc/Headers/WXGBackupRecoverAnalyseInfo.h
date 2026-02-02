//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WXGBackupRecoverAnalyseInfo : NSObject
{
    double _costTime;
    unsigned long long _msgListCount;
    unsigned long long _mediaCount;
    unsigned long long _msgListSize;
    unsigned long long _mediaSize;
    unsigned long long _filterMediaCount;
    unsigned long long _filterMediaSize;
    unsigned long long _requestFilterMediaCount;
    unsigned long long _requestFilterCount;
    double _filterCostTime;
    unsigned long long _minStartTime;
    unsigned long long _maxEndTime;
    NSMutableArray *_requestSessionInfo;
    double _startTime;
    NSString *_briefString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *briefString; // @synthesize briefString=_briefString;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *requestSessionInfo; // @synthesize requestSessionInfo=_requestSessionInfo;
@property(nonatomic) unsigned long long maxEndTime; // @synthesize maxEndTime=_maxEndTime;
@property(nonatomic) unsigned long long minStartTime; // @synthesize minStartTime=_minStartTime;
@property(nonatomic) double filterCostTime; // @synthesize filterCostTime=_filterCostTime;
@property(nonatomic) unsigned long long requestFilterCount; // @synthesize requestFilterCount=_requestFilterCount;
@property(nonatomic) unsigned long long requestFilterMediaCount; // @synthesize requestFilterMediaCount=_requestFilterMediaCount;
@property(nonatomic) unsigned long long filterMediaSize; // @synthesize filterMediaSize=_filterMediaSize;
@property(nonatomic) unsigned long long filterMediaCount; // @synthesize filterMediaCount=_filterMediaCount;
@property(nonatomic) unsigned long long mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) unsigned long long msgListSize; // @synthesize msgListSize=_msgListSize;
@property(nonatomic) unsigned long long mediaCount; // @synthesize mediaCount=_mediaCount;
@property(nonatomic) unsigned long long msgListCount; // @synthesize msgListCount=_msgListCount;
@property(nonatomic) double costTime; // @synthesize costTime=_costTime;
- (id)brief;
- (id)init;

@end

