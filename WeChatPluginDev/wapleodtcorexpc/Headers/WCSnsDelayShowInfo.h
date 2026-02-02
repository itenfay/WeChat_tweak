//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSnsDelayShowInfo
{
    _Bool needDelayInViewLifeCycle;
    unsigned int _respTimeStamp;
    unsigned int _delayInterval;
    unsigned int _showTimeStamp;
    NSString *_layerId;
    NSString *_expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_showTimeStamp;
+ (void)PBArrayAdd_delayInterval;
+ (void)PBArrayAdd_respTimeStamp;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) unsigned int delayInterval; // @synthesize delayInterval=_delayInterval;
@property(nonatomic) unsigned int respTimeStamp; // @synthesize respTimeStamp=_respTimeStamp;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
@property(nonatomic) _Bool needDelayInViewLifeCycle; // @synthesize needDelayInViewLifeCycle;
- (_Bool)parseDelayShowInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

