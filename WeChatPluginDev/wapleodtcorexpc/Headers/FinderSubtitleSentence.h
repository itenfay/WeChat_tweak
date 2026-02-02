//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderSubtitleSentence : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long beginMs; // @dynamic beginMs;
@property(nonatomic) unsigned long long endMs; // @dynamic endMs;
@property(retain, nonatomic) NSMutableArray *sentenceByLanguage; // @dynamic sentenceByLanguage;

@end

