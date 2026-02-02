//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PstnUserStatus : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int errCode; // @dynamic errCode;
@property(nonatomic) unsigned int errLevel; // @dynamic errLevel;
@property(retain, nonatomic) NSString *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSString *errTitle; // @dynamic errTitle;
@property(nonatomic) unsigned int memberId; // @dynamic memberId;
@property(nonatomic) unsigned int userStatus; // @dynamic userStatus;
@property(nonatomic) unsigned int userStatusKey; // @dynamic userStatusKey;

@end

