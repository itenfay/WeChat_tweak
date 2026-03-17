//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayRealnameVerifyParentCgiDeleagte;

@interface WCPayRealnameVerifyParentCgi : NSObject
{
    id <WCPayRealnameVerifyParentCgiDeleagte> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayRealnameVerifyParentCgiDeleagte> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)init;

@end

