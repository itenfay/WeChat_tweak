//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, CAShapeLayer, MMMusicNoDotSelectItemViewModel, MMUIButton, MMWebImageView, UILabel;
@protocol MMMusicNoDotSelectItemViewDelegate;

@interface MMMusicNoDotSelectItemView : UICollectionViewCell
{
    id <MMMusicNoDotSelectItemViewDelegate> _delegate;
    MMMusicNoDotSelectItemViewModel *_dataModel;
    MMWebImageView *_bgImageView;
    CAGradientLayer *_timeLayer;
    UILabel *_timeLabel;
    MMUIButton *_deleteBtn;
    CAShapeLayer *_selectedBorderLayer;
}

+ (id)reuseKey;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *selectedBorderLayer; // @synthesize selectedBorderLayer=_selectedBorderLayer;
@property(retain, nonatomic) MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAGradientLayer *timeLayer; // @synthesize timeLayer=_timeLayer;
@property(retain, nonatomic) MMWebImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) MMMusicNoDotSelectItemViewModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <MMMusicNoDotSelectItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onClickDeleteBtn;
- (void)layoutSubviews;
- (void)updateWhenInLongSelectedDragStatus:(_Bool)arg1;
- (void)clearSelectedStatus;
- (void)setSelectedStatus;
- (void)updateTimeLabelWithDuration:(double)arg1;
- (void)updateModel:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

