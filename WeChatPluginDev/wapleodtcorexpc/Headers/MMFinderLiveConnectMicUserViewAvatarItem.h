//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebImageView, NSString;

@interface MMFinderLiveConnectMicUserViewAvatarItem : NSObject
{
    NSString *_username;
    MMWebImageView *_avatarView;
    NSString *_stagingAvatarUri;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *stagingAvatarUri; // @synthesize stagingAvatarUri=_stagingAvatarUri;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)commitStagedUpdate;
@property(readonly, nonatomic) _Bool realAvatarSet;
@property(readonly, nonatomic) NSString *actualAvatarUri;
- (id)initWithImageView:(id)arg1;

@end

