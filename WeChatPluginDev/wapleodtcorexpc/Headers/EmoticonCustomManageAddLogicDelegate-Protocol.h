//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddEmoticonWrap;

@protocol EmoticonCustomManageAddLogicDelegate

@optional
- (void)onExchangeEmoticonForSendingFinishedWithWrap:(AddEmoticonWrap *)arg1 isSuccessed:(_Bool)arg2;
- (void)onAddEmoticonPendingUploadWithWrap:(AddEmoticonWrap *)arg1;
- (void)AddEmoticonUploadedButExceedLimitWithWrap:(AddEmoticonWrap *)arg1;
- (void)AddEmoticonFinishedWithWrap:(AddEmoticonWrap *)arg1 IsSuccessed:(_Bool)arg2;
@end

