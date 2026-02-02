//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface WCFinderLiveShareCellFullStatusView : UIView
{
    double _middleSpacing;
    UIColor *_textColor;
    UIImageView *_iconView;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double middleSpacing; // @synthesize middleSpacing=_middleSpacing;
- (id)getLabel;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startLiveAnimation;
- (void)prepareForReuse;
@property(nonatomic) _Bool enableMultiline;
@property(retain, nonatomic) NSString *labelText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

