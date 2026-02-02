//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface StoreEmotionCollectionHeaderView : UICollectionReusableView
{
    UIView *_bottomLine;
    UILabel *_titleLabel;
    UIView *_topLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setHeaderColor:(id)arg1;
- (void)setHeaderX:(double)arg1;
- (void)setHeaderFont:(id)arg1;
- (void)setHeaderViewTitle:(id)arg1;
- (void)setupViews;
- (void)setLineViewColor:(id)arg1;
- (void)setTitleLabelX:(double)arg1;
- (void)hideBottomLine;
- (void)showBottomLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

