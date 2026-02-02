//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMLiveBeautyMaterialBasedDriverBase
{
    long long _setupStatus;
    long long _materialObjectId;
}

@property(nonatomic) long long materialObjectId; // @synthesize materialObjectId=_materialObjectId;
@property(nonatomic) long long setupStatus; // @synthesize setupStatus=_setupStatus;
- (void)applyWithValue:(double)arg1 forObjectId:(long long)arg2 inEffectManager:(id)arg3;
- (void)teardown;
- (void)setupForNegativeValue:(double)arg1;
- (void)setupForPositiveValue:(double)arg1;
- (void)apply;

@end

