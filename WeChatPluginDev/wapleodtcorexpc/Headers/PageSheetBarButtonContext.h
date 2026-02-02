//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

@interface PageSheetBarButtonContext : NSObject
{
    NSObject *_oTarget;
    SEL _oSelector;
    unsigned long long _eStyle;
    double _fMaxWidth;
    UIColor *_oColor;
    UIFont *_oFont;
    NSString *_oTitle;
    NSString *_nsImgName;
    NSString *_oAccessibilityStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *oAccessibilityStr; // @synthesize oAccessibilityStr=_oAccessibilityStr;
@property(retain, nonatomic) NSString *nsImgName; // @synthesize nsImgName=_nsImgName;
@property(retain, nonatomic) NSString *oTitle; // @synthesize oTitle=_oTitle;
@property(retain, nonatomic) UIFont *oFont; // @synthesize oFont=_oFont;
@property(retain, nonatomic) UIColor *oColor; // @synthesize oColor=_oColor;
@property(nonatomic) double fMaxWidth; // @synthesize fMaxWidth=_fMaxWidth;
@property(nonatomic) unsigned long long eStyle; // @synthesize eStyle=_eStyle;
@property(nonatomic) SEL oSelector; // @synthesize oSelector=_oSelector;
@property(retain, nonatomic) NSObject *oTarget; // @synthesize oTarget=_oTarget;
- (id)genButtonItem;
@property(readonly, copy, nonatomic) CDUnknownBlockType accessibilityStr;
@property(readonly, copy, nonatomic) CDUnknownBlockType imgName;
@property(readonly, copy, nonatomic) CDUnknownBlockType title;
@property(readonly, copy, nonatomic) CDUnknownBlockType font;
@property(readonly, copy, nonatomic) CDUnknownBlockType color;
@property(readonly, copy, nonatomic) CDUnknownBlockType maxWidth;
@property(readonly, copy, nonatomic) CDUnknownBlockType style;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

