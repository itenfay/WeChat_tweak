//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMImage, NSString, UIView, WCAssetStateView;

@interface WCPostMMImageView : UIImageView
{
    MMImage *_mmImage;
    UIView *_statusContainerView;
    UIImageView *_livePhotoIconView;
    WCAssetStateView *_stateView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAssetStateView *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) UIImageView *livePhotoIconView; // @synthesize livePhotoIconView=_livePhotoIconView;
@property(retain, nonatomic) UIView *statusContainerView; // @synthesize statusContainerView=_statusContainerView;
@property(retain, nonatomic) MMImage *mmImage; // @synthesize mmImage=_mmImage;
- (void)imageProcessTask:(id)arg1 didFailToProcessMMImage:(id)arg2;
- (void)imageProcessTask:(id)arg1 didFinishProcessingMMImage:(id)arg2;
- (void)updateCloudTipsViews:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)updateStateView;
- (void)loadStateView;
- (void)updateLivePhotoIcon;
- (void)loadLivePhotoIconViewIfNeeded;
- (void)loadStatusContainerView;
- (void)updateImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

