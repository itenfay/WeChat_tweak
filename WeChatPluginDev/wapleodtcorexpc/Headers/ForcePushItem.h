//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ForcePushItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int expiredTime; // @dynamic expiredTime;
@property(retain, nonatomic) NSString *extinfo; // @dynamic extinfo;
@property(retain, nonatomic) NSString *forcePushId; // @dynamic forcePushId;
@property(retain, nonatomic) NSString *userIcon; // @dynamic userIcon;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

