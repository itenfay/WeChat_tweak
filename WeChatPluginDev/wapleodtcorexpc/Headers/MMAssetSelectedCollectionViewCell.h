//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMAssetView, UIColor;

@interface MMAssetSelectedCollectionViewCell : UICollectionViewCell
{
    _Bool _isShowBorder;
    MMAssetView *_assetView;
    UIColor *_borderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool isShowBorder; // @synthesize isShowBorder=_isShowBorder;
@property(retain, nonatomic) MMAssetView *assetView; // @synthesize assetView=_assetView;

@end

