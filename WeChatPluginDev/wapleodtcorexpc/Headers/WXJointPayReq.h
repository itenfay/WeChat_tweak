//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WXJointPayReq
{
    unsigned int _timeStamp;
    NSString *_partnerId;
    NSString *_prepayId;
    NSString *_nonceStr;
    NSString *_package;
    NSString *_sign;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *package; // @synthesize package=_package;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(copy, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;

@end

