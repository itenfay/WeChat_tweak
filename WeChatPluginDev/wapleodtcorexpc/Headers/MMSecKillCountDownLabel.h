//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMCountDownLabel, UILabel;

@interface MMSecKillCountDownLabel : UIView
{
    UIView *_line;
    UILabel *_suffixLabel;
    MMCountDownLabel *_countDownLabel;
}

+ (double)widthWithSuffix:(id)arg1 font:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMCountDownLabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(readonly, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(readonly, nonatomic) UIView *line; // @synthesize line=_line;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

