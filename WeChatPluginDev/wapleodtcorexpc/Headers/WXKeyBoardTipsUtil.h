//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXKeyBoardTipsUtil : NSObject
{
}

+ (void)handleJumpPlugin:(id)arg1 scene:(unsigned int)arg2;
+ (void)onClickKeyboardTips:(unsigned int)arg1;
+ (void)onExposeKeyboardTips:(unsigned int)arg1;
+ (_Bool)canShowKeyBoardTips:(unsigned int)arg1;
+ (id)jumpPluginInfoWithScene:(unsigned int)arg1;
+ (id)getTipsWithScene:(unsigned int)arg1 forReport:(_Bool)arg2;
+ (id)getTipsWithScene:(unsigned int)arg1;
+ (void)tryReportKeyboardTipsMsg:(id)arg1;
+ (void)onDidSendVoiceTransText:(id)arg1;
+ (id)tipsItemWithScene:(unsigned int)arg1;

@end

