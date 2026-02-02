//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveBadgeInfo, NSString;

@interface MMFinderLiveAudienceSuperfanSwitchRoleDisplayInfo : NSObject
{
    _Bool _isCurrentRole;
    NSString *_nick;
    long long _aliasType;
    NSString *_headUrl;
    FinderLiveBadgeInfo *_superfanBadge;
}

+ (id)infoWithNick:(id)arg1 headUrl:(id)arg2 aliasType:(long long)arg3 isCurrentRole:(_Bool)arg4 superfanBadge:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveBadgeInfo *superfanBadge; // @synthesize superfanBadge=_superfanBadge;
@property(nonatomic) _Bool isCurrentRole; // @synthesize isCurrentRole=_isCurrentRole;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(nonatomic) long long aliasType; // @synthesize aliasType=_aliasType;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (id)getAliasDesc;

@end

