//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface AffGetWebTransTextRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *fromlang; // @dynamic fromlang;
@property(nonatomic) unsigned int msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *sources; // @dynamic sources;
@property(retain, nonatomic) NSString *tolang; // @dynamic tolang;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

