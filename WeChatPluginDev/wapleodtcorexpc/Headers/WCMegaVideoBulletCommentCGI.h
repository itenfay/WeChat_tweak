//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMegaVideoBulletCommentCGI
{
    _Bool _isAuthorView;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_videoId;
    NSString *_videoNonceId;
    long long _videoTimestamp;
    NSString *_content;
    NSString *_username;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAuthorView; // @synthesize isAuthorView=_isAuthorView;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long videoTimestamp; // @synthesize videoTimestamp=_videoTimestamp;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createPostRequest;
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 videoTimestamp:(unsigned long long)arg3 content:(id)arg4 username:(id)arg5 isAuthorView:(_Bool)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

