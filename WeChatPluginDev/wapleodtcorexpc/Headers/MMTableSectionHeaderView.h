//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIColor, UIImageView, UILabel, UIView, WCColorProxy;

@interface MMTableSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_selectedBackgroundView;
    UILabel *_selectedLabel;
    UIImageView *_selectedStarImageView;
    _Bool _sectionSelected;
    WCColorProxy *_colorProxy;
    UILabel *_titleLabel;
    UIImageView *_starImageView;
    UIImageView *_backgroundImageView;
    UIColor *_selectedBackgroundColor;
    UIView *_bottomLineView;
    UIView *_topLineView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool sectionSelected; // @synthesize sectionSelected=_sectionSelected;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCColorProxy *colorProxy; // @synthesize colorProxy=_colorProxy;
- (void)prepareForReuse;
- (void)reloadView;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

