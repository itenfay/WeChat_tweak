//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMegaVideoLikeCGI
{
    _Bool _isLike;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_videoId;
    NSString *_videoNonceId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)createRequest;
- (id)initVideoLikeCGIWith:(id)arg1 videoNonceId:(id)arg2 isLike:(_Bool)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

