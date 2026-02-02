//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PrepareWecoinConsumeRequest, PrepareWecoinConsumeResponse;
@protocol WCCoinPrepareConsumeCgiDelegate;

@interface WCCoinPrepareConsumeCgi
{
    PrepareWecoinConsumeResponse *_response;
    id <WCCoinPrepareConsumeCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinPrepareConsumeCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PrepareWecoinConsumeResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PrepareWecoinConsumeRequest *request; // @dynamic request;

@end

