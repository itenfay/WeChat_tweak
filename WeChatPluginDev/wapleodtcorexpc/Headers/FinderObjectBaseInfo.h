//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderObjectBaseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clientExposeCount; // @dynamic clientExposeCount;
@property(nonatomic) unsigned long long clientExposeTimeMs; // @dynamic clientExposeTimeMs;
@property(nonatomic) unsigned long long clientRecvTimeMs; // @dynamic clientRecvTimeMs;
@property(retain, nonatomic) NSString *clientUdfKv; // @dynamic clientUdfKv;
@property(retain, nonatomic) NSString *ecSource; // @dynamic ecSource;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSData *shareBypData; // @dynamic shareBypData;

@end

