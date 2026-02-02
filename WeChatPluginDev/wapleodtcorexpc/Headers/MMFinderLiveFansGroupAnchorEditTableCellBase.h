//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIView;

@interface MMFinderLiveFansGroupAnchorEditTableCellBase : UITableViewCell
{
    double _containerBottomMargin;
    UIView *_sepLine;
    unsigned long long _corners;
    UIView *_containerView;
    UIImageView *_rightChevronView;
    UIView *_highlightView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIImageView *rightChevronView; // @synthesize rightChevronView=_rightChevronView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(nonatomic) double containerBottomMargin; // @synthesize containerBottomMargin=_containerBottomMargin;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithRoundedCorners:(unsigned long long)arg1;
- (void)updateShowSepLine:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

