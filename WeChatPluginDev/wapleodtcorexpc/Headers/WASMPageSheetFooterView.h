//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;

@interface WASMPageSheetFooterView
{
    UIButton *_declineButton;
    UIButton *_keepOptionButton;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *keepOptionButton; // @synthesize keepOptionButton=_keepOptionButton;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
- (void)setSMUI;
- (void)setViewDataModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

