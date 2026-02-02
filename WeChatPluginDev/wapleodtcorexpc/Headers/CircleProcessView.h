//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImageView;

@interface CircleProcessView
{
    double width;
    double height;
    UIImageView *_bgImage;
    double _value;
    UIColor *_progressTintColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
- (void)setProgress:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

