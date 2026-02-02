//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, ZZMultiButtonChainModel;

@interface MMMultiButton
{
    long long _multiButtonState;
    UIView *_normalView;
    UIView *_touchDownView;
}

+ (CDUnknownBlockType)zz_create;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *touchDownView; // @synthesize touchDownView=_touchDownView;
@property(retain, nonatomic) UIView *normalView; // @synthesize normalView=_normalView;
@property(nonatomic) long long multiButtonState; // @synthesize multiButtonState=_multiButtonState;
- (void)setNormalView:(id)arg1 constraints:(CDUnknownBlockType)arg2;
- (void)setTouchDownView:(id)arg1 constraints:(CDUnknownBlockType)arg2;
- (void)removeControlEvents:(unsigned long long)arg1;
- (void)initEvents;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) ZZMultiButtonChainModel *zz_setup;

@end

