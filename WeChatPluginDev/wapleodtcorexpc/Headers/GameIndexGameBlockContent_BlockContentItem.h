//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameIndexGameBlockContent_ActRecomTpl, GameIndexGameBlockContent_SingleLineContentTpl, NSString;

@interface GameIndexGameBlockContent_BlockContentItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GameIndexGameBlockContent_ActRecomTpl *actRecom; // @dynamic actRecom;
@property(retain, nonatomic) NSString *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) NSString *moduleTitle; // @dynamic moduleTitle;
@property(nonatomic) unsigned int positionId; // @dynamic positionId;
@property(retain, nonatomic) GameIndexGameBlockContent_SingleLineContentTpl *singleLineContent; // @dynamic singleLineContent;
@property(nonatomic) unsigned int tplId; // @dynamic tplId;

@end

