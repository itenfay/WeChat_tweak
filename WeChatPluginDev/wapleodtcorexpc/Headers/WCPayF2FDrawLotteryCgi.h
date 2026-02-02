//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayF2FDrawLotteryCgiDelegate;

@interface WCPayF2FDrawLotteryCgi
{
    id <WCPayF2FDrawLotteryCgiDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startRequestWithoutNotify:(id)arg1;
- (void)startRequest:(id)arg1;

@end

