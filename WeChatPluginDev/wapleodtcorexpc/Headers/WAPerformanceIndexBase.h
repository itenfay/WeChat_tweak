//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPerformanceIndexBase
{
    unsigned int _recordedCount;
    NSString *_appid;
    unsigned long long _lastEnterForegroundIndexNum;
    long long _veryFirstForegroundIncreaseNum;
    long long _foregroundTotalIncreaseNum;
    long long _lifeCycleTotalIncreaseNum;
    unsigned long long _indexNumOnInit;
    unsigned long long _currentAvgIndexNum;
    unsigned long long _currentMaxIndexNum;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentMaxIndexNum; // @synthesize currentMaxIndexNum=_currentMaxIndexNum;
@property(nonatomic) unsigned long long currentAvgIndexNum; // @synthesize currentAvgIndexNum=_currentAvgIndexNum;
@property(nonatomic) unsigned long long indexNumOnInit; // @synthesize indexNumOnInit=_indexNumOnInit;
@property(nonatomic) long long lifeCycleTotalIncreaseNum; // @synthesize lifeCycleTotalIncreaseNum=_lifeCycleTotalIncreaseNum;
@property(nonatomic) long long foregroundTotalIncreaseNum; // @synthesize foregroundTotalIncreaseNum=_foregroundTotalIncreaseNum;
@property(nonatomic) long long veryFirstForegroundIncreaseNum; // @synthesize veryFirstForegroundIncreaseNum=_veryFirstForegroundIncreaseNum;
@property(nonatomic) unsigned long long lastEnterForegroundIndexNum; // @synthesize lastEnterForegroundIndexNum=_lastEnterForegroundIndexNum;
@property(nonatomic) unsigned int recordedCount; // @synthesize recordedCount=_recordedCount;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (unsigned int)getIndexType;
- (unsigned long long)getCurrentIndexNum;
- (unsigned long long)getMaxIndexNum;
- (unsigned long long)getAvgIndexNum;
- (void)recordIndex;
- (unsigned long long)getInitIndexNum;
- (id)init;

@end

