//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceFollowItem
{
    unsigned int _uiStep;
    unsigned int _uiIndex;
    NSString *_nsUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiIndex;
+ (void)PBArrayAdd_uiStep;
+ (void)PBArrayAdd_nsUserName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiIndex; // @synthesize uiIndex=_uiIndex;
@property(nonatomic) unsigned int uiStep; // @synthesize uiStep=_uiStep;
@property(copy, nonatomic) NSString *nsUserName; // @synthesize nsUserName=_nsUserName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

