//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface MMAssetPickerSliderThumbView
{
    _Bool _isActive;
    UIImageView *_arrow;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

