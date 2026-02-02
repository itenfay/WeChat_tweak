//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LoginQRCodeNotify : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *authUrl; // @dynamic authUrl;
@property(nonatomic) unsigned int expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int pushLoginUrlexpiredTime; // @dynamic pushLoginUrlexpiredTime;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

