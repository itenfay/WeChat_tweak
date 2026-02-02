//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameCenterMsgRemarkInfo, GameJumpInfo, NSString;

@interface GameCenterMsgSender : NSObject
{
    NSString *_msgSenderHeadIconUrl;
    NSString *_msgSenderName;
    NSString *_msgSenderBadgeIconUrl;
    GameJumpInfo *_msgSenderJumpInfo;
    NSString *_remark;
    GameCenterMsgRemarkInfo *_remarkInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgRemarkInfo *remarkInfo; // @synthesize remarkInfo=_remarkInfo;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) GameJumpInfo *msgSenderJumpInfo; // @synthesize msgSenderJumpInfo=_msgSenderJumpInfo;
@property(retain, nonatomic) NSString *msgSenderBadgeIconUrl; // @synthesize msgSenderBadgeIconUrl=_msgSenderBadgeIconUrl;
@property(retain, nonatomic) NSString *msgSenderName; // @synthesize msgSenderName=_msgSenderName;
@property(retain, nonatomic) NSString *msgSenderHeadIconUrl; // @synthesize msgSenderHeadIconUrl=_msgSenderHeadIconUrl;

@end

