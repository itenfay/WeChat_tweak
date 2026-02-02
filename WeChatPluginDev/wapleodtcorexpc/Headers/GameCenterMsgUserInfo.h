//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgUserInfo : NSObject
{
    NSString *_username;
    NSString *_iconUrl;
    NSString *_nickname;
    NSString *_badgeIconUrl;
    NSString *_profileUrl;
    GameJumpInfo *_userJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameJumpInfo *userJumpInfo; // @synthesize userJumpInfo=_userJumpInfo;
@property(retain, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(retain, nonatomic) NSString *badgeIconUrl; // @synthesize badgeIconUrl=_badgeIconUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (id)getProfileUrl;
- (id)getXmlSectionString;

@end

