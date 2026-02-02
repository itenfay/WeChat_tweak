//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface WAAuthPageSheetBluetoothView
{
    UIButton *_allowDuringUsageBtn;
    UIButton *_alwaysAllowBtn;
    UIButton *_rejectBtn;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rejectBtn; // @synthesize rejectBtn=_rejectBtn;
@property(retain, nonatomic) UIButton *alwaysAllowBtn; // @synthesize alwaysAllowBtn=_alwaysAllowBtn;
@property(retain, nonatomic) UIButton *allowDuringUsageBtn; // @synthesize allowDuringUsageBtn=_allowDuringUsageBtn;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

