//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class NSString;

@interface AppleStyleLoginRegisterButton : UIButton
{
    _Bool _useFlexibleWidth;
    long long _style;
    long long _alignment;
    NSString *_svgIconName;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) NSString *svgIconName; // @synthesize svgIconName=_svgIconName;
@property(nonatomic) _Bool useFlexibleWidth; // @synthesize useFlexibleWidth=_useFlexibleWidth;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long style; // @synthesize style=_style;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (double)styleBorderWidth;
- (id)styleBorderColor;
- (id)styleBackgroundColor;
- (id)styleContentColor;
- (void)updateFlexibleWidth;
- (void)updateImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

