//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetRedpacketCoverRecvEntranceResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *emoticonPrize; // @dynamic emoticonPrize;
@property(retain, nonatomic) NSString *entranceUrl; // @dynamic entranceUrl;
@property(nonatomic) unsigned int reqIntervalSecond; // @dynamic reqIntervalSecond;
@property(nonatomic) _Bool showEntrance; // @dynamic showEntrance;

@end

