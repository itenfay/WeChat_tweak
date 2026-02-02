//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderFullScreenEditImageViewControllerDelegate;

@interface WCFinderFullScreenEditImageViewController
{
    id <WCFinderFullScreenEditImageViewControllerDelegate> _finderDelegate;
    unsigned long long _enterScene;
}

+ (_Bool)checkSelectedImageIsSizeLegal:(struct CGSize)arg1;
+ (_Bool)selectedImagesSizeLegal:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) __weak id <WCFinderFullScreenEditImageViewControllerDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)registerYReportSdk;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (_Bool)shouldSaveUnCropImages;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (void)onClickItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)showEditImageViewOn;
- (void)willDisappear;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 images:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

