//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCommentItem, WCDataItem;

@protocol WCCommentUploadMgrDelegate <NSObject>
- (void)onCommentOrLikeFailQueueChange;
- (void)onCommentReturn:(WCDataItem *)arg1 comment:(WCCommentItem *)arg2;
@end

