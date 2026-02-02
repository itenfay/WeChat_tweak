//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAStarAppItemOperation
{
    unsigned int _operAppType;
    unsigned int _preAppType;
    unsigned int _nextAppType;
    unsigned int _operationType;
    unsigned int _operationScene;
    NSString *_operUsername;
    NSString *_preUsername;
    NSString *_nextUsername;
}

+ (void)initialize;
+ (void)PBArrayAdd_operationScene;
+ (void)PBArrayAdd_operationType;
+ (void)PBArrayAdd_nextAppType;
+ (void)PBArrayAdd_nextUsername;
+ (void)PBArrayAdd_preAppType;
+ (void)PBArrayAdd_preUsername;
+ (void)PBArrayAdd_operAppType;
+ (void)PBArrayAdd_operUsername;
- (void).cxx_destruct;
@property(nonatomic) unsigned int operationScene; // @synthesize operationScene=_operationScene;
@property(nonatomic) unsigned int operationType; // @synthesize operationType=_operationType;
@property(nonatomic) unsigned int nextAppType; // @synthesize nextAppType=_nextAppType;
@property(copy, nonatomic) NSString *nextUsername; // @synthesize nextUsername=_nextUsername;
@property(nonatomic) unsigned int preAppType; // @synthesize preAppType=_preAppType;
@property(copy, nonatomic) NSString *preUsername; // @synthesize preUsername=_preUsername;
@property(nonatomic) unsigned int operAppType; // @synthesize operAppType=_operAppType;
@property(copy, nonatomic) NSString *operUsername; // @synthesize operUsername=_operUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

