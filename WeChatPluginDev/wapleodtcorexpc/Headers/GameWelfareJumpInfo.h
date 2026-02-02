//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GameWelfareWxaJumpInfo, H5JumpInfo;

@interface GameWelfareJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) H5JumpInfo *h5JumpInfo; // @dynamic h5JumpInfo;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) GameWelfareWxaJumpInfo *wxaJumpInfo; // @dynamic wxaJumpInfo;

@end

