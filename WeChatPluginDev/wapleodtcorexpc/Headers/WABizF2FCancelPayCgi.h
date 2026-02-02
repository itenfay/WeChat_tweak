//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WABizF2FCancelPayCgiDelegate;

@interface WABizF2FCancelPayCgi
{
    id <WABizF2FCancelPayCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

