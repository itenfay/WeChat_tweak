//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface MJPrecisionPickerViewLabelCell : UICollectionViewCell
{
    _Bool _isShowIndicator;
    UILabel *_label;
    UIView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool isShowIndicator; // @synthesize isShowIndicator=_isShowIndicator;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

