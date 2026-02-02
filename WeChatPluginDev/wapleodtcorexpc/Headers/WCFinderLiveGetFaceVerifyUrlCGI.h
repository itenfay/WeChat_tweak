//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveGetFaceVerifyUrlCGI
{
    int _scene;
    NSString *_anchorFinderUsername;
    unsigned long long _objectId;
    unsigned long long _liveId;
    unsigned long long _quotaAmount;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long quotaAmount; // @synthesize quotaAmount=_quotaAmount;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorFinderUsername:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 scene:(int)arg4 quotaAmount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;

@end

