//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGiftCustomizationStyleItemResource, NSString, UIColor;

@interface MMFinderLiveGiftCustomizationStyleItem : NSObject
{
    _Bool _textCustomizable;
    unsigned int _basePrice;
    unsigned int _priceWithCustomText;
    NSString *_identifier;
    UIColor *_color;
    unsigned long long _customTextLength;
    NSString *_textCustomizationEntryLabel;
    NSString *_clearTextCustomizationLabel;
    NSString *_textCustomizationEditLabel;
    MMFinderLiveGiftCustomizationStyleItemResource *_portraitAnimation;
    MMFinderLiveGiftCustomizationStyleItemResource *_landscapeAnimation;
    MMFinderLiveGiftCustomizationStyleItemResource *_previewAnimation;
    MMFinderLiveGiftCustomizationStyleItemResource *_thumbnail;
    MMFinderLiveGiftCustomizationStyleItemResource *_portraitAnimationWithCustomText;
    MMFinderLiveGiftCustomizationStyleItemResource *_landscapeAnimationWithCustomText;
    MMFinderLiveGiftCustomizationStyleItemResource *_previewAnimationWithCustomText;
    MMFinderLiveGiftCustomizationStyleItemResource *_thumbnailWithCustomText;
    MMFinderLiveGiftCustomizationStyleItemResource *_textCustomizationPreview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *textCustomizationPreview; // @synthesize textCustomizationPreview=_textCustomizationPreview;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *thumbnailWithCustomText; // @synthesize thumbnailWithCustomText=_thumbnailWithCustomText;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *previewAnimationWithCustomText; // @synthesize previewAnimationWithCustomText=_previewAnimationWithCustomText;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *landscapeAnimationWithCustomText; // @synthesize landscapeAnimationWithCustomText=_landscapeAnimationWithCustomText;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *portraitAnimationWithCustomText; // @synthesize portraitAnimationWithCustomText=_portraitAnimationWithCustomText;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *previewAnimation; // @synthesize previewAnimation=_previewAnimation;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *landscapeAnimation; // @synthesize landscapeAnimation=_landscapeAnimation;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *portraitAnimation; // @synthesize portraitAnimation=_portraitAnimation;
@property(retain, nonatomic) NSString *textCustomizationEditLabel; // @synthesize textCustomizationEditLabel=_textCustomizationEditLabel;
@property(retain, nonatomic) NSString *clearTextCustomizationLabel; // @synthesize clearTextCustomizationLabel=_clearTextCustomizationLabel;
@property(retain, nonatomic) NSString *textCustomizationEntryLabel; // @synthesize textCustomizationEntryLabel=_textCustomizationEntryLabel;
@property(nonatomic) unsigned int priceWithCustomText; // @synthesize priceWithCustomText=_priceWithCustomText;
@property(nonatomic) unsigned long long customTextLength; // @synthesize customTextLength=_customTextLength;
@property(nonatomic) _Bool textCustomizable; // @synthesize textCustomizable=_textCustomizable;
@property(nonatomic) unsigned int basePrice; // @synthesize basePrice=_basePrice;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end

