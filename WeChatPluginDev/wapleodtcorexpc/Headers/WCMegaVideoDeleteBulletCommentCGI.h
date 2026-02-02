//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMegaVideoDeleteBulletCommentCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_videoId;
    NSString *_videoNonceId;
    NSString *_deleteCommentId;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *deleteCommentId; // @synthesize deleteCommentId=_deleteCommentId;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createDelRequest;
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 deleteCommentId:(id)arg3 username:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

