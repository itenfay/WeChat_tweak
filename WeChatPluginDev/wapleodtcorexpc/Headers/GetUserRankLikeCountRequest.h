//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetUserRankLikeCountRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appusername; // @dynamic appusername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *championname; // @dynamic championname;
@property(nonatomic) _Bool latestrank; // @dynamic latestrank;
@property(retain, nonatomic) NSString *rankid; // @dynamic rankid;

@end

