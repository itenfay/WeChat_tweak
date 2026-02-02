//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CommentInputRequest;

@protocol TingCommentInputDelegate <NSObject>
- (void)activeCommentInput:(CommentInputRequest *)arg1 result:(void (^)(CommentInputResult *, FlutterError *))arg2;
@end

