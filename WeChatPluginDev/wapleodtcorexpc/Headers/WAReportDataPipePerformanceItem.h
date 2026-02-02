//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportDataPipePerformanceItem
{
    _Bool _isConcurrent;
    _Bool _needConfirm;
    unsigned int _publibVersion;
    unsigned int _dataLengthInBytes;
    unsigned int _currentQueueNum;
    unsigned long long _enqueueTimeInMs;
    unsigned long long _dequeueTimeInMs;
    unsigned long long _queueWaitTimeInMs;
    unsigned long long _confirmTimeInMs;
    unsigned long long _confirmResponseTimeInMs;
    unsigned long long _dataResponseTimeInMs;
    unsigned long long _requestTotalTimeInMs;
}

@property(nonatomic) unsigned long long requestTotalTimeInMs; // @synthesize requestTotalTimeInMs=_requestTotalTimeInMs;
@property(nonatomic) unsigned long long dataResponseTimeInMs; // @synthesize dataResponseTimeInMs=_dataResponseTimeInMs;
@property(nonatomic) unsigned long long confirmResponseTimeInMs; // @synthesize confirmResponseTimeInMs=_confirmResponseTimeInMs;
@property(nonatomic) unsigned long long confirmTimeInMs; // @synthesize confirmTimeInMs=_confirmTimeInMs;
@property(nonatomic) _Bool needConfirm; // @synthesize needConfirm=_needConfirm;
@property(nonatomic) unsigned long long queueWaitTimeInMs; // @synthesize queueWaitTimeInMs=_queueWaitTimeInMs;
@property(nonatomic) unsigned long long dequeueTimeInMs; // @synthesize dequeueTimeInMs=_dequeueTimeInMs;
@property(nonatomic) unsigned long long enqueueTimeInMs; // @synthesize enqueueTimeInMs=_enqueueTimeInMs;
@property(nonatomic) unsigned int currentQueueNum; // @synthesize currentQueueNum=_currentQueueNum;
@property(nonatomic) unsigned int dataLengthInBytes; // @synthesize dataLengthInBytes=_dataLengthInBytes;
@property(nonatomic) _Bool isConcurrent; // @synthesize isConcurrent=_isConcurrent;
@property(nonatomic) unsigned int publibVersion; // @synthesize publibVersion=_publibVersion;
- (id)reportString;
- (int)reportID;

@end

