//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString, StarAuthor, StarCdnInfo;

@interface StarOpt : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StarAuthor *author; // @dynamic author;
@property(retain, nonatomic) NSData *bdata; // @dynamic bdata;
@property(retain, nonatomic) NSString *bid; // @dynamic bid;
@property(nonatomic) unsigned int btype; // @dynamic btype;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) StarCdnInfo *screenshot; // @dynamic screenshot;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

