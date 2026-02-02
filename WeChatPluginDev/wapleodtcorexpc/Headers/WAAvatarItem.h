//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAvatarItem : NSObject
{
    unsigned int _avatarId;
    NSString *_nickname;
    NSString *_url;
    NSString *_desc;
}

+ (id)fromOauthAvatarInfo:(id)arg1;
+ (id)fromUserAvatarItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int avatarId; // @synthesize avatarId=_avatarId;

@end

