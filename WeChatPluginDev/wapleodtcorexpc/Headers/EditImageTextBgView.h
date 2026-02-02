//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface EditImageTextBgView : UIView
{
    NSMutableArray *_backgroundRects;
    UIColor *_textBgColor;
    double _scale;
    double _cornerRadius;
}

+ (double)maxWOfRects:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *textBgColor; // @synthesize textBgColor=_textBgColor;
@property(retain, nonatomic) NSMutableArray *backgroundRects; // @synthesize backgroundRects=_backgroundRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

