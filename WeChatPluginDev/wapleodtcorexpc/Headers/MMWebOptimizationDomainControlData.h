//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebOptimizationDomainControlData
{
    unsigned int _controlExpiredTime;
    unsigned int _controlBits;
    NSString *_domain;
}

+ (void)initialize;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_controlBits;
+ (void)PBArrayAdd_controlExpiredTime;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int controlBits; // @synthesize controlBits=_controlBits;
@property(nonatomic) unsigned int controlExpiredTime; // @synthesize controlExpiredTime=_controlExpiredTime;
- (_Bool)isInA8keyLiteReqBlockingControl;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

