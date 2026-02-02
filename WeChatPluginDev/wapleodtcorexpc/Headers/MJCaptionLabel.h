//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MJCaptionLabel : UIView
{
    UILabel *_label;
    UILabel *_subLabel;
    UIImageView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)hideIndicatorViewAnimated:(_Bool)arg1;
- (void)showIndicatorViewAnimated:(_Bool)arg1;
@property(retain, nonatomic) NSString *subText;
@property(retain, nonatomic) NSString *text;
- (void)layoutWithMaxWidth:(double)arg1;
- (void)addRecognizingAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

