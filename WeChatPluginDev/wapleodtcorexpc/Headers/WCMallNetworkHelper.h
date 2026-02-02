//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCMallNetworkHelperDelegate;

@interface WCMallNetworkHelper
{
    id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate; // @synthesize m_oWCMallNetworkHelperDelegate;
- (void)OnGetWCMallPayChargeProxyReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallFunctionListMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)GetWCMallPayChargeProxyRequets:(id)arg1;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)dealloc;
- (id)init;

@end

