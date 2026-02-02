//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseEvent, BaseRequest, NSMutableArray, NSString, QueryWeChatWalletResponse, WalletLocationInfo;

@interface QueryWeChatWalletRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int balanceVersion; // @dynamic balanceVersion;
@property(retain, nonatomic) BaseEvent *baseEvent; // @dynamic baseEvent;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindTypeCond; // @dynamic bindTypeCond;
@property(retain, nonatomic) QueryWeChatWalletResponse *cacheResp; // @dynamic cacheResp;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) WalletLocationInfo *clientLocationInfo; // @dynamic clientLocationInfo;
@property(retain, nonatomic) NSMutableArray *installed3RdAppList; // @dynamic installed3RdAppList;
@property(nonatomic) int isDeviceOpenTouch; // @dynamic isDeviceOpenTouch;
@property(nonatomic) int isRealTime; // @dynamic isRealTime;
@property(nonatomic) int isRoot; // @dynamic isRoot;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

