//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgContentPic : NSObject
{
    NSString *_contentPicUrl;
    GameJumpInfo *_contentPicJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameJumpInfo *contentPicJumpInfo; // @synthesize contentPicJumpInfo=_contentPicJumpInfo;
@property(retain, nonatomic) NSString *contentPicUrl; // @synthesize contentPicUrl=_contentPicUrl;

@end

