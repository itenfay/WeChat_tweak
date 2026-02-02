//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyItem, MMWeEffectManager, NSString;

@interface MMLiveBeautyDriver : NSObject
{
    MMWeEffectManager *_effectManagerStorage;
    MMLiveBeautyItem *_beautyItem;
}

+ (Class)driverClassForName:(id)arg1;
+ (_Bool)isDriverSupported:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveBeautyItem *beautyItem; // @synthesize beautyItem=_beautyItem;
@property(nonatomic) __weak MMWeEffectManager *effectManagerStorage; // @synthesize effectManagerStorage=_effectManagerStorage;
- (void)teardown;
- (void)apply;
@property(readonly, nonatomic) double normalizedValue;
@property(nonatomic) __weak MMWeEffectManager *effectManager;
- (id)initWithEffectManager:(id)arg1 beautyItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

