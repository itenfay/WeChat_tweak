//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCFinderStreamProfileHeaderViewMeasure : NSObject
{
    double _elementPadding;
    double _cornerMaskRadius;
    UIColor *_followBtnThemeColor;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _infoEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *followBtnThemeColor; // @synthesize followBtnThemeColor=_followBtnThemeColor;
@property(nonatomic) double cornerMaskRadius; // @synthesize cornerMaskRadius=_cornerMaskRadius;
@property(nonatomic) double elementPadding; // @synthesize elementPadding=_elementPadding;
@property(nonatomic) struct UIEdgeInsets infoEdgeInsets; // @synthesize infoEdgeInsets=_infoEdgeInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (id)init;

@end

