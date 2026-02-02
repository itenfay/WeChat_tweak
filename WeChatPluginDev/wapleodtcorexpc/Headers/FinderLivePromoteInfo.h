//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderLivePromoteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *businessExtBuffer; // @dynamic businessExtBuffer;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) NSString *jumpId; // @dynamic jumpId;
@property(nonatomic) _Bool needGetJumpInfo; // @dynamic needGetJumpInfo;
@property(retain, nonatomic) NSData *promoteInfoBuffer; // @dynamic promoteInfoBuffer;
@property(retain, nonatomic) NSData *reportExtBuffer; // @dynamic reportExtBuffer;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

