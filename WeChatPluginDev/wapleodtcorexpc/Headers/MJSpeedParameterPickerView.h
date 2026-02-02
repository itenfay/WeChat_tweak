//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface MJSpeedParameterPickerView
{
    double _indicatorHeight;
    UIView *_indicatorView;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
- (void)willMoveToSuperview:(id)arg1;
- (void)setValue:(long long)arg1 withSpec:(CDStruct_2ec95fd7)arg2 animated:(_Bool)arg3;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

