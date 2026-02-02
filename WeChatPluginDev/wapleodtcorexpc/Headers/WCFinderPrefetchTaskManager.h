//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCFinderPrefetchTaskManager : NSObject
{
    unsigned long long _maxRequestNum;
    NSMutableArray *_requestingTaskArray;
    NSMutableArray *_waitingTaskArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingTaskArray; // @synthesize waitingTaskArray=_waitingTaskArray;
@property(retain, nonatomic) NSMutableArray *requestingTaskArray; // @synthesize requestingTaskArray=_requestingTaskArray;
@property(nonatomic) unsigned long long maxRequestNum; // @synthesize maxRequestNum=_maxRequestNum;
- (void)requestIfCan;
- (void)safeAddPrefetchTask:(id)arg1;

@end

