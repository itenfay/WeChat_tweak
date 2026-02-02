//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UserAvatarInfo, UserAvatarItem;

@interface WAAppAuthInfoData
{
    unsigned int _state;
    NSString *_appid;
    NSString *_scopeKey;
    NSString *_scopeDesc;
    UserAvatarInfo *_avatarInfo;
    NSString *_subDesc;
    NSString *_authWording;
    NSString *_bottomDesc;
    NSString *_scopeSecDesc;
    NSString *_itemTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *scopeSecDesc; // @synthesize scopeSecDesc=_scopeSecDesc;
@property(retain, nonatomic) NSString *bottomDesc; // @synthesize bottomDesc=_bottomDesc;
@property(retain, nonatomic) NSString *authWording; // @synthesize authWording=_authWording;
@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc=_subDesc;
@property(retain, nonatomic) UserAvatarInfo *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(copy, nonatomic) NSString *scopeKey; // @synthesize scopeKey=_scopeKey;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(readonly, nonatomic) UserAvatarItem *selectedAvatarItem;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

