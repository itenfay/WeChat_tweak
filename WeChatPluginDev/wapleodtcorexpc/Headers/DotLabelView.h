//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIFont, UILabel;

@interface DotLabelView : UIView
{
    UIView *_dotView;
    UILabel *_label;
    double _dotCornerRadius;
    UIFont *_font;
    long long _numberOfLines;
    struct CGSize _dotSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double dotCornerRadius; // @synthesize dotCornerRadius=_dotCornerRadius;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
- (void)updateWithText:(id)arg1 color:(id)arg2;

@end

