//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString, WCRedesignBaseItem;

@interface WCRedesignBaseItemView : UIView
{
    _Bool _disableDefaultAccessibility;
    unsigned int _separators;
    WCRedesignBaseItem *_item;
    MMUIButton *_backgroundButton;
    NSString *_title;
    MMUILabel *_titleLabel;
    UIView *_contentView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

+ (id)generateSeparator;
+ (double)standardHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) unsigned int separators; // @synthesize separators=_separators;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak WCRedesignBaseItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool disableDefaultAccessibility; // @synthesize disableDefaultAccessibility=_disableDefaultAccessibility;
- (void)onTapBackground;
- (_Bool)isBreakLine;
- (unsigned long long)numberOfLinesForWidth:(double)arg1;
- (_Bool)shouldBreakLineForMaxTitleWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

