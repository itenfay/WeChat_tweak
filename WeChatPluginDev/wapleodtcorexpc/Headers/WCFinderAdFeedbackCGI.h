//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, WCFinderAdFeedbackParams;

@interface WCFinderAdFeedbackCGI
{
    int _feedbackType;
    NSMutableArray *_reasonArray;
    WCFinderAdFeedbackParams *_params;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) WCFinderAdFeedbackParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *reasonArray; // @synthesize reasonArray=_reasonArray;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)needADDeviceInfo;
- (void)createRequest;
- (id)initWithFeedbackType:(int)arg1 reasonArray:(id)arg2 params:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

