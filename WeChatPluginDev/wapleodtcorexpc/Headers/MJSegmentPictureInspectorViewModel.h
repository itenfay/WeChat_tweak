//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface MJSegmentPictureInspectorViewModel
{
    float _brightnessOriginalValue;
    float _contrastOriginalValue;
    float _saturationOriginalValue;
    float _temperatureOriginalValue;
    float _sharpnessOriginalValue;
    float _vignetteOriginalValue;
    NSArray *_valueItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *valueItems; // @synthesize valueItems=_valueItems;
- (void)notifyDidApplyToAll:(id)arg1;
- (void)setValuesToOriginal;
- (void)notifyDidReset;
- (void)notifyDidCancel;
- (_Bool)hasChanges;
- (id)adjustableProtocols;
- (id)title;
- (_Bool)isResetEnabled;
- (_Bool)isApplyAllEnabled;
- (_Bool)isCancelEnabled;
- (void)handleAdjustActionWithItem:(id)arg1;
- (void)setupMenuItems;
- (void)setupOriginalValues;
- (id)initWithSegment:(id)arg1 type:(unsigned long long)arg2;

@end

