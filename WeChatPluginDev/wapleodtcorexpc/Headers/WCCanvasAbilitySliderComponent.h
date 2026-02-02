//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, NSString, WCCanvasAbilitySlider;

@interface WCCanvasAbilitySliderComponent
{
    WCCanvasAbilitySlider *_abilitySlider;
    MMCPLabel *_abilityLabel;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMCPLabel *abilityLabel; // @synthesize abilityLabel=_abilityLabel;
@property(retain, nonatomic) WCCanvasAbilitySlider *abilitySlider; // @synthesize abilitySlider=_abilitySlider;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

