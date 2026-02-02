//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgSecondLineInfo : NSObject
{
    NSString *_secondLineContent;
    NSString *_secondLineIconUrl;
    GameJumpInfo *_secondLineJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameJumpInfo *secondLineJumpInfo; // @synthesize secondLineJumpInfo=_secondLineJumpInfo;
@property(retain, nonatomic) NSString *secondLineIconUrl; // @synthesize secondLineIconUrl=_secondLineIconUrl;
@property(retain, nonatomic) NSString *secondLineContent; // @synthesize secondLineContent=_secondLineContent;

@end

