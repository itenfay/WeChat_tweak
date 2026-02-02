//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface PayReq
{
    unsigned int timeStamp;
    NSString *nonceStr;
    NSString *package;
    NSString *partnerId;
    NSString *prepayId;
    NSString *sign;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;

@end

