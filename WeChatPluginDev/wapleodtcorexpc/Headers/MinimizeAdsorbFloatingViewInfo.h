//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MinimizeAdsorbFloatingViewInfo
{
    double _positionX;
    double _positionY;
    NSString *_aggreSessionId;
    unsigned long long _aggreSessionIdCreateTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_aggreSessionIdCreateTime;
+ (void)PBArrayAdd_aggreSessionId;
+ (void)PBArrayAdd_positionY;
+ (void)PBArrayAdd_positionX;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long aggreSessionIdCreateTime; // @synthesize aggreSessionIdCreateTime=_aggreSessionIdCreateTime;
@property(retain, nonatomic) NSString *aggreSessionId; // @synthesize aggreSessionId=_aggreSessionId;
@property(nonatomic) double positionY; // @synthesize positionY=_positionY;
@property(nonatomic) double positionX; // @synthesize positionX=_positionX;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

