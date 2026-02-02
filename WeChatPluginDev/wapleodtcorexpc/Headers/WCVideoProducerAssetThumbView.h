//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView;

@interface WCVideoProducerAssetThumbView : UICollectionViewCell
{
    UIView *_containerView;
    UIImageView *_thumbImageView;
    UIImageView *_assetTypeIconView;
    UIView *_selectedMaskView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) UIImageView *assetTypeIconView; // @synthesize assetTypeIconView=_assetTypeIconView;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)_initView;
- (void)_loadSelectedMaskViewForViewModel:(id)arg1;
- (void)_loadAssetTypeIconForAssetInfo:(id)arg1;
- (void)_resetDefaultThumbImage;
- (void)_loadAssetThumbViewForAssetInfo:(id)arg1;
- (void)loadViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

