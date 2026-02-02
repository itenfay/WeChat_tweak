//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ConsumeWecoinRequest, ConsumeWecoinResponse;
@protocol WCCoinConsumeCGIDelegate;

@interface WCCoinConsumeCGI
{
    ConsumeWecoinResponse *_response;
    id <WCCoinConsumeCGIDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinConsumeCGIDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ConsumeWecoinResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) ConsumeWecoinRequest *request; // @dynamic request;

@end

