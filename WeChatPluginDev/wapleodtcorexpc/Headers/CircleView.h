//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CircleView : UIView
{
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)getDrawPath:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithColor:(id)arg1;

@end

