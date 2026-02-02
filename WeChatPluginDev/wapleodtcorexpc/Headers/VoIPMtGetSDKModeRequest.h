//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, VoIPMtUserInfo;

@interface VoIPMtGetSDKModeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoIPMtUserInfo *fromUser; // @dynamic fromUser;
@property(retain, nonatomic) NSString *sdkGroupid; // @dynamic sdkGroupid;
@property(retain, nonatomic) NSMutableArray *userList; // @dynamic userList;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

