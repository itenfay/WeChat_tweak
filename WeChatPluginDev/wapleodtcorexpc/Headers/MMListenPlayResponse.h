//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenPlayResponse_MMListenPlayUrl, MMListenPlayResponse_PlatformInfo, MMListenPlayResponse_TryInfo, MMListenPlayResponse_VipInfo, NSMutableArray, NSString;

@interface MMListenPlayResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adWording; // @dynamic adWording;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MMListenPlayResponse_MMListenPlayUrl *encryptPlayUrl; // @dynamic encryptPlayUrl;
@property(nonatomic) int expireTime; // @dynamic expireTime;
@property(nonatomic) _Bool isLimitFree; // @dynamic isLimitFree;
@property(nonatomic) _Bool isNoCopyright; // @dynamic isNoCopyright;
@property(nonatomic) _Bool isSpam; // @dynamic isSpam;
@property(nonatomic) _Bool isTry; // @dynamic isTry;
@property(retain, nonatomic) MMListenPlayResponse_PlatformInfo *platformInfo; // @dynamic platformInfo;
@property(retain, nonatomic) NSString *playUrl; // @dynamic playUrl;
@property(retain, nonatomic) NSMutableArray *playUrls; // @dynamic playUrls;
@property(retain, nonatomic) NSString *replaceFeedId; // @dynamic replaceFeedId;
@property(retain, nonatomic) MMListenPlayResponse_TryInfo *tryInfo; // @dynamic tryInfo;
@property(retain, nonatomic) NSString *tryWording; // @dynamic tryWording;
@property(retain, nonatomic) NSMutableArray *ttsPlayUrls; // @dynamic ttsPlayUrls;
@property(retain, nonatomic) NSString *unplayableMsg; // @dynamic unplayableMsg;
@property(retain, nonatomic) MMListenPlayResponse_VipInfo *vipInfo; // @dynamic vipInfo;

@end

