//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface RealNameAuthInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *applyInfo; // @dynamic applyInfo;
@property(nonatomic) int authType; // @dynamic authType;
@property(retain, nonatomic) NSMutableArray *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSString *protocolUrl; // @dynamic protocolUrl;
@property(nonatomic) unsigned int status; // @dynamic status;

@end

