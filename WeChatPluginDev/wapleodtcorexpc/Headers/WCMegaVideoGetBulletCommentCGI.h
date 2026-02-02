//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCMegaVideoGetBulletCommentCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_videoId;
    NSString *_videoNonceId;
    NSData *_lastBuffer;
    unsigned long long _videoTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long videoTimeStamp; // @synthesize videoTimeStamp=_videoTimeStamp;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithVideoId:(id)arg1 videoNonceId:(id)arg2 videoTimeStamp:(unsigned long long)arg3 lastBuffer:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

