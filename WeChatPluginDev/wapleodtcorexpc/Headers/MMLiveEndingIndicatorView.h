//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMLiveEndingIndicatorView : UIView
{
    UIView *_leftLine;
    UIView *_dotView;
    UIView *_rightLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
- (void)setFilledColor:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

