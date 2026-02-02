//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIColor, UIFont;

@interface MJMessageBubbleView
{
    double _bubbleTailHeight;
    double _bubbleCornerRadius;
    UIColor *_bubbleBackgroundColor;
    MMUILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIColor *bubbleBackgroundColor; // @synthesize bubbleBackgroundColor=_bubbleBackgroundColor;
@property(nonatomic) double bubbleCornerRadius; // @synthesize bubbleCornerRadius=_bubbleCornerRadius;
@property(nonatomic) double bubbleTailHeight; // @synthesize bubbleTailHeight=_bubbleTailHeight;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
- (void)setbubbleCornerRadius:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

