//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCSiriContact : NSObject
{
    NSString *_username;
    NSString *_displayName;
    NSString *_avatarUrl;
    NSString *_avatarHDUrl;
    NSArray *_memberAvatarUrls;
    NSString *_termName;
}

+ (void)initialize;
+ (void)PBArrayAdd_termName;
+ (void)PBArrayAdd_memberAvatarUrls;
+ (void)PBArrayAdd_avatarHDUrl;
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_displayName;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *termName; // @synthesize termName=_termName;
@property(retain, nonatomic) NSArray *memberAvatarUrls; // @synthesize memberAvatarUrls=_memberAvatarUrls;
@property(retain, nonatomic) NSString *avatarHDUrl; // @synthesize avatarHDUrl=_avatarHDUrl;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isChatRoom;
- (id)initWithContact:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

