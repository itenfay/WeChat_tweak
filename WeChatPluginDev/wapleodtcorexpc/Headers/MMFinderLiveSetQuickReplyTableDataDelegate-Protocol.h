//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveQuickReplyModel, NSIndexPath, NSMutableArray;

@protocol MMFinderLiveSetQuickReplyTableDataDelegate <NSObject>
- (void)quickReplyTableTextViewDidChange:(NSMutableArray *)arg1;
- (void)quickReplyTableCleanButtonClick:(NSIndexPath *)arg1 dataArray:(NSMutableArray *)arg2;
- (void)quickReplyTableAddButtonClick;
- (void)didSelectRowWithItem:(MMFinderLiveQuickReplyModel *)arg1 indexPath:(NSIndexPath *)arg2;
@end

