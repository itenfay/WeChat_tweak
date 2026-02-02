//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgSourceInfo : NSObject
{
    _Bool _sourceClickable;
    NSString *_sourceName;
    GameJumpInfo *_sourceJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameJumpInfo *sourceJumpInfo; // @synthesize sourceJumpInfo=_sourceJumpInfo;
@property(nonatomic) _Bool sourceClickable; // @synthesize sourceClickable=_sourceClickable;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;

@end

