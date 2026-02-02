//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveDecorationDataItem, MMLiveVisionEffectDataItem;

@interface MMLiveEffectsUsingContext : NSObject
{
    MMLiveDecorationDataItem *_currentDecor;
    unsigned long long _currentDecorUseTs;
    MMLiveVisionEffectDataItem *_currentVisionEffect;
    unsigned long long _currentVisionEffectUseTs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentVisionEffectUseTs; // @synthesize currentVisionEffectUseTs=_currentVisionEffectUseTs;
@property(retain, nonatomic) MMLiveVisionEffectDataItem *currentVisionEffect; // @synthesize currentVisionEffect=_currentVisionEffect;
@property(nonatomic) unsigned long long currentDecorUseTs; // @synthesize currentDecorUseTs=_currentDecorUseTs;
@property(retain, nonatomic) MMLiveDecorationDataItem *currentDecor; // @synthesize currentDecor=_currentDecor;

@end

