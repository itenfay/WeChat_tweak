//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageAttr, ImageSelectorController, MMImage, NSError, NSMutableArray, NSString, SightDraft, UIViewController;

@protocol SelectorControllerDelegate <NSObject>
- (_Bool)showAddView;
- (UIViewController *)getViewController;

@optional
- (void)onClickDownloadFailImage:(MMImage *)arg1;
- (void)ImageSelectorControllerEndExportingWithAssetId:(NSString *)arg1 error:(NSError *)arg2;
- (void)ImageSelectorControllerStartExportingWithAssetId:(NSString *)arg1;
- (void)ImageSelectorControllerDidShowActionSheet;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 didFinishPickingImageWithEditImageAttr:(EditImageAttr *)arg2;
- (void)ImageSelectorControllerDidCancelSightCamera;
- (void)ImageSelectorControllerCancelPreview;
- (void)ImageSelectorControllerStartPreview;
- (void)ImageSelectorControllerCancelEditing;
- (void)ImageSelectorControllerStartEditing;
- (void)ImageSelectorControllerDidTakeMedia;
- (void)ImageSelectorControllerDidPresentCamera;
- (void)ImageSelectorControllerDidOpenCamera;
- (void)ImageSelectorControllerDidPresentAssetPicker;
- (void)ImageSelectorControllerDidOpenAssetPicker;
- (void)ImageSelectorControllerDidCancel;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 didSelectSightDraft:(SightDraft *)arg2;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 didDeleteAllImagesFromType:(unsigned long long)arg2 deletedImagesCount:(long long)arg3;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 willDeleteAllImagesFromType:(unsigned long long)arg2;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 didDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 willDeleteImageAtIndex:(unsigned long long)arg2;
- (void)ImageSelectorController:(ImageSelectorController *)arg1 willSelectAssetOfType:(unsigned long long)arg2;
- (void)onImageOrderChange;
- (void)onRemindContactSelected:(NSMutableArray *)arg1;
- (_Bool)shouldJustReturnMMAsset;
- (void)imagesUpdated;
- (void)hideInputController;
- (void)updateSelectorView;
@end

