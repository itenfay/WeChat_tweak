//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WxaSearchInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) NSString *keywordId; // @dynamic keywordId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(nonatomic) unsigned int sugPos; // @dynamic sugPos;
@property(retain, nonatomic) NSString *wordingId; // @dynamic wordingId;

@end

