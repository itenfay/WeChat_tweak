//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetProfileInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *lanType; // @dynamic lanType;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *sessionBuff; // @dynamic sessionBuff;
@property(nonatomic) int srcScene; // @dynamic srcScene;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

