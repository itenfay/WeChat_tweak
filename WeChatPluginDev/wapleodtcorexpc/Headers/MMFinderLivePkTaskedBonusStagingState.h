//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLivePkTaskedBonusStagingState : NSObject
{
    _Bool _tasksTargetGiftFetchAttempted;
}

@property(nonatomic) _Bool tasksTargetGiftFetchAttempted; // @synthesize tasksTargetGiftFetchAttempted=_tasksTargetGiftFetchAttempted;
- (Class)projectedNextStateClassForModel:(id)arg1;
@property(readonly, nonatomic) _Bool enableGiftingForAudience;
@property(readonly, nonatomic) Class contentViewClass;
@property(readonly, nonatomic) Class backgroundViewClass;
@property(readonly, nonatomic) _Bool isVisual;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

