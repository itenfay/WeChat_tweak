//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CAShapeLayer, MMHeadImageView, UILabel, UIView;

@interface WCMomentsShareScopeContactCellView : UICollectionViewCell
{
    MMHeadImageView *_avatarImageView;
    UIView *_labelContainerView;
    UILabel *_nameLabel;
    unsigned long long _cellViewCurrentCorner;
    CAShapeLayer *_cellViewCornerMaskLayer;
    CALayer *_labelContainerViewBorderLayer;
}

+ (_Bool)isSectionIdentifierEqualsTo:(id)arg1;
+ (double)cellHeight;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *labelContainerViewBorderLayer; // @synthesize labelContainerViewBorderLayer=_labelContainerViewBorderLayer;
@property(retain, nonatomic) CAShapeLayer *cellViewCornerMaskLayer; // @synthesize cellViewCornerMaskLayer=_cellViewCornerMaskLayer;
@property(nonatomic) unsigned long long cellViewCurrentCorner; // @synthesize cellViewCurrentCorner=_cellViewCurrentCorner;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) MMHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)_initContainerViewBorderFromViewModel:(id)arg1;
- (void)_removeCellViewCorner;
- (void)_initCellViewCornerFromViewModel:(id)arg1;
- (void)_initCellViewWithViewModel:(id)arg1;
- (void)loadFromViewModel:(id)arg1;

@end

