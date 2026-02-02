//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayCheckPalmUserResouceCgiDelegate;

@interface WCPayCheckPalmUserResouceCgi
{
    id <WCPayCheckPalmUserResouceCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayCheckPalmUserResouceCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

