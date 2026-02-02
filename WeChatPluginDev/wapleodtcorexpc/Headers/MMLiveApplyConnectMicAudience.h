//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString;

@interface MMLiveApplyConnectMicAudience : NSObject
{
    _Bool _isSelf;
    NSString *_sdkUserId;
    NSString *_displayName;
    NSString *_avatarUrlString;
    NSString *_avatarHDUrlString;
    NSString *_liveMicId;
    NSString *_identityId;
    NSString *_roomId;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(copy, nonatomic) NSString *liveMicId; // @synthesize liveMicId=_liveMicId;
@property(copy, nonatomic) NSString *avatarHDUrlString; // @synthesize avatarHDUrlString=_avatarHDUrlString;
@property(copy, nonatomic) NSString *avatarUrlString; // @synthesize avatarUrlString=_avatarUrlString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;

@end

