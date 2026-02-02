//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, ResourceMeta;

@interface PRRespNode : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *custom; // @dynamic custom;
@property(retain, nonatomic) ResourceMeta *info; // @dynamic info;
@property(retain, nonatomic) NSMutableArray *infolist; // @dynamic infolist;
@property(nonatomic) unsigned int maxdown; // @dynamic maxdown;
@property(nonatomic) unsigned int network; // @dynamic network;
@property(retain, nonatomic) NSMutableArray *notice; // @dynamic notice;
@property(retain, nonatomic) NSString *pid; // @dynamic pid;
@property(nonatomic) unsigned int ptype; // @dynamic ptype;
@property(nonatomic) _Bool releaseall; // @dynamic releaseall;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

