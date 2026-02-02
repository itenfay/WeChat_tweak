//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface SugResult_SugItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)diffIdentifier;

// Remaining properties
@property(retain, nonatomic) NSString *cacheJsonResult; // @dynamic cacheJsonResult;
@property(retain, nonatomic) NSData *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSData *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *label; // @dynamic label;
@property(retain, nonatomic) NSString *word; // @dynamic word;
@property(retain, nonatomic) NSString *wordHighlight; // @dynamic wordHighlight;

@end

