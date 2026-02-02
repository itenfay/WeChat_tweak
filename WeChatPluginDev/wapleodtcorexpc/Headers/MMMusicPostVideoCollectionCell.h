//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMAssetSelectCheckButton, MMMusicFinderVideoCellModel, MMUILabel, MMWebImageView, UIView;
@protocol MMMusicPostVideoCollectionCellDelegate;

@interface MMMusicPostVideoCollectionCell : UICollectionViewCell
{
    MMMusicFinderVideoCellModel *_dataModel;
    MMWebImageView *_coverImageView;
    CAGradientLayer *_timeLayer;
    MMUILabel *_timeLabel;
    MMAssetSelectCheckButton *m_selectCheckButton;
    unsigned long long _scene;
    id <MMMusicPostVideoCollectionCellDelegate> _delegate;
    UIView *_selectCoverView;
    struct UIEdgeInsets _checkButtonHitTetsSlop;
}

+ (id)reuseKeyStr;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets checkButtonHitTetsSlop; // @synthesize checkButtonHitTetsSlop=_checkButtonHitTetsSlop;
@property(retain, nonatomic) UIView *selectCoverView; // @synthesize selectCoverView=_selectCoverView;
@property(nonatomic) __weak id <MMMusicPostVideoCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onSelectBtnClicked;
- (void)udpateCheckBtnSelection:(_Bool)arg1;
- (id)getImage;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateIsSelectedStatus:(_Bool)arg1;
- (void)updateMinDuration:(double)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (void)updateModel:(id)arg1 canMultiSelect:(_Bool)arg2 minDuration:(double)arg3 isSelected:(_Bool)arg4;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

