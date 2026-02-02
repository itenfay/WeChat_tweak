//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionFlowStatItem
{
    _Bool _isReport;
    unsigned int _pId;
    unsigned int _seq;
    unsigned int _flowSeq;
    NSString *_pName;
    unsigned long long _enterTimestampMs;
    unsigned long long _quitTimestampMs;
    unsigned long long _interval;
    NSMutableArray *_sessionFlows;
    NSMutableArray *_mergeInfos;
    NSMutableArray *_matchPagePaths;
    NSMutableArray *_mergePagePathInfos;
    NSMutableArray *_businessDatas;
    NSMutableArray *_viewOperations;
    NSMutableArray *_businessDataFilterCache;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(nonatomic) unsigned int flowSeq; // @synthesize flowSeq=_flowSeq;
@property(retain, nonatomic) NSMutableArray *businessDataFilterCache; // @synthesize businessDataFilterCache=_businessDataFilterCache;
@property(retain, nonatomic) NSMutableArray *viewOperations; // @synthesize viewOperations=_viewOperations;
@property(retain, nonatomic) NSMutableArray *businessDatas; // @synthesize businessDatas=_businessDatas;
@property(retain, nonatomic) NSMutableArray *mergePagePathInfos; // @synthesize mergePagePathInfos=_mergePagePathInfos;
@property(retain, nonatomic) NSMutableArray *matchPagePaths; // @synthesize matchPagePaths=_matchPagePaths;
@property(retain, nonatomic) NSMutableArray *mergeInfos; // @synthesize mergeInfos=_mergeInfos;
@property(retain, nonatomic) NSMutableArray *sessionFlows; // @synthesize sessionFlows=_sessionFlows;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long quitTimestampMs; // @synthesize quitTimestampMs=_quitTimestampMs;
@property(nonatomic) unsigned long long enterTimestampMs; // @synthesize enterTimestampMs=_enterTimestampMs;
@property(retain, nonatomic) NSString *pName; // @synthesize pName=_pName;
@property(nonatomic) unsigned int pId; // @synthesize pId=_pId;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

