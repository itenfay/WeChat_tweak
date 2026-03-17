//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, BaseChatCellView, CMessageWrap, MMUIViewController, NSString;

@protocol RecordViewDelegate <NSObject>

@optional
- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsRecording;
- (void)toRecordStautsPerparing;
- (BaseChatCellView *)getChatCellWithMsg:(CMessageWrap *)arg1;
- (MMUIViewController *)GetCurrentViewController;
- (_Bool)isInPageSheetMode;
- (double)getRecordButtonResponseY;
- (void)toRecordStautsIdle;
- (void)cancelSendMsg;
- (void)sendMsgWithText:(NSString *)arg1;
- (AudioRecorderUserData *)cancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)cancelRecording;
- (void)stopRecording;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
@end

