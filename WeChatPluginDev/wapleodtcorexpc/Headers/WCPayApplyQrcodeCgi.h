//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;
@protocol WCPayApplyQrcodeCgiDelegate;

@interface WCPayApplyQrcodeCgi
{
    id <WCPayApplyQrcodeCgiDelegate> _m_delegate;
    NSData *_saveNotifyInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *saveNotifyInfo; // @synthesize saveNotifyInfo=_saveNotifyInfo;
@property(nonatomic) __weak id <WCPayApplyQrcodeCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1 saveNotifyInfo:(id)arg2;

@end

