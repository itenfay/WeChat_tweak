//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface WAAuthPageSheetFooterView
{
    UIButton *_acceptButton;
    UIButton *_rejectButton;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setViewDataModel:(id)arg1;

@end

