//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface FinderSearchFeedStream : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @dynamic lastBuff;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
@property(nonatomic) unsigned int tabId; // @dynamic tabId;
@property(nonatomic) unsigned int tabInlineSearchScene; // @dynamic tabInlineSearchScene;
@property(retain, nonatomic) NSString *tabTitle; // @dynamic tabTitle;

@end

