//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCStoryComment;

@protocol WCStoryCommentUploadMgrDelegate <NSObject>
- (void)onCommentFail:(WCStoryComment *)arg1;
- (void)onCommentSuccess:(WCStoryComment *)arg1;
@end

