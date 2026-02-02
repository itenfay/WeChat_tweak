//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;
@protocol WCRedEnvelopesNetworkHelperDelegate;

@interface WCRedEnvelopesNetworkHelper
{
    id <WCRedEnvelopesNetworkHelperDelegate> m_delegate;
    NSMutableDictionary *m_dicCGIStartedTime;
}

+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2 value:(unsigned int)arg3;
+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvelopesNetworkHelperDelegate> m_delegate; // @synthesize m_delegate;
- (void)reportHongBaoTenPayRes:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnAsyncBizSubScribe:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnCommonBizHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnEnterpriseHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnLiveStreamHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnOpenIMHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)WCToAsyncBizSubcribeReq:(id)arg1;
- (void)WCToEnterpriseCommonBizReq:(id)arg1;
- (void)WCToEnterpriseHBBizReq:(id)arg1;
- (void)WCToYearHongbaoRequest:(id)arg1;
- (void)WCToHongbaoCommonRequest:(id)arg1;
- (void)WCToOpenIMCommonRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end

