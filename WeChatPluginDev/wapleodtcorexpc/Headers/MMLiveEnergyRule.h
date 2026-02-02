//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveEnergyRuleAdjustments, MMLiveEnergyRuleConditions, NSString;

@interface MMLiveEnergyRule : NSObject
{
    _Bool _forcesHit;
    NSString *_ruleID;
    MMLiveEnergyRuleConditions *_conditions;
    MMLiveEnergyRuleAdjustments *_adjustments;
}

+ (_Bool)_array:(id)arg1 containsLongValue:(long long)arg2;
+ (id)_dictionary:(id)arg1 numberArrayForKey:(id)arg2;
+ (id)_dictionary:(id)arg1 floatNumberForKey:(id)arg2;
+ (id)_dictionary:(id)arg1 longLongNumberForKey:(id)arg2;
+ (id)ruleFromDictionaryInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMLiveEnergyRuleAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property(nonatomic) _Bool forcesHit; // @synthesize forcesHit=_forcesHit;
@property(readonly, nonatomic) MMLiveEnergyRuleConditions *conditions; // @synthesize conditions=_conditions;
@property(copy, nonatomic) NSString *ruleID; // @synthesize ruleID=_ruleID;
- (_Bool)shouldAdjustVideoEncode;
- (_Bool)shouldAdjustCameraCapture;
- (_Bool)hitTestMetricsInfo:(id)arg1;
- (id)generateDictionaryInfo;
@property(readonly, nonatomic) _Bool isValid;
- (id)init;

@end

