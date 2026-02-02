//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface EditImageWidgetState : NSObject
{
    unsigned long long _widgetEditImageUIStyle;
    UIColor *_widgetBackgroundColor;
    UIColor *_widgetShadowColor;
    double _widgetOpacity;
    double _widgetViewRadius;
    struct CGPoint _widgetCenter;
    struct CGPoint _widgetAnchor;
    struct CGSize _widgetShadowOffset;
    struct CGRect _canvasFrame;
    struct CGRect _widgetFrame;
    struct CGAffineTransform _widgetTransform;
}

- (void).cxx_destruct;
@property(nonatomic) double widgetViewRadius; // @synthesize widgetViewRadius=_widgetViewRadius;
@property(nonatomic) double widgetOpacity; // @synthesize widgetOpacity=_widgetOpacity;
@property(nonatomic) struct CGSize widgetShadowOffset; // @synthesize widgetShadowOffset=_widgetShadowOffset;
@property(retain, nonatomic) UIColor *widgetShadowColor; // @synthesize widgetShadowColor=_widgetShadowColor;
@property(retain, nonatomic) UIColor *widgetBackgroundColor; // @synthesize widgetBackgroundColor=_widgetBackgroundColor;
@property(nonatomic) struct CGAffineTransform widgetTransform; // @synthesize widgetTransform=_widgetTransform;
@property(nonatomic) struct CGPoint widgetAnchor; // @synthesize widgetAnchor=_widgetAnchor;
@property(nonatomic) struct CGPoint widgetCenter; // @synthesize widgetCenter=_widgetCenter;
@property(nonatomic) struct CGRect widgetFrame; // @synthesize widgetFrame=_widgetFrame;
@property(nonatomic) unsigned long long widgetEditImageUIStyle; // @synthesize widgetEditImageUIStyle=_widgetEditImageUIStyle;
@property(nonatomic) struct CGRect canvasFrame; // @synthesize canvasFrame=_canvasFrame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

