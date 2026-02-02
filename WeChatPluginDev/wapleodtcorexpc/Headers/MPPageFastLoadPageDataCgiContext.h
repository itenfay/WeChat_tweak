//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPPageFastLoadPageDataCgiContext : NSObject
{
    _Bool _isResponseSuccess;
    unsigned int _enterType;
    unsigned int _responseContentUpdateCount;
    unsigned int _responseContentNoUpdateCount;
    unsigned int _responseContentSize;
    unsigned long long _sceneForFetch;
    NSArray *_urlInfoList;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int responseContentSize; // @synthesize responseContentSize=_responseContentSize;
@property(nonatomic) unsigned int responseContentNoUpdateCount; // @synthesize responseContentNoUpdateCount=_responseContentNoUpdateCount;
@property(nonatomic) unsigned int responseContentUpdateCount; // @synthesize responseContentUpdateCount=_responseContentUpdateCount;
@property(nonatomic) _Bool isResponseSuccess; // @synthesize isResponseSuccess=_isResponseSuccess;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *urlInfoList; // @synthesize urlInfoList=_urlInfoList;
@property(nonatomic) unsigned long long sceneForFetch; // @synthesize sceneForFetch=_sceneForFetch;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;

@end

