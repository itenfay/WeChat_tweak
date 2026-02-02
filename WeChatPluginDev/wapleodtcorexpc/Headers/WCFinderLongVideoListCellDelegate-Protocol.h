//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIButton, WCFinderFeedContentVM, WCFinderLongVideoListCell;

@protocol WCFinderLongVideoListCellDelegate <NSObject>

@optional
- (void)longVideoAutoPlay:(WCFinderLongVideoListCell *)arg1;
- (void)longVideoListCell:(WCFinderLongVideoListCell *)arg1 landscapeClicked:(UIButton *)arg2;
- (void)longVideoListCell:(WCFinderLongVideoListCell *)arg1 contentVMUpdated:(WCFinderFeedContentVM *)arg2;
- (void)longVideoListCell:(WCFinderLongVideoListCell *)arg1 longPressRecognizedWithContentVM:(WCFinderFeedContentVM *)arg2;
- (int)longVideoListCellGetCommentScene;
- (void)onLongVideoListCellClickSeeLaterButtonWithContentVM:(WCFinderFeedContentVM *)arg1 currentSeeLaterState:(_Bool)arg2;
@end

