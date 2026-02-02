//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface EditImageStrokeLabel : UILabel
{
    UIColor *_strokeColor;
    double _strokeWidth;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

