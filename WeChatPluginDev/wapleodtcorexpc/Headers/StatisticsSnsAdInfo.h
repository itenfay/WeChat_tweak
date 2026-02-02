//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatisticsSnsAdInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isVaild;

// Remaining properties
@property(retain, nonatomic) NSString *adPublishId; // @dynamic adPublishId;
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(retain, nonatomic) NSString *adUxInfo; // @dynamic adUxInfo;
@property(retain, nonatomic) NSString *snsStatExt; // @dynamic snsStatExt;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

