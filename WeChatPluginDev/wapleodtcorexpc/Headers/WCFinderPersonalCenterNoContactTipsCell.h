//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface WCFinderPersonalCenterNoContactTipsCell : UICollectionViewCell
{
    UILabel *_label;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_layoutLabel;
- (void)layoutSubviews;
- (void)updateTips:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

