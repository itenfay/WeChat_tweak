//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderSubtitle : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long beginMs; // @dynamic beginMs;
@property(nonatomic) unsigned long long endMs; // @dynamic endMs;
@property(retain, nonatomic) NSMutableArray *languageWording; // @dynamic languageWording;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSMutableArray *sentence; // @dynamic sentence;
@property(nonatomic) unsigned int subtitleId; // @dynamic subtitleId;

@end

