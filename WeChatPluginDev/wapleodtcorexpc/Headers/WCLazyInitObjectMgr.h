//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray, NSRecursiveLock;

@interface WCLazyInitObjectMgr : NSObject
{
    _Bool _bDelayLoad;
    NSMutableArray *_lazyInitArray;
    MMTimer *_refreshTimer;
    double _currentTimeDis;
    NSRecursiveLock *_threadLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *threadLock; // @synthesize threadLock=_threadLock;
@property(nonatomic) _Bool bDelayLoad; // @synthesize bDelayLoad=_bDelayLoad;
@property(nonatomic) double currentTimeDis; // @synthesize currentTimeDis=_currentTimeDis;
@property(retain, nonatomic) MMTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSMutableArray *lazyInitArray; // @synthesize lazyInitArray=_lazyInitArray;
- (_Bool)isDelayLoad;
- (void)addLazyInitObject:(id)arg1;
- (void)triggerObjectToInit:(id)arg1;
- (void)destroyAllEvent;
- (void)timeToInit;
- (id)init;

@end

