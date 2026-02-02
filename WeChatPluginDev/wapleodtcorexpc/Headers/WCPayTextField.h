//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class UIView;

@interface WCPayTextField : UITextField
{
    _Bool _clearBackground;
    unsigned int _showBit;
    double _tipsOffsetY;
    double _tipsOffsetX;
    UIView *_largeAmountTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *largeAmountTips; // @synthesize largeAmountTips=_largeAmountTips;
@property _Bool clearBackground; // @synthesize clearBackground=_clearBackground;
@property(nonatomic) double tipsOffsetX; // @synthesize tipsOffsetX=_tipsOffsetX;
@property(nonatomic) double tipsOffsetY; // @synthesize tipsOffsetY=_tipsOffsetY;
@property(nonatomic) unsigned int showBit; // @synthesize showBit=_showBit;
- (unsigned long long)getAmount;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)showBitView;
- (void)textFieldDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

