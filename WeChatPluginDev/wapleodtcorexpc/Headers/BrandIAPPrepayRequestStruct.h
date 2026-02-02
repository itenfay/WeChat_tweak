//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandIAPPrepayRequestStruct : NSObject
{
    NSString *_appId;
    NSString *_nonceStr;
    NSString *_timestamp;
    NSString *_package;
    NSString *_paySign;
    NSString *_signType;
    NSString *_stepInURL;
    NSString *_extKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extKey; // @synthesize extKey=_extKey;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL=_stepInURL;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign=_paySign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;

@end

