//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class WordList, WordMatchConfig;

@interface RealTimeWordInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WordList *blackList; // @dynamic blackList;
@property(retain, nonatomic) WordMatchConfig *config; // @dynamic config;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(retain, nonatomic) WordList *whiteList; // @dynamic whiteList;

@end

