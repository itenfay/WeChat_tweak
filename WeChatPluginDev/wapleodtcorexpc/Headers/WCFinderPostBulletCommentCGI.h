//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderPostBulletCommentCGI
{
    int _contentType;
    int _commentSource;
    int _postIdentity;
    int _commentScene;
    NSString *_objectId;
    NSString *_objectNonceId;
    unsigned long long _followBulletCommentId;
    unsigned long long _videoTimestamp;
    NSString *_content;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int postIdentity; // @synthesize postIdentity=_postIdentity;
@property(nonatomic) int commentSource; // @synthesize commentSource=_commentSource;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long videoTimestamp; // @synthesize videoTimestamp=_videoTimestamp;
@property(nonatomic) unsigned long long followBulletCommentId; // @synthesize followBulletCommentId=_followBulletCommentId;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithRequestBlock:(CDUnknownBlockType)arg1 commentScene:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

