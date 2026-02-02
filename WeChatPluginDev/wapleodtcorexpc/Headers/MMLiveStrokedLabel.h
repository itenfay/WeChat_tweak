//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface MMLiveStrokedLabel : UILabel
{
    UIColor *_strokeColor;
    double _strokeWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

