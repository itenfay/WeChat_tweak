//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NewLifeLikeFeedReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterScene; // @dynamic enterScene;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(nonatomic) _Bool isFavorite; // @dynamic isFavorite;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *searchClickId; // @dynamic searchClickId;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;

@end

