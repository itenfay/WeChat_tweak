//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol IVoiceReminderExt <NSObject>

@optional
- (void)onDeleteRemindMsgsReturn:(_Bool)arg1;
- (void)onDeleteRemindMsgsReturn:(_Bool)arg1 msgWrap:(CMessageWrap *)arg2;
@end

