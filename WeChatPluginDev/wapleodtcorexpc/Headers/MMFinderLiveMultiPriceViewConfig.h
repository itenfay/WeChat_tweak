//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIFont;

@interface MMFinderLiveMultiPriceViewConfig : NSObject
{
    unsigned long long _colorStyle;
    UIFont *_normalCurrentPriceFont;
    UIFont *_minCurrentPriceFont;
    UIFont *_currentPriceDescriptionFont;
    UIFont *_currentPriceSuffixFont;
    UIFont *_listPriceFont;
    UIFont *_priceSuffixDescriptionFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *priceSuffixDescriptionFont; // @synthesize priceSuffixDescriptionFont=_priceSuffixDescriptionFont;
@property(retain, nonatomic) UIFont *listPriceFont; // @synthesize listPriceFont=_listPriceFont;
@property(retain, nonatomic) UIFont *currentPriceSuffixFont; // @synthesize currentPriceSuffixFont=_currentPriceSuffixFont;
@property(retain, nonatomic) UIFont *currentPriceDescriptionFont; // @synthesize currentPriceDescriptionFont=_currentPriceDescriptionFont;
@property(retain, nonatomic) UIFont *minCurrentPriceFont; // @synthesize minCurrentPriceFont=_minCurrentPriceFont;
@property(retain, nonatomic) UIFont *normalCurrentPriceFont; // @synthesize normalCurrentPriceFont=_normalCurrentPriceFont;
@property(nonatomic) unsigned long long colorStyle; // @synthesize colorStyle=_colorStyle;

@end

