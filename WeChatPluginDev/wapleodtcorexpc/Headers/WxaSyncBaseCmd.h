//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WxaSyncBaseCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cmdKey; // @dynamic cmdKey;
@property(nonatomic) unsigned int cmdSequnce; // @dynamic cmdSequnce;
@property(nonatomic) unsigned int dealEndTime; // @dynamic dealEndTime;
@property(nonatomic) unsigned int reportIdKey; // @dynamic reportIdKey;
@property(nonatomic) unsigned int reportKeyOffset; // @dynamic reportKeyOffset;

@end

