//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WADeviceVoipAuthDeviceItem;
@protocol WADeviceVoipAuthModCgiDelegate;

@interface WADeviceVoipAuthModCgi
{
    id <WADeviceVoipAuthModCgiDelegate> _delegate;
    WADeviceVoipAuthDeviceItem *_deviceItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WADeviceVoipAuthDeviceItem *deviceItem; // @synthesize deviceItem=_deviceItem;
@property(nonatomic) __weak id <WADeviceVoipAuthModCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

