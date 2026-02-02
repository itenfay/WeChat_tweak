//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface GetOpenIMResourceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) unsigned int subtype; // @dynamic subtype;
@property(retain, nonatomic) NSMutableArray *wordingId; // @dynamic wordingId;

@end

