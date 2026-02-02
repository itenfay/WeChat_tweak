//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface StatusCommentMessageThumb : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *iconDescription; // @dynamic iconDescription;
@property(retain, nonatomic) NSMutableArray *jumpInfos; // @dynamic jumpInfos;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(nonatomic) long long option; // @dynamic option;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(retain, nonatomic) NSMutableArray *sourceJumpInfos; // @dynamic sourceJumpInfos;
@property(retain, nonatomic) NSString *textStateDescription; // @dynamic textStateDescription;
@property(retain, nonatomic) NSString *thumbPath; // @dynamic thumbPath;
@property(retain, nonatomic) NSString *tid; // @dynamic tid;

@end

