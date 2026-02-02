//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FeedRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *coverUrlToken; // @dynamic coverUrlToken;
@property(retain, nonatomic) NSMutableArray *coverUrlWord; // @dynamic coverUrlWord;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSString *fullCoverUrl; // @dynamic fullCoverUrl;
@property(retain, nonatomic) NSString *fullCoverUrlToken; // @dynamic fullCoverUrlToken;
@property(nonatomic) unsigned int modifyTime; // @dynamic modifyTime;
@property(retain, nonatomic) NSMutableArray *shortTitle; // @dynamic shortTitle;

@end

