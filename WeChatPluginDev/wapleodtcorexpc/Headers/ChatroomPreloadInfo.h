//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpInfo;

@interface ChatroomPreloadInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpInfo *preloadCreateAccountJumpInfo; // @dynamic preloadCreateAccountJumpInfo;
@property(retain, nonatomic) JumpInfo *preloadPremadeH5JumpInfo; // @dynamic preloadPremadeH5JumpInfo;
@property(retain, nonatomic) JumpInfo *preloadProfileJumpInfo; // @dynamic preloadProfileJumpInfo;

@end

