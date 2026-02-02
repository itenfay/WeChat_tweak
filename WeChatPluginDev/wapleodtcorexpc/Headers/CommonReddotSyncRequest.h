//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface CommonReddotSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *bizCustomInfoBuffer; // @dynamic bizCustomInfoBuffer;
@property(nonatomic) int bizScene; // @dynamic bizScene;
@property(retain, nonatomic) NSString *keyBuffer; // @dynamic keyBuffer;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSString *reliableNotifyBuffer; // @dynamic reliableNotifyBuffer;
@property(nonatomic) int scene; // @dynamic scene;

@end

