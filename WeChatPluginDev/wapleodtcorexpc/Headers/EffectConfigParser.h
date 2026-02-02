//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EffectConfigParser : NSObject
{
    struct EffectConfigParser _effectConfigParser;
    NSString *_configString;
    NSString *_identifier;
}

+ (_Bool)checkBpmIsVaild:(float)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *configString; // @synthesize configString=_configString;
- (id)configName;
- (id)sliderName:(unsigned long long)arg1;
- (id)irWavNames;
- (_Bool)supportBPM;
- (float)sliderDefaultValue:(unsigned long long)arg1;
- (unsigned long long)supportSliderCount;
- (_Bool)canCreateEffectChain;
- (_Bool)canCreateEffectGraph;
- (_Bool)loadConfigString:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)setEffectType:(unsigned long long)arg1;
- (id)init;

@end

