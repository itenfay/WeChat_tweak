//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetProfileInfoResponse, NSMutableDictionary, NSString, WAContact;

@interface WAProfileLogicController
{
    NSString *_userName;
    NSMutableDictionary *_sectonType2RowNum;
    CDUnknownBlockType _requestProfileDataCompleteBlock;
    _Bool _bProfileResponseDataReturned;
    GetProfileInfoResponse *_profileResponseData;
    WAContact *_contact;
}

+ (id)localCachePageInfoWithUserName:(id)arg1;
+ (id)localCacheCommentInfoWithUserName:(id)arg1;
+ (double)localCacheAverageScoreWithUserName:(id)arg1;
- (void).cxx_destruct;
@property _Bool bProfileResponseDataReturned; // @synthesize bProfileResponseDataReturned=_bProfileResponseDataReturned;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) GetProfileInfoResponse *profileResponseData; // @synthesize profileResponseData=_profileResponseData;
- (double)averageScore;
- (id)commentInfo;
- (id)profilePageInfo;
- (id)guarantUrl;
- (id)officicalUrl;
- (id)brandRegisterTitle;
- (id)newRelateWeappList;
- (id)relatedBrandList;
- (id)friendLikeList;
- (id)previewMediaList;
- (id)evaluateBasicInfo;
- (void)tryNotifyProfileDataReady;
- (void)onFetchProfileInfo:(id)arg1 userName:(id)arg2;
- (void)requestProfileData:(CDUnknownBlockType)arg1 parameter:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

