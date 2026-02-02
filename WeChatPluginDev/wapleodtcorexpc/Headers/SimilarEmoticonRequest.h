//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChildMode, LbsLocationNew, NSString;

@interface SimilarEmoticonRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) ChildMode *childMode; // @dynamic childMode;
@property(retain, nonatomic) NSString *emojiUrl; // @dynamic emojiUrl;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int requestType; // @dynamic requestType;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int tab; // @dynamic tab;

@end

