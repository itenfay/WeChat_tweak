//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface MatrixStrategyIDCache : NSObject
{
    NSMutableDictionary *_strategyMap;
    NSRecursiveLock *_idArrayLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *idArrayLock; // @synthesize idArrayLock=_idArrayLock;
@property(retain, nonatomic) NSMutableDictionary *strategyMap; // @synthesize strategyMap=_strategyMap;
- (id)getReportIDForStrategy:(id)arg1;
- (void)addReportID:(id)arg1 forStrategy:(id)arg2;
- (id)getStrategyObjectByName:(id)arg1;
- (void)didEnterBackground;
- (void)dealloc;
- (id)init;

@end

