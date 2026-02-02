//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCAdvertiseStorage
{
    unsigned int _uiAdCreateTime;
    unsigned int _uiAdDisplayTime;
    NSString *_nsAdvertiseID;
    NSString *_nsUsername;
    NSData *_oAdvertiseData;
}

+ (void)initialize;
+ (void)PBArrayAdd_oAdvertiseData;
+ (void)PBArrayAdd_uiAdDisplayTime;
+ (void)PBArrayAdd_uiAdCreateTime;
+ (void)PBArrayAdd_nsUsername;
+ (void)PBArrayAdd_nsAdvertiseID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *oAdvertiseData; // @synthesize oAdvertiseData=_oAdvertiseData;
@property(nonatomic) unsigned int uiAdDisplayTime; // @synthesize uiAdDisplayTime=_uiAdDisplayTime;
@property(nonatomic) unsigned int uiAdCreateTime; // @synthesize uiAdCreateTime=_uiAdCreateTime;
@property(retain, nonatomic) NSString *nsUsername; // @synthesize nsUsername=_nsUsername;
@property(retain, nonatomic) NSString *nsAdvertiseID; // @synthesize nsAdvertiseID=_nsAdvertiseID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareAdTime:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

