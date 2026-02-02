//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo, MMWebImageView, NSString;

@interface MMLiveGameOperationCollectionViewCell : UICollectionViewCell
{
    FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo *_activity;
    MMWebImageView *_operationImgView;
}

+ (double)collectionCellHeight;
+ (double)collectionCellWidth;
+ (double)collectionCellSpacing;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *operationImgView; // @synthesize operationImgView=_operationImgView;
@property(retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameActivityBanner_GameActivityBannerInfo *activity; // @synthesize activity=_activity;
- (void)onLoadImageOK:(id)arg1;
- (void)updateOperationImgView;
- (void)layoutOperationImgView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

