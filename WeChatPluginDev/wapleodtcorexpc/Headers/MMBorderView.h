//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface MMBorderView : UIView
{
    double _borderWidth;
    UIColor *_borderColor;
    NSArray *_borderPattern;
    unsigned long long _borders;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long borders; // @synthesize borders=_borders;
@property(retain, nonatomic) NSArray *borderPattern; // @synthesize borderPattern=_borderPattern;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDefaultValues;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

