//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderGetCommentDetailDataItemCGIParams;

@interface WCFInderGetDetailDataItemCGI
{
    int _scene;
    CDUnknownBlockType _preloadInfoUpdateBlock;
    NSString *_objectId;
    NSString *_encryptedID;
    NSString *_finderUsername;
    NSString *_nonceID;
    NSString *_uxinfo;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    unsigned long long _pullScene;
    WCFinderGetCommentDetailDataItemCGIParams *_paramsModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGetCommentDetailDataItemCGIParams *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(nonatomic) unsigned long long pullScene; // @synthesize pullScene=_pullScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *encryptedID; // @synthesize encryptedID=_encryptedID;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) CDUnknownBlockType preloadInfoUpdateBlock; // @synthesize preloadInfoUpdateBlock=_preloadInfoUpdateBlock;
- (_Bool)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (id)prefetchExtraData;
- (id)cachedHashKey;
- (int)requestType;
- (_Bool)isConsumeRequest;
- (_Bool)isPrefetchRequest;
- (void)reportCGIFinish;
- (void)reportCGIStart;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)customSuccessfulRetCodeArray;
- (void)createRequest;
- (id)initWithObjectId:(id)arg1 encryptedID:(id)arg2 nonceID:(id)arg3 finderUsername:(id)arg4 scene:(int)arg5 pullScene:(unsigned long long)arg6 paramsModel:(id)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;

@end

