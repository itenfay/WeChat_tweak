//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface StrokeView : UIView
{
    UIBezierPath *m_strokePath;
    UIColor *m_strokeColor;
    _Bool m_fill;
    int _blendMode;
}

- (void).cxx_destruct;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) _Bool fill; // @synthesize fill=m_fill;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=m_strokeColor;
@property(retain, nonatomic) UIBezierPath *strokePath; // @synthesize strokePath=m_strokePath;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

