//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface DashesLineView : UIView
{
    _Bool _vertical;
    UIColor *_lineColor;
    double _lineWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

