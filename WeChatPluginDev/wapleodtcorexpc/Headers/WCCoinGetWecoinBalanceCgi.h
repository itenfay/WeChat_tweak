//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCoinGetWecoinBalanceCgi
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)getWecoinBalance:(CDUnknownBlockType)arg1;
- (id)init;

@end

