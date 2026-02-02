//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class TingItem, TingPlayerContext;

@interface TingAudioFocusRequestContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int operation; // @dynamic operation;
@property(retain, nonatomic) TingPlayerContext *playerContext; // @dynamic playerContext;
@property(retain, nonatomic) TingItem *tingItem; // @dynamic tingItem;

@end

