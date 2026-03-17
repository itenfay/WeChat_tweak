//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class WCFinderGetTopicRecommendMusicCGIParams;

@interface WCFinderGetTopicRecommendMusicCGI : NSObject
{
    WCFinderGetTopicRecommendMusicCGIParams *_params;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderGetTopicRecommendMusicCGIParams *params; // @synthesize params=_params;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithParams:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end
