//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIContextMenuConfiguration, UIFocusAnimationCoordinator, UISwipeActionsConfiguration, UITableView, UITableViewCell, UITableViewFocusUpdateContext, UITargetedPreview, UIView;
@protocol UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating, UISpringLoadedInteractionContext;

@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)tableView:(UITableView *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)tableView:(UITableView *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (UITargetedPreview *)tableView:(UITableView *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)tableView:(UITableView *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)tableView:(UITableView *)arg1 contextMenuConfigurationForRowAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3;
- (void)tableViewDidEndMultipleSelectionInteraction:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldSpringLoadRowAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (_Bool)tableView:(UITableView *)arg1 selectionFollowsFocusForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)indexPathForPreferredFocusedViewInTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (_Bool)tableView:(UITableView *)arg1 shouldUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)tableView:(UITableView *)arg1 leadingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 performPrimaryActionForRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canPerformPrimaryActionForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didUnhighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 accessoryTypeForRowWithIndexPath:(NSIndexPath *)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndDisplayingFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

