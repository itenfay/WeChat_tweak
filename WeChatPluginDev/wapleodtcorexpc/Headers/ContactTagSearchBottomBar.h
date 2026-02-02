//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;

@interface ContactTagSearchBottomBar
{
    MMUIButton *_multiSelectButton;
    MMUIButton *_cancelMultiSelectButton;
    MMUIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelMultiSelectButton; // @synthesize cancelMultiSelectButton=_cancelMultiSelectButton;
@property(retain, nonatomic) MMUIButton *multiSelectButton; // @synthesize multiSelectButton=_multiSelectButton;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

