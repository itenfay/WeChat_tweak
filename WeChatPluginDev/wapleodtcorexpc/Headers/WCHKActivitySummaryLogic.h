//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HKHealthStore, NSString;
@protocol WCHKActivitySummaryLogicDelegate;

@interface WCHKActivitySummaryLogic : NSObject
{
    _Bool _bHadObserverActivitySummary;
    id <WCHKActivitySummaryLogicDelegate> _delegate;
    HKHealthStore *_healthStore;
    NSString *_lastQueryResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastQueryResult; // @synthesize lastQueryResult=_lastQueryResult;
@property(nonatomic) _Bool bHadObserverActivitySummary; // @synthesize bHadObserverActivitySummary=_bHadObserverActivitySummary;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak id <WCHKActivitySummaryLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onQueryCompeletedWithSummary:(id)arg1;
- (void)queryActivitySummary;
- (void)tryDoObserverActivitySummary;
- (void)updateHealthStoreData;
- (_Bool)p_canTryUploadActivitySummary;
- (id)init;

@end

