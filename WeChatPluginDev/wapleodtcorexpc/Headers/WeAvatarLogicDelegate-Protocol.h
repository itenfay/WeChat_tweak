//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, WeAvatarLogic;

@protocol WeAvatarLogicDelegate <NSObject>
- (void)onWeAvatarSEI:(WeAvatarLogic *)arg1 data:(NSString *)arg2;
- (void)onWeAvatarEvent:(WeAvatarLogic *)arg1 data:(NSMutableArray *)arg2;
- (void)onWeAvatarPreload:(WeAvatarLogic *)arg1;
- (void)onWeAvatarReady:(WeAvatarLogic *)arg1 isOpen:(_Bool)arg2;
@end

