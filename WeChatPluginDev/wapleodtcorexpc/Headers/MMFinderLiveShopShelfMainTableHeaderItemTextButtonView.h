//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class UIButton;

@interface MMFinderLiveShopShelfMainTableHeaderItemTextButtonView : NSObject
{
    CDUnknownBlockType _onButtonClicked;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType onButtonClicked; // @synthesize onButtonClicked=_onButtonClicked;
- (void)doOnButtonClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
