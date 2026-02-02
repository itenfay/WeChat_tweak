//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderOpBulletCommentCGI
{
    int _opType;
    int _commentScene;
    NSString *_objectId;
    NSString *_objectNonceId;
    unsigned long long _commentId;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithObjectId:(id)arg1 objectNonceId:(id)arg2 commentId:(unsigned long long)arg3 opType:(int)arg4 commentScene:(int)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

