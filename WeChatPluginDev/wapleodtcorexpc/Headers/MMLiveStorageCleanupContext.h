//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_group;

@interface MMLiveStorageCleanupContext : NSObject
{
    unsigned long long _contributionStage;
    NSMutableArray *_deviationDirectives;
    NSObject<OS_dispatch_group> *_externalCleanupTasksGroup;
    unsigned long long _externalCleanupContribution;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long externalCleanupContribution; // @synthesize externalCleanupContribution=_externalCleanupContribution;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *externalCleanupTasksGroup; // @synthesize externalCleanupTasksGroup=_externalCleanupTasksGroup;
@property(retain, nonatomic) NSMutableArray *deviationDirectives; // @synthesize deviationDirectives=_deviationDirectives;
@property(nonatomic) unsigned long long contributionStage; // @synthesize contributionStage=_contributionStage;
- (void)addDeviationDirectiveWithType:(unsigned long long)arg1 forPath:(id)arg2;
- (void)addCleanupContributingTask:(CDUnknownBlockType)arg1;
- (void)addPathToBeCleanedUp:(id)arg1;
- (void)addPathToBePreserved:(id)arg1;

@end

