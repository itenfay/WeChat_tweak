//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCFinderGetUpLevelProductCGI : NSObject
{
    _Bool _useForLottery;
    unsigned int _targetLevel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) _Bool useForLottery; // @synthesize useForLottery=_useForLottery;
@property(nonatomic) unsigned int targetLevel; // @synthesize targetLevel=_targetLevel;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithTargetLevel:(unsigned int)arg1 useForLottery:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end
