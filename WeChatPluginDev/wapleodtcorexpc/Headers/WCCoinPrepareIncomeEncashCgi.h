//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PrepareIncomeEncashRequest, PrepareIncomeEncashResponse;
@protocol WCCoinPrepareIncomeEncashCgiDelegate;

@interface WCCoinPrepareIncomeEncashCgi
{
    PrepareIncomeEncashResponse *_response;
    id <WCCoinPrepareIncomeEncashCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinPrepareIncomeEncashCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PrepareIncomeEncashResponse *response; // @synthesize response=_response;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(retain, nonatomic) PrepareIncomeEncashRequest *request; // @dynamic request;

@end

