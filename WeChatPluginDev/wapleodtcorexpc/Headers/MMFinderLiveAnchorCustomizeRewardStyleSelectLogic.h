//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorCustomizeRewardItem, MMFinderLiveAnchorCustomizeRewardPagFileLoader, MMFinderLiveTaskId, NSArray, NSMutableArray, NSString, PAGFile, UIImage, UIViewController, WCActionSheet;
@protocol MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate;

@interface MMFinderLiveAnchorCustomizeRewardStyleSelectLogic : NSObject
{
    _Bool _isNeedSelectImage;
    unsigned int _loadingResourceCount;
    id <MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate> _delegate;
    MMFinderLiveAnchorCustomizeRewardItem *_rewardItem;
    NSString *_selectedSkinId;
    NSString *_customText;
    long long _customImageIndex;
    PAGFile *_previewPagFile;
    NSMutableArray *_customImageCacheArray;
    NSString *_defaultCustomText;
    NSArray *_rewardCustomizableAttributeArray;
    MMFinderLiveTaskId *_taskId;
    UIImage *_originCustomImage;
    MMFinderLiveAnchorCustomizeRewardPagFileLoader *_pagFileLoader;
    WCActionSheet *_chooseImageActionSheet;
    UIViewController *_hostingVc;
    struct CGSize _imageLayerSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *hostingVc; // @synthesize hostingVc=_hostingVc;
@property(retain, nonatomic) WCActionSheet *chooseImageActionSheet; // @synthesize chooseImageActionSheet=_chooseImageActionSheet;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardPagFileLoader *pagFileLoader; // @synthesize pagFileLoader=_pagFileLoader;
@property(nonatomic) unsigned int loadingResourceCount; // @synthesize loadingResourceCount=_loadingResourceCount;
@property(retain, nonatomic) UIImage *originCustomImage; // @synthesize originCustomImage=_originCustomImage;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSArray *rewardCustomizableAttributeArray; // @synthesize rewardCustomizableAttributeArray=_rewardCustomizableAttributeArray;
@property(copy, nonatomic) NSString *defaultCustomText; // @synthesize defaultCustomText=_defaultCustomText;
@property(nonatomic) struct CGSize imageLayerSize; // @synthesize imageLayerSize=_imageLayerSize;
@property(nonatomic) _Bool isNeedSelectImage; // @synthesize isNeedSelectImage=_isNeedSelectImage;
@property(retain, nonatomic) NSMutableArray *customImageCacheArray; // @synthesize customImageCacheArray=_customImageCacheArray;
@property(retain, nonatomic) PAGFile *previewPagFile; // @synthesize previewPagFile=_previewPagFile;
@property(nonatomic) long long customImageIndex; // @synthesize customImageIndex=_customImageIndex;
@property(copy, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(copy, nonatomic) NSString *selectedSkinId; // @synthesize selectedSkinId=_selectedSkinId;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardItem *rewardItem; // @synthesize rewardItem=_rewardItem;
@property(nonatomic) __weak id <MMFinderLiveAnchorCustomizeRewardStyleSelectLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFrontCamera;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)selectedSkinAnimationUrl;
@property(readonly, nonatomic) UIImage *customImage;
@property(readonly, nonatomic) _Bool isLoadingResource;
- (_Bool)isCurImageValid;
- (_Bool)isCurTextValid;
- (_Bool)isCurColorValid;
@property(readonly, nonatomic) _Bool isCurStyleValid;
- (_Bool)isCustomImageChanged;
- (_Bool)isCustomTextChanged;
- (_Bool)isSelectedSkinChanged;
@property(readonly, nonatomic) _Bool isAnyStyleChanged;
- (void)commitWithStyleValue:(id)arg1;
- (void)commitCurrentStyle;
- (void)showFinderImagePickerView;
- (void)showFinderCameraViewController;
- (void)showChooseImageActionSheet;
- (void)chooseNewImage;
- (void)claimResourceLoadingEnd;
- (void)claimResourceLoadingStart;
- (void)refreshPreviewPagFile;
- (id)pagFileIdentifierWithSkinId:(id)arg1;
- (void)preloadAllAnimationPagFile;
- (void)resetCustomImage;
- (void)updateCurrentImage:(id)arg1;
- (void)updateCurrentImageAtCacheArrayIndex:(long long)arg1;
- (_Bool)isCharacterValid:(id)arg1;
- (_Bool)checkInputTextInvalid:(id)arg1;
- (id)getAlertMessageWithInputText:(id)arg1;
- (void)updateCurrentText:(id)arg1;
- (void)updateCurrentAnimationWithUrl:(id)arg1 identifier:(id)arg2;
- (void)updateCurrentSkinId:(id)arg1;
- (id)initWithTaskId:(id)arg1 rewardItem:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

