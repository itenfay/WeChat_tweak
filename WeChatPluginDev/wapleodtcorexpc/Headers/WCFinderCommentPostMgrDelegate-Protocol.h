//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderComment;

@protocol WCFinderCommentPostMgrDelegate <NSObject>

@optional
- (void)finderCommentPostSuccessfulWitComment:(WCFinderComment *)arg1;
- (void)finderCommentPostFailWithComment:(WCFinderComment *)arg1;
- (void)finderCommentStartPostWithComment:(WCFinderComment *)arg1;
@end

