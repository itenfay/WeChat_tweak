//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class COpenIMCustomToolBarItem, MMUIButton, MMUILabel, MMWebImageView, NSString;
@protocol WWKFCustomToolBarItemCellDelegate;

@interface WWKFCustomToolBarItemCell : UICollectionViewCell
{
    MMUIButton *_roundedContainer;
    MMWebImageView *_headView;
    MMUILabel *_titleLabel;
    NSString *_lastImageUrl;
    COpenIMCustomToolBarItem *_model;
    id <WWKFCustomToolBarItemCellDelegate> _delegate;
}

+ (double)CellHeight;
+ (struct CGSize)SizeToFitModel:(id)arg1;
+ (double)WidthToFitTitle:(id)arg1;
+ (id)LabelFont;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WWKFCustomToolBarItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) COpenIMCustomToolBarItem *model; // @synthesize model=_model;
- (void)onTapContainer:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
- (void)initViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

