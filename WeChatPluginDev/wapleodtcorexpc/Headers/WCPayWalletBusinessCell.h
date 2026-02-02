//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FunctionDetail, MMUILabel, WCPayWebImageView;

@interface WCPayWalletBusinessCell : UICollectionViewCell
{
    FunctionDetail *_itemData;
    WCPayWebImageView *_iconImgView;
    WCPayWebImageView *_activityIconImgView;
    MMUILabel *_nameLabel;
    MMUILabel *_subTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCPayWebImageView *activityIconImgView; // @synthesize activityIconImgView=_activityIconImgView;
@property(retain, nonatomic) WCPayWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) FunctionDetail *itemData; // @synthesize itemData=_itemData;
- (id)accessibilityLabelString;
- (_Bool)isNeedShowActivityIcon;
- (void)updateActivityIconView;
- (void)updateSubTitleLabel;
- (void)updateNameLabel;
- (void)updateIconView;
- (void)updateView;
- (void)updateCellWithItemData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

