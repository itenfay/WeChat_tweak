//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MegaVideoContact : NSObject
{
    NSString *_username;
    NSString *_avatarUrl;
    NSString *_nickname;
    NSNumber *_isFollowed;
    NSNumber *_followState;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 avatarUrl:(id)arg2 nickname:(id)arg3 isFollowed:(id)arg4 followState:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *followState; // @synthesize followState=_followState;
@property(retain, nonatomic) NSNumber *isFollowed; // @synthesize isFollowed=_isFollowed;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

