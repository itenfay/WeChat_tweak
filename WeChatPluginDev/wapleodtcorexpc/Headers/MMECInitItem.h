//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface MMECInitItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(nonatomic) unsigned int reqType; // @dynamic reqType;
@property(retain, nonatomic) NSData *respBuffer; // @dynamic respBuffer;

@end

