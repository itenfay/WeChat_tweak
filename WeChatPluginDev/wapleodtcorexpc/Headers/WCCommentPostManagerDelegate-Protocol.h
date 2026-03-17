//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderComment;

@protocol WCCommentPostManagerDelegate <NSObject>

@optional
- (void)commentPostSuccessfulWitComment:(WCFinderComment *)arg1;
- (void)commentPostFailWithComment:(WCFinderComment *)arg1;
- (void)commentStartPostWithComment:(WCFinderComment *)arg1;
@end

