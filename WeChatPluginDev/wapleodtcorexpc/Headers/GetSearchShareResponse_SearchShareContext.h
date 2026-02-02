//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface GetSearchShareResponse_SearchShareContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(retain, nonatomic) NSData *extendInfo; // @dynamic extendInfo;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int subType; // @dynamic subType;

@end

