//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCreateParamsModel;

@interface WCFinderCreateLiveCGI
{
    _Bool _isLiveCanceled;
    MMFinderLiveCreateParamsModel *_createLiveParamsModel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) MMFinderLiveCreateParamsModel *createLiveParamsModel; // @synthesize createLiveParamsModel=_createLiveParamsModel;
@property(nonatomic) _Bool isLiveCanceled; // @synthesize isLiveCanceled=_isLiveCanceled;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)mergeLiveCoverImagesFromMediaArray:(id)arg1 request:(id)arg2;
- (void)createRequest;
- (id)initWithCreateLiveParamsModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

