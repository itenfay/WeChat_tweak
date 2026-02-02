//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SearchScreenCastAppMsgReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizusername; // @dynamic bizusername;
@property(retain, nonatomic) NSString *context; // @dynamic context;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned int reqCount; // @dynamic reqCount;

@end

