//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentDataService, WCFinderComment;

@protocol WCCommentDataServiceDelegate <NSObject>
- (void)commentDataService:(WCCommentDataService *)arg1 onCommentEntityDeleted:(NSString *)arg2;
- (void)commentDataService:(WCCommentDataService *)arg1 onPostSubCommentFail:(WCFinderComment *)arg2 entityId:(NSString *)arg3 rootCommetnId:(unsigned long long)arg4 retCode:(int)arg5;
- (void)commentDataService:(WCCommentDataService *)arg1 onPostSubCommentSuccessfully:(WCFinderComment *)arg2 entityId:(NSString *)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataService:(WCCommentDataService *)arg1 onPostSubComment:(WCFinderComment *)arg2 entityId:(NSString *)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataSErvice:(WCCommentDataService *)arg1 onCommentPostFail:(WCFinderComment *)arg2 entityId:(NSString *)arg3;
- (void)commentDataSErvice:(WCCommentDataService *)arg1 onCommentPostSuccessfully:(WCFinderComment *)arg2 entityId:(NSString *)arg3;
- (void)commentDataService:(WCCommentDataService *)arg1 onPostComment:(WCFinderComment *)arg2 entityId:(NSString *)arg3;
@end

