//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface SearchFinderFeedsShare : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *avatar; // @dynamic avatar;
@property(nonatomic) unsigned int feedType; // @dynamic feedType;
@property(nonatomic) unsigned int mediaCount; // @dynamic mediaCount;
@property(retain, nonatomic) NSMutableArray *mediaList; // @dynamic mediaList;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(retain, nonatomic) NSString *tid; // @dynamic tid;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

