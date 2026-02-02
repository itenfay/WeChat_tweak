//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayVerifyUserRealNameInfoResp : NSObject
{
    _Bool _is_support_face;
    _Bool _is_need_cert;
    int _retCode;
    unsigned int _scene;
    NSString *_retMsg;
    NSString *_package;
    NSString *_package_sign;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool is_need_cert; // @synthesize is_need_cert=_is_need_cert;
@property(retain, nonatomic) NSString *package_sign; // @synthesize package_sign=_package_sign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool is_support_face; // @synthesize is_support_face=_is_support_face;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;

@end

