//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameLiteAppInfo, NSMutableArray, NSString;

@interface FileIndex : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *extraHeaderList; // @dynamic extraHeaderList;
@property(nonatomic) unsigned int fileType; // @dynamic fileType;
@property(retain, nonatomic) GameLiteAppInfo *liteApp; // @dynamic liteApp;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(nonatomic) unsigned long long relativeOffset; // @dynamic relativeOffset;
@property(retain, nonatomic) NSString *rid; // @dynamic rid;
@property(nonatomic) unsigned int size; // @dynamic size;

@end

