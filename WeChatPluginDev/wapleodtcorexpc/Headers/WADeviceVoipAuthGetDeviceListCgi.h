//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WADeviceVoipAuthGetDeviceListCgiDelegate;

@interface WADeviceVoipAuthGetDeviceListCgi
{
    id <WADeviceVoipAuthGetDeviceListCgiDelegate> _delegate;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <WADeviceVoipAuthGetDeviceListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

