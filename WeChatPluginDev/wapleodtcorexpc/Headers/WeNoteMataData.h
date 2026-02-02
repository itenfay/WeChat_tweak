//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WeNoteSourceInfo;

@interface WeNoteMataData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool editable; // @dynamic editable;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) WeNoteSourceInfo *sourceInfo; // @dynamic sourceInfo;

@end

