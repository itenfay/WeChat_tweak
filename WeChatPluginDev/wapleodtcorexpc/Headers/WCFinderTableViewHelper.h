//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderTableViewHelper : NSObject
{
}

+ (void)silenceInsertFeedId:(id)arg1 aboveFeedId:(id)arg2 viewModel:(id)arg3 tableView:(id)arg4 fromVC:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)scrollToInsertFeedId:(id)arg1 aboveFeedId:(id)arg2 viewModel:(id)arg3 tableView:(id)arg4 animated:(_Bool)arg5 fromVC:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (id)visibleCellInTableView:(id)arg1 forLiveId:(id)arg2;
+ (struct CGRect)morphDismissTargetFrameInTableView:(id)arg1 forLiveId:(id)arg2 videoSize:(struct CGSize)arg3;
+ (struct CGRect)videoFrameInLiveCellForCellSize:(struct CGSize)arg1 videoSize:(struct CGSize)arg2 landScapeMarginTop:(double)arg3 landScapeMarginBottom:(double)arg4;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2 targetContentOffset:(struct CGPoint)arg3;
+ (id)getCurrentFocusIndexPath:(id)arg1 tableView:(id)arg2;
+ (double)feedHightOfIndexPath:(id)arg1 contentVM:(id)arg2 width:(double)arg3 paramModel:(id)arg4;
+ (id)_fullScreenFeedCellForForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (id)feedCellForTableView:(id)arg1 rowAtIndexPath:(id)arg2 delegate:(id)arg3 contentVM:(id)arg4 feedViewerScene:(unsigned long long)arg5 paramModel:(id)arg6;
+ (void)tableViewRegisterCell:(id)arg1;

@end

