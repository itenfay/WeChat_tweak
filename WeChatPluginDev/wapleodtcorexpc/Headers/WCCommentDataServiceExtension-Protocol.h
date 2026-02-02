//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderComment;

@protocol WCCommentDataServiceExtension <NSObject>
- (void)onCommentLikeStatusChanged:(WCFinderComment *)arg1 entityId:(NSString *)arg2;
@end

