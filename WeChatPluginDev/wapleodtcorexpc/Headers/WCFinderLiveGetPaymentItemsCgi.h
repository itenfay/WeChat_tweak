//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveGetPaymentItemsCgi
{
    NSString *_eventTitle;
    NSString *_eventDescription;
    NSString *_referenceId;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSString *referenceId; // @synthesize referenceId=_referenceId;
@property(retain, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(retain, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithPaymentBuffer:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (id)initWithPaymentBuffer:(id)arg1 eventTitle:(id)arg2 eventDescription:(id)arg3 referenceId:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

