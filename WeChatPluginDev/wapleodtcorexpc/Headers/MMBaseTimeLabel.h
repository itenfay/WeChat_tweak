//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface MMBaseTimeLabel : UIView
{
    NSString *_prefix;
    _Bool _hideHours;
    UILabel *_label;
    UILabel *_suffixLabel;
    unsigned long long _seconds;
    NSString *_maxWidthTime;
}

+ (double)widthWithPrefix:(id)arg1 font:(id)arg2 maxWidthTime:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideHours; // @synthesize hideHours=_hideHours;
@property(copy, nonatomic) NSString *maxWidthTime; // @synthesize maxWidthTime=_maxWidthTime;
@property(nonatomic) unsigned long long seconds; // @synthesize seconds=_seconds;
@property(readonly, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *prefix;
- (void)updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

