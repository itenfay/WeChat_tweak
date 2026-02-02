//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayT2BCPayReportCgiDelegate;

@interface WCPayT2BCPayReportCgi : NSObject
{
    id <WCPayT2BCPayReportCgiDelegate> m_delegate;
}

- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

