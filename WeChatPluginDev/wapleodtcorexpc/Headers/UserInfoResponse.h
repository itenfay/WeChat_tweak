//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface UserInfoResponse : NSObject
{
    _Bool _isOpenIM;
    NSString *_username;
    NSString *_avatarPath;
    NSString *_displayName;
    NSString *_gender;
    NSString *_subName;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 avatarPath:(id)arg2 displayName:(id)arg3 gender:(id)arg4 isOpenIM:(_Bool)arg5 subName:(id)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(nonatomic) _Bool isOpenIM; // @synthesize isOpenIM=_isOpenIM;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *avatarPath; // @synthesize avatarPath=_avatarPath;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

