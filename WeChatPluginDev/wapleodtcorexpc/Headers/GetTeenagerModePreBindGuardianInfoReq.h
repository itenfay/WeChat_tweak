//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetTeenagerModePreBindGuardianInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bindScene; // @dynamic bindScene;
@property(retain, nonatomic) NSString *guardianUserName; // @dynamic guardianUserName;
@property(retain, nonatomic) NSString *originalGuardianUserName; // @dynamic originalGuardianUserName;

@end

