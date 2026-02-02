//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenItem, NSString;

@interface MMListenItemResponse_Result : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isFilter; // @dynamic isFilter;
@property(retain, nonatomic) MMListenItem *item; // @dynamic item;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;

@end

