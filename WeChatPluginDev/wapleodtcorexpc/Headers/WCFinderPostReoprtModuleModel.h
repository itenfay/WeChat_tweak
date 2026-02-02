//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostReoprtModuleModel : NSObject
{
    int _endReasonType;
    NSString *_pageName;
    NSString *_moduleName;
    NSString *_identification;
    long long _startTimeStamp;
    long long _endTimeStamp;
    long long _duration;
}

+ (id)getKeyNameByPageName:(id)arg1 moduleName:(id)arg2;
+ (id)getKeyNameByPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_endReasonType;
+ (void)PBArrayAdd_identification;
+ (void)PBArrayAdd_endTimeStamp;
+ (void)PBArrayAdd_startTimeStamp;
+ (void)PBArrayAdd_moduleName;
+ (void)PBArrayAdd_pageName;
- (void).cxx_destruct;
@property(nonatomic) int endReasonType; // @synthesize endReasonType=_endReasonType;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(nonatomic) long long startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(copy, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)currentModelKey;
- (id)currentKey;
- (id)initWithModuleName:(id)arg1 identification:(id)arg2;
- (id)initWithPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

