//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderComment;

@protocol WCFinderPostingCommentExt <NSObject>

@optional
- (void)onFinderDataItemPostingCommentCountUpdate;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(WCFinderComment *)arg1 errorCode:(int)arg2 errorMsg:(NSString *)arg3;
@end

