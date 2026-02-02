//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor;

@interface WAMapCalloutView : UIView
{
    unsigned long long collisionType;
    UIButton *_btn;
    UIButton *_btnBig;
    UIColor *_bgColor;
    double _radius;
    double _borderWidth;
    UIColor *_borderColor;
    double _margin;
    double _arrowLen;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowOffsetX;
    double _shadowOffsetY;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(nonatomic) double shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) double shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double arrowLen; // @synthesize arrowLen=_arrowLen;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIButton *btnBig; // @synthesize btnBig=_btnBig;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(nonatomic) unsigned long long collisionType; // @synthesize collisionType;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithParam:(id)arg1 view:(id)arg2;
- (id)initWithParam:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

