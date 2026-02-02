//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface EditImageTextInputViewParams : NSObject
{
    _Bool _canChangeLine;
    _Bool _useEmotionColor;
    _Bool _shouldShowSecondCutPromotionEntry;
    NSString *_defaultText;
    UIColor *_defaultColor;
    unsigned long long _style;
    UIColor *_confirmBtnColor;
    long long _textViewAlignment;
    NSArray *_styleOrders;
    double _fontSize;
    unsigned long long _maxNumberOfFullWidthCharactersPerLayoutLine;
    unsigned long long _entranceType;
    struct CGRect _editViewFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowSecondCutPromotionEntry; // @synthesize shouldShowSecondCutPromotionEntry=_shouldShowSecondCutPromotionEntry;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) unsigned long long maxNumberOfFullWidthCharactersPerLayoutLine; // @synthesize maxNumberOfFullWidthCharactersPerLayoutLine=_maxNumberOfFullWidthCharactersPerLayoutLine;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) _Bool useEmotionColor; // @synthesize useEmotionColor=_useEmotionColor;
@property(nonatomic) _Bool canChangeLine; // @synthesize canChangeLine=_canChangeLine;
@property(retain, nonatomic) NSArray *styleOrders; // @synthesize styleOrders=_styleOrders;
@property(nonatomic) long long textViewAlignment; // @synthesize textViewAlignment=_textViewAlignment;
@property(retain, nonatomic) UIColor *confirmBtnColor; // @synthesize confirmBtnColor=_confirmBtnColor;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) struct CGRect editViewFrame; // @synthesize editViewFrame=_editViewFrame;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
- (id)init;

@end

