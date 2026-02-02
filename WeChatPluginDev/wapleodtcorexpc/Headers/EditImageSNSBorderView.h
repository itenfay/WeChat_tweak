//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface EditImageSNSBorderView : UIView
{
    double _lineWidth;
    UIView *_topBorderLine;
    UIView *_bottomBorderLine;
    UIView *_leftBorderLine;
    UIView *_rightBorderLine;
    UIView *_topShadowLine;
    UIView *_bottomShadowLine;
    UIView *_leftShadowLine;
    UIView *_rightShadowLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightShadowLine; // @synthesize rightShadowLine=_rightShadowLine;
@property(retain, nonatomic) UIView *leftShadowLine; // @synthesize leftShadowLine=_leftShadowLine;
@property(retain, nonatomic) UIView *bottomShadowLine; // @synthesize bottomShadowLine=_bottomShadowLine;
@property(retain, nonatomic) UIView *topShadowLine; // @synthesize topShadowLine=_topShadowLine;
@property(retain, nonatomic) UIView *rightBorderLine; // @synthesize rightBorderLine=_rightBorderLine;
@property(retain, nonatomic) UIView *leftBorderLine; // @synthesize leftBorderLine=_leftBorderLine;
@property(retain, nonatomic) UIView *bottomBorderLine; // @synthesize bottomBorderLine=_bottomBorderLine;
@property(retain, nonatomic) UIView *topBorderLine; // @synthesize topBorderLine=_topBorderLine;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)createBorderLine;
- (id)createShadowLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

