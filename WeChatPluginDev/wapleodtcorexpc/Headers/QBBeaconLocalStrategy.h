//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface QBBeaconLocalStrategy
{
    int zipAlg;
    int encAlg;
    NSString *encKey;
    NSString *encPubKey;
    int dbMaxSize;
    int queryInterval;
    NSString *url;
    NSDictionary *cloudParas;
    NSDictionary *moduleStrategys;
}

@property(nonatomic) int dbMaxSize; // @synthesize dbMaxSize;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) int queryInterval; // @synthesize queryInterval;
@property(retain, nonatomic) NSDictionary *cloudParas; // @synthesize cloudParas;
@property(retain, nonatomic) NSDictionary *moduleStrategys; // @synthesize moduleStrategys;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(nonatomic) int encAlg; // @synthesize encAlg;
@property(nonatomic) int zipAlg; // @synthesize zipAlg;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getStrategyForKey:(int)arg1;
- (_Bool)addModuleStrategy:(id)arg1;
- (void)initLocalObjWithWupBuffer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

