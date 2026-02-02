//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, WAPlateAuthPageSheetViewModel;

@interface WAPlateAuthPageSheetManagerView
{
    UIButton *_button;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) WAPlateAuthPageSheetViewModel *viewDataModel; // @dynamic viewDataModel;

@end

