//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetOnlineInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) unsigned int lastOnlineCount; // @dynamic lastOnlineCount;
@property(retain, nonatomic) NSMutableArray *lastOnlineList; // @dynamic lastOnlineList;
@property(nonatomic) unsigned int roamFlag; // @dynamic roamFlag;

@end

