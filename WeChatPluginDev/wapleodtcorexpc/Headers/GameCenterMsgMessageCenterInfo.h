//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterMsgContentPic, GameCenterMsgSecondLineInfo, GameCenterMsgSender, GameCenterMsgSourceInfo, GameJumpInfo, NSString;

@interface GameCenterMsgMessageCenterInfo : NSObject
{
    _Bool _notInMsgCenter;
    GameJumpInfo *_msgCardInfo;
    GameCenterMsgSender *_msgSender;
    NSString *_userActionSubTitle;
    NSString *_firstLineContent;
    GameCenterMsgSecondLineInfo *_secondLineInfo;
    GameCenterMsgContentPic *_contentPicInfo;
    GameCenterMsgSourceInfo *_sourceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) GameCenterMsgContentPic *contentPicInfo; // @synthesize contentPicInfo=_contentPicInfo;
@property(retain, nonatomic) GameCenterMsgSecondLineInfo *secondLineInfo; // @synthesize secondLineInfo=_secondLineInfo;
@property(retain, nonatomic) NSString *firstLineContent; // @synthesize firstLineContent=_firstLineContent;
@property(retain, nonatomic) NSString *userActionSubTitle; // @synthesize userActionSubTitle=_userActionSubTitle;
@property(retain, nonatomic) GameCenterMsgSender *msgSender; // @synthesize msgSender=_msgSender;
@property(retain, nonatomic) GameJumpInfo *msgCardInfo; // @synthesize msgCardInfo=_msgCardInfo;
@property(nonatomic) _Bool notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;

@end

