//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderModFeedOptionModel;

@interface WCFinderModFeedCgi
{
    NSString *_feedId;
    NSString *_fromUsername;
    WCFinderModFeedOptionModel *_optionModel;
    CDUnknownBlockType _sucBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType sucBlock; // @synthesize sucBlock=_sucBlock;
@property(retain, nonatomic) WCFinderModFeedOptionModel *optionModel; // @synthesize optionModel=_optionModel;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFeedId:(id)arg1 fromUsername:(id)arg2 optionModel:(id)arg3 sucBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

