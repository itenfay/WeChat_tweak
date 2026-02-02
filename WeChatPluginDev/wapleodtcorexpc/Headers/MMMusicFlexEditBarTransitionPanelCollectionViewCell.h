//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, MMUILabel, UIImageView;

@interface MMMusicFlexEditBarTransitionPanelCollectionViewCell : UICollectionViewCell
{
    MMUILabel *_titleLabel;
    UIImageView *_imageView;
    CAShapeLayer *_selectedBorderLayer;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *selectedBorderLayer; // @synthesize selectedBorderLayer=_selectedBorderLayer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSelected:(_Bool)arg1;
- (void)updateModel:(id)arg1;
- (void)layoutSubviews;
- (void)internalInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

