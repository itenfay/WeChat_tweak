//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceStepItem
{
    unsigned int _uiTimeStamp;
    unsigned int _uiStep;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiStep;
+ (void)PBArrayAdd_uiTimeStamp;
@property(nonatomic) unsigned int uiStep; // @synthesize uiStep=_uiStep;
@property(nonatomic) unsigned int uiTimeStamp; // @synthesize uiTimeStamp=_uiTimeStamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

