//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface VerifyWxPayReqInfo
{
    NSString *_appid;
    NSString *_timeStamp;
    NSString *_nonceStr;
    NSString *_packageStr;
    NSString *_signType;
    NSString *_paySign;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *paySign; // @synthesize paySign=_paySign;
@property(copy, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(copy, nonatomic) NSString *packageStr; // @synthesize packageStr=_packageStr;
@property(copy, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

