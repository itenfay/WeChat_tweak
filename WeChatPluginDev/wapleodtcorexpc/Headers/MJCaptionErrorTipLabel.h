//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MJCaptionErrorTipLabel : UIView
{
    UILabel *_label;
    UIImageView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *text;
- (void)layoutWithMaxWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

