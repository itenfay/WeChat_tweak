//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CheckExternalUrlResp;

@interface WCBizSchemeHandleContext : NSObject
{
    _Bool _isLogin;
    CheckExternalUrlResp *_resp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CheckExternalUrlResp *resp; // @synthesize resp=_resp;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;

@end

