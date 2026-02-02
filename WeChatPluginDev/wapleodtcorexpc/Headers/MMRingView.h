//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface MMRingView : UIView
{
    UIColor *_color;
    double _from;
    double _to;
    double _lineWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double to; // @synthesize to=_to;
@property(nonatomic) double from; // @synthesize from=_from;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)setHidden:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

