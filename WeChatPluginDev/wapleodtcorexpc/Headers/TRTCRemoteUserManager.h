//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, TRTCCloud;
@protocol TRTCRemoteUserManagerDelegate;

@interface TRTCRemoteUserManager : NSObject
{
    id <TRTCRemoteUserManagerDelegate> _delegate;
    TRTCCloud *_trtc;
    NSMutableDictionary *_users;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) TRTCCloud *trtc; // @synthesize trtc=_trtc;
@property(nonatomic) __weak id <TRTCRemoteUserManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyRemoteUsersChanged;
- (void)setUser:(id)arg1 rotation:(long long)arg2;
- (void)setUser:(id)arg1 fillMode:(long long)arg2;
- (void)setUser:(id)arg1 isAudioMuted:(_Bool)arg2;
- (void)setUser:(id)arg1 isVideoMuted:(_Bool)arg2;
- (void)updateUser:(id)arg1 isAudioEnabled:(_Bool)arg2;
- (void)updateUser:(id)arg1 isVideoEnabled:(_Bool)arg2;
- (void)removeUser:(id)arg1;
- (void)addOrUpdateUser:(id)arg1 roomId:(id)arg2;
- (void)addUser:(id)arg1 roomId:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *mutableRemoteUsers;
@property(readonly, nonatomic) NSDictionary *remoteUsers;
- (id)initWithTrtc:(id)arg1;

@end

