//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStickerItemBase, MMFinderLiveStickerTextTemplateResourceRepository, MMFinderLiveTaskId, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MMFinderLiveStickerLogic : NSObject
{
    _Bool _reviewSubmissionOngoing;
    _Bool _stickerEditing;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveStickerItemBase *_imageSticker;
    MMFinderLiveStickerItemBase *_textSticker;
    MMFinderLiveStickerItemBase *_bottomMostSticker;
    NSMutableDictionary *_pendingReviewSubmissionItems;
    NSMutableSet *_pendingReviewRemovalItems;
    NSMutableArray *_editingActivatorContainerViewItems;
    MMFinderLiveStickerTextTemplateResourceRepository *_textTemplateResources;
    unsigned long long _preemptions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool stickerEditing; // @synthesize stickerEditing=_stickerEditing;
@property(nonatomic) unsigned long long preemptions; // @synthesize preemptions=_preemptions;
@property(retain, nonatomic) MMFinderLiveStickerTextTemplateResourceRepository *textTemplateResources; // @synthesize textTemplateResources=_textTemplateResources;
@property(retain, nonatomic) NSMutableArray *editingActivatorContainerViewItems; // @synthesize editingActivatorContainerViewItems=_editingActivatorContainerViewItems;
@property(nonatomic) _Bool reviewSubmissionOngoing; // @synthesize reviewSubmissionOngoing=_reviewSubmissionOngoing;
@property(retain, nonatomic) NSMutableSet *pendingReviewRemovalItems; // @synthesize pendingReviewRemovalItems=_pendingReviewRemovalItems;
@property(retain, nonatomic) NSMutableDictionary *pendingReviewSubmissionItems; // @synthesize pendingReviewSubmissionItems=_pendingReviewSubmissionItems;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *bottomMostSticker; // @synthesize bottomMostSticker=_bottomMostSticker;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *textSticker; // @synthesize textSticker=_textSticker;
@property(retain, nonatomic) MMFinderLiveStickerItemBase *imageSticker; // @synthesize imageSticker=_imageSticker;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)showToastMessageForCurrentPreemptions;
- (void)updatePreemptions;
- (void)restoreStickerComposition;
- (void)pauseStickerComposition;
- (id)reFitStickerItemRenderParam:(id)arg1 forLive:(id)arg2 inOrientation:(long long)arg3;
- (void)persistStickerItem:(id)arg1;
- (void)removeStickterItemFromAllCompositions:(id)arg1;
- (void)removeStickerFromTransmitComposition:(id)arg1;
- (void)addStickerToTransmitComposition:(id)arg1;
- (void)submitPendingStickersForRemoval:(id)arg1 failedSubmissionCount:(unsigned long long)arg2;
- (void)submitPendingStickersForReview;
- (void)sendStickerToBackInComposition:(id)arg1;
- (void)removeStickerFromComposition:(id)arg1;
- (void)addStickerToComposition:(id)arg1;
- (void)openStickerEditingVC:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToEditPageForStickerType:(unsigned long long)arg1 configuration:(id)arg2 fromViewController:(id)arg3 reporter:(id)arg4;
- (_Bool)inLive;
- (void)removeSticker:(id)arg1;
- (id)liveTask;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 applyingOrConnectingMicWithOtherAnchorChanged:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onStickerEditingActivatorViewDoubleTappedForStickerItem:(id)arg1 inContainerView:(id)arg2;
- (void)onStickerEditingActivatorViewTappedForStickerItem:(id)arg1 inContainerView:(id)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 cancelingWithOriginalSticker:(id)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 removingSticker:(id)arg2;
- (void)handleForStickerItemUpdated:(id)arg1 archiveUponFinish:(_Bool)arg2;
- (void)onLiveStickerEditingViewController:(id)arg1 addingOrChangingSticker:(id)arg2;
- (struct CGRect)onLiveStickerEditingViewController:(id)arg1 requestingCanvasFrameInCoordinateSpace:(id)arg2;
- (void)updateTextTemplateResourcesWithBackendEntitiesForTextTemplates:(id)arg1 templateFonts:(id)arg2;
- (void)reFitPersistStickersInCurrOrientation;
- (void)endOrientationChange;
- (void)beginOrientationChange;
- (id)createEditingActivatorContainerViewWithEditVcPresentingViewController:(id)arg1 actionSheetHostingView:(id)arg2 reporter:(id)arg3;
- (void)removeStickerWithSubmissionId:(id)arg1;
- (void)updateStickerEnablementSwitches;
- (void)submitExistingStickersForReview;
- (void)clearPersistentStickers;
- (void)loadPersistentStickers;
- (void)showStickerActionSheetForStickerType:(unsigned long long)arg1 withEditVcPresentingViewController:(id)arg2 actionSheetHostingView:(id)arg3 reporter:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)showStickerActionSheetWithEditVcPresentingViewController:(id)arg1 actionSheetHostingView:(id)arg2 reporter:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

