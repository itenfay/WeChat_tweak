//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCAudioModule;
@protocol WCAudioModuleDelegate;

@protocol IWCAudioModuleService <NSObject>
+ (NSArray *)getScenesExcludeArray:(NSArray *)arg1;
+ (NSArray *)getAllScenes;
- (WCAudioModule *)getAudioModuleWithScene:(int)arg1 groupName:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1 groupName:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)cancelInterruptionNotifyWithScene:(int)arg1;
- (_Bool)isAudioModuleInterrupt:(int)arg1;
- (NSArray *)currentInterruptModules;
- (_Bool)isAudioModuleActive:(int)arg1;
- (NSArray *)currentActiveModules;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(NSString *)arg2 identifier:(NSString *)arg3 mixList:(NSArray *)arg4;
- (_Bool)canSetActiveWithScene:(int)arg1 groupName:(NSString *)arg2 identifier:(NSString *)arg3;
- (_Bool)canSetActiveWithScene:(int)arg1 mixList:(NSArray *)arg2;
- (_Bool)canSetActiveWithScene:(int)arg1;
- (_Bool)resumeInterruptModule;
- (void)showConflictWording;
- (NSString *)getConflictWording;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 groupName:(NSString *)arg3 identifier:(NSString *)arg4 options:(unsigned long long)arg5 listener:(id <WCAudioModuleDelegate>)arg6;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(NSString *)arg3 options:(unsigned long long)arg4 listener:(id <WCAudioModuleDelegate>)arg5;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 identifier:(NSString *)arg3 listener:(id <WCAudioModuleDelegate>)arg4;
- (_Bool)setActive:(_Bool)arg1 scene:(int)arg2 listener:(id <WCAudioModuleDelegate>)arg3;
@end

