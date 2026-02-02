//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface WCMarqueeTextView : UIView
{
    NSString *_textContent;
    UIFont *_textFont;
    UIColor *_textColor;
    double _flowSpeed;
    double _flowDuration;
    double _gradientWidth;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double flowDuration; // @synthesize flowDuration=_flowDuration;
@property(nonatomic) double flowSpeed; // @synthesize flowSpeed=_flowSpeed;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
- (void)initView;
- (void)resizeView;
- (void)reset;
- (void)stopPlaying;
- (void)startPlaying;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

