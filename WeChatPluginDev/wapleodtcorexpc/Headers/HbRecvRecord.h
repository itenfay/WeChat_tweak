//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface HbRecvRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amt; // @dynamic amt;
@property(retain, nonatomic) NSString *commentId; // @dynamic commentId;
@property(retain, nonatomic) NSData *cover; // @dynamic cover;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int sequence; // @dynamic sequence;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

