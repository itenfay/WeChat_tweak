//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIImageView, UIView;

@interface NonCell : UICollectionViewCell
{
    UIView *m_iconView;
    MMUILabel *m_descLabel;
    _Bool _isSelected;
    UIImageView *_icon;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

