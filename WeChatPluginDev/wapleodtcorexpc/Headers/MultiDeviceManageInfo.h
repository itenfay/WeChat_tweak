//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, OnlineInfo;

@interface MultiDeviceManageInfo : NSObject
{
    OnlineInfo *_onlineInfo;
    NSNumber *_cachedLock;
    NSNumber *_cachedAutoLoginEnabled;
    NSNumber *_cachedKeepAliveEnabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *cachedKeepAliveEnabled; // @synthesize cachedKeepAliveEnabled=_cachedKeepAliveEnabled;
@property(retain, nonatomic) NSNumber *cachedAutoLoginEnabled; // @synthesize cachedAutoLoginEnabled=_cachedAutoLoginEnabled;
@property(retain, nonatomic) NSNumber *cachedLock; // @synthesize cachedLock=_cachedLock;
@property(retain, nonatomic) OnlineInfo *onlineInfo; // @synthesize onlineInfo=_onlineInfo;
- (id)displayDeviceName;
- (id)displayDeviceType;
- (id)autoLoginSwitchTip;
- (id)logoutButtonTitle;
- (id)exitConfirmButtonTitle;
- (id)exitTitle;
- (id)helpURL;
- (void)resolveContentWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isKeepAliveEnabled) _Bool keepAliveEnabled;
@property(nonatomic, getter=isAutoLoginEnabled) _Bool autoLoginEnabled;
- (_Bool)showAutoLoginEntrance;
- (void)setLock:(_Bool)arg1;
- (_Bool)isLocked;
- (_Bool)isMute;
- (id)bigIconImage;
- (id)iconImage;
- (_Bool)isEqualToManageInfo:(id)arg1;
- (id)initWithOnlineInfo:(id)arg1;

@end

