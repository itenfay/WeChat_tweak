//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCFinderLiveGetFlowSignUrlCGI
{
    NSString *_anchorFinderUsername;
    unsigned long long _objectId;
    unsigned long long _liveId;
    unsigned long long _quotaAmount;
    NSMutableArray *_packageTypes;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSMutableArray *packageTypes; // @synthesize packageTypes=_packageTypes;
@property(nonatomic) unsigned long long quotaAmount; // @synthesize quotaAmount=_quotaAmount;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithAnchorFinderUsername:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 quotaAmount:(unsigned long long)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

