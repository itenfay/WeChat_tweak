//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IChatBoxMgrExt <NSObject>

@optional
- (void)onMainFrameShowChatBoxGuideAnimation;
- (void)onChatBoxSessionListChanged;
- (void)onChangeSessionChatBoxFail:(NSString *)arg1 errorMsg:(NSString *)arg2;
- (void)onSessionChatBoxTypeChange:(NSString *)arg1 inChatBox:(_Bool)arg2;
@end

