//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class KVLogHead, NSMutableArray;

@interface AdLogRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) KVLogHead *logHead; // @dynamic logHead;
@property(retain, nonatomic) NSMutableArray *logList; // @dynamic logList;

@end

