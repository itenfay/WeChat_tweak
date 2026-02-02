//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CornerView : UIView
{
    _Bool _leftTop;
    _Bool _rightTop;
    _Bool _rightBottom;
    _Bool _leftBottom;
    int _lineSize;
    double _borderWidth;
    double _cornerRadius;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(nonatomic) int lineSize; // @synthesize lineSize=_lineSize;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool leftBottom; // @synthesize leftBottom=_leftBottom;
@property(nonatomic) _Bool rightBottom; // @synthesize rightBottom=_rightBottom;
@property(nonatomic) _Bool rightTop; // @synthesize rightTop=_rightTop;
@property(nonatomic) _Bool leftTop; // @synthesize leftTop=_leftTop;
- (void)drawRect:(struct CGRect)arg1;

@end

