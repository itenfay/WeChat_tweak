//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateComposingButton, UIButton;

@interface MJPublisherPickerComposingButtonManager : NSObject
{
    _Bool _isUsingNewYearStyle;
    MJTemplateComposingButton *_springFestivalButtonForPreviewing;
    MJTemplateComposingButton *_springFestivalButtonForNonPreviewing;
    UIButton *_normalButtonForPreviewing;
    UIButton *_normalButtonForNonPreviewing;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUsingNewYearStyle; // @synthesize isUsingNewYearStyle=_isUsingNewYearStyle;
@property(retain, nonatomic) UIButton *normalButtonForNonPreviewing; // @synthesize normalButtonForNonPreviewing=_normalButtonForNonPreviewing;
@property(retain, nonatomic) UIButton *normalButtonForPreviewing; // @synthesize normalButtonForPreviewing=_normalButtonForPreviewing;
@property(retain, nonatomic) MJTemplateComposingButton *springFestivalButtonForNonPreviewing; // @synthesize springFestivalButtonForNonPreviewing=_springFestivalButtonForNonPreviewing;
@property(retain, nonatomic) MJTemplateComposingButton *springFestivalButtonForPreviewing; // @synthesize springFestivalButtonForPreviewing=_springFestivalButtonForPreviewing;
- (id)composingButtonForAssetPreviewing:(_Bool)arg1;
- (void)composingButtonEnabledStateDidChange:(_Bool)arg1;
- (void)calcIsUsingNewYearStyle;
- (void)updateIsUsingNewYearStyle;
- (id)makeSpringFestivalStyleButton;
- (id)makeNormalStyleButton;
- (void)setupButtons;
- (id)init;

@end

