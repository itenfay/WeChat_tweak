//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMLiveCameraOperationItem, MMUIButton, MMUILabel, UIView;

@interface MMLiveCameraOperationItemCell : UICollectionViewCell
{
    CDUnknownBlockType _onTapped;
    MMUIButton *_button;
    MMLiveCameraOperationItem *_operationItem;
    MMUILabel *_label;
    MMUILabel *_secondaryLabel;
    UIView *_badgeView;
    MMUILabel *_badgeLabel;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMUILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMLiveCameraOperationItem *operationItem; // @synthesize operationItem=_operationItem;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType onTapped; // @synthesize onTapped=_onTapped;
- (void)onButtonTapped;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

