//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol GetDefaultRedPacketSkinCgiDelegate;

@interface GetDefaultRedPacketSkinCgi
{
    id <GetDefaultRedPacketSkinCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GetDefaultRedPacketSkinCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)cacheResponse:(id)arg1;
- (id)processCacheDataBeforeSetAsResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startRequestWithLocalCache:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

