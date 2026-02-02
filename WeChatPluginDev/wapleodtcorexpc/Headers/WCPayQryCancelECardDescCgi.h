//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QryCancelECardDescReq;
@protocol WCPayQryCancelECardDescCgiDelegate;

@interface WCPayQryCancelECardDescCgi
{
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (void)failWithECardCgiError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayQryCancelECardDescCgiDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) QryCancelECardDescReq *request; // @dynamic request;

@end

