//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMegaVideoGetDetailCGI
{
    unsigned int _scene;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_videoId;
    NSString *_videoNonceId;
    NSString *_encryptedVideoId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *encryptedVideoId; // @synthesize encryptedVideoId=_encryptedVideoId;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 scene:(long long)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

