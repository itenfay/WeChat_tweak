//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell, UICollectionViewFocusUpdateContext, UICollectionViewLayout, UICollectionViewTransitionLayout, UIContextMenuConfiguration, UIFocusAnimationCoordinator, UITargetedPreview, UIWindowSceneActivationConfiguration;
@protocol UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating, UISpringLoadedInteractionContext;

@protocol UICollectionViewDelegate <UIScrollViewDelegate>

@optional
- (UITargetedPreview *)collectionView:(UICollectionView *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)collectionView:(UICollectionView *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)collectionView:(UICollectionView *)arg1 contextMenuConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (UIWindowSceneActivationConfiguration *)collectionView:(UICollectionView *)arg1 sceneActivationConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (void)collectionView:(UICollectionView *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)collectionView:(UICollectionView *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)collectionView:(UICollectionView *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 dismissalPreviewForItemAtIndexPath:(NSIndexPath *)arg3;
- (UITargetedPreview *)collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 highlightPreviewForItemAtIndexPath:(NSIndexPath *)arg3;
- (UIContextMenuConfiguration *)collectionView:(UICollectionView *)arg1 contextMenuConfigurationForItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint)arg3;
- (void)collectionViewDidEndMultipleSelectionInteraction:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldSpringLoadItemAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canEditItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGPoint)collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(NSIndexPath *)arg2 atCurrentIndexPath:(NSIndexPath *)arg3 toProposedIndexPath:(NSIndexPath *)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 selectionFollowsFocusForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)indexPathForPreferredFocusedViewInCollectionView:(UICollectionView *)arg1;
- (void)collectionView:(UICollectionView *)arg1 didUpdateFocusInContext:(UICollectionViewFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldUpdateFocusInContext:(UICollectionViewFocusUpdateContext *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (UICollectionViewTransitionLayout *)collectionView:(UICollectionView *)arg1 transitionLayoutForOldLayout:(UICollectionViewLayout *)arg2 newLayout:(UICollectionViewLayout *)arg3;
- (void)collectionView:(UICollectionView *)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldShowMenuForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndDisplayingSupplementaryView:(UICollectionReusableView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UICollectionView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 willDisplaySupplementaryView:(UICollectionReusableView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(UICollectionView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 performPrimaryActionForItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canPerformPrimaryActionForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didUnhighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHighlightItemAtIndexPath:(NSIndexPath *)arg2;
@end

