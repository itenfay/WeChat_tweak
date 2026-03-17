//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TopStoryPluginPostCommentRequest, TopStoryPluginPostCommentResponse, TopStoryPluginSetCommentResponse;

@protocol ITopStoryPluginMsgExt <NSObject>

@optional
- (void)onRequestSetCommontEnd:(TopStoryPluginSetCommentResponse *)arg1 requestOpType:(unsigned int)arg2;
- (void)onRequestPostCommentEnd:(TopStoryPluginPostCommentResponse *)arg1 oriRequest:(TopStoryPluginPostCommentRequest *)arg2 docId:(NSString *)arg3;
@end

