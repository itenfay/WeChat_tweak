//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgBubbleInfo : NSObject
{
    NSString *_iconUrl;
    NSString *_desc;
    GameJumpInfo *_bubbleJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameJumpInfo *bubbleJumpInfo; // @synthesize bubbleJumpInfo=_bubbleJumpInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

