//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WCDrawLineView : UIView
{
    _Bool _isBottomLine;
    long long _lineStyle;
    double _lineWidth;
    UIColor *_lineColor;
    double _paddingStart;
    double _paddingEnd;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBottomLine; // @synthesize isBottomLine=_isBottomLine;
@property(nonatomic) double paddingEnd; // @synthesize paddingEnd=_paddingEnd;
@property(nonatomic) double paddingStart; // @synthesize paddingStart=_paddingStart;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) long long lineStyle; // @synthesize lineStyle=_lineStyle;
- (void)drawRect:(struct CGRect)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

