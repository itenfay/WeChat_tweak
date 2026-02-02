//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface LikeFriendRankRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appusername; // @dynamic appusername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *rankid; // @dynamic rankid;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) NSMutableArray *usernames; // @dynamic usernames;

@end

