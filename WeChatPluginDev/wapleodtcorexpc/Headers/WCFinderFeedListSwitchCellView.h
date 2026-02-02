//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WCFinderFeedListSwitchCellView : UITableViewCell
{
    UIImageView *_arrowView;
    UILabel *_label;
    unsigned long long _arrowDirection;
}

+ (id)cellID;
+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
- (void)updateTitle:(id)arg1;
- (void)setupTitle:(id)arg1 arrowDirection:(unsigned long long)arg2;
- (void)sizeToFitWidth:(double)arg1;
- (void)doLayoutSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

