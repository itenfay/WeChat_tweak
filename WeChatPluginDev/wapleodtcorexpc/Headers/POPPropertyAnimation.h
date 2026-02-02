//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class POPAnimatableProperty;

@interface POPPropertyAnimation
{
}

- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (id)currentValue;
@property(copy, nonatomic) id toValue;
@property(copy, nonatomic) id fromValue;
- (void)setProgressMarkers:(id)arg1;
- (id)progressMarkers;
@property(retain, nonatomic) POPAnimatableProperty *property;
@property(nonatomic) unsigned long long clampMode;
@property(nonatomic) double roundingFactor;
@property(nonatomic, getter=isAdditive) _Bool additive;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

