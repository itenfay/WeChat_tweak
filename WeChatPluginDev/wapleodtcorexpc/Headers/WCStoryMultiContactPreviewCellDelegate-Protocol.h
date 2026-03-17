//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryMultiContactPreviewCell;

@protocol WCStoryMultiContactPreviewCellDelegate <NSObject>

@optional
- (void)onMultiContactCellShouldHideUIElement:(_Bool)arg1;
- (void)onStoryMultiContactCellCommentListShow:(_Bool)arg1;
- (void)onLongPressStoryMultiContactCellToHideDataItem:(WCStoryMultiContactPreviewCell *)arg1;
- (void)onLongPressStoryMultiContactCellToDelete:(WCStoryMultiContactPreviewCell *)arg1;
- (void)onStoryMultiContactCellChangePage:(WCStoryMultiContactPreviewCell *)arg1;
@end

