//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenAudioFunctionContext, MMListenExptInfo;

@interface MMListenAudioBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int displayType; // @dynamic displayType;
@property(retain, nonatomic) MMListenExptInfo *exptInfo; // @dynamic exptInfo;
@property(retain, nonatomic) MMListenAudioFunctionContext *funcCtx; // @dynamic funcCtx;
@property(nonatomic) unsigned int preloadMarkReason; // @dynamic preloadMarkReason;

@end

