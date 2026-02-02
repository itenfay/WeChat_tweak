//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PRConfigRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *baseid; // @dynamic baseid;
@property(retain, nonatomic) NSMutableArray *condition; // @dynamic condition;
@property(retain, nonatomic) NSString *pid; // @dynamic pid;
@property(nonatomic) unsigned int protover; // @dynamic protover;
@property(retain, nonatomic) NSMutableArray *reqlist; // @dynamic reqlist;
@property(nonatomic) unsigned int sceneflag; // @dynamic sceneflag;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

