//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMAssetSelectCheckButton, MMMusicAlbumVideoCellModel, UIImageView, UILabel, UIView;
@protocol MMMusicPostVideoTabAlbumVideoCellDelegate;

@interface MMMusicPostVideoTabAlbumVideoCell : UICollectionViewCell
{
    MMMusicAlbumVideoCellModel *dataModel;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    CAGradientLayer *_timeLayer;
    MMAssetSelectCheckButton *m_selectCheckButton;
    id <MMMusicPostVideoTabAlbumVideoCellDelegate> _delegate;
    UIView *_selectCoverView;
    struct UIEdgeInsets _checkButtonHitTetsSlop;
}

+ (id)reuseKey;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets checkButtonHitTetsSlop; // @synthesize checkButtonHitTetsSlop=_checkButtonHitTetsSlop;
@property(retain, nonatomic) UIView *selectCoverView; // @synthesize selectCoverView=_selectCoverView;
@property(nonatomic) __weak id <MMMusicPostVideoTabAlbumVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onSelectBtnClicked;
- (void)udpateCheckBtnSelection:(_Bool)arg1;
- (id)getImage;
- (void)updateTimeLabelAndTimeLayer;
- (id)timeStringBySeconds:(double)arg1;
- (void)layoutSubviews;
- (void)updateIsSelectedStatus:(_Bool)arg1;
- (void)updateMinDuration:(double)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (void)updateModel:(id)arg1 canMultiSelect:(_Bool)arg2 minDuration:(double)arg3 isSelected:(_Bool)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

