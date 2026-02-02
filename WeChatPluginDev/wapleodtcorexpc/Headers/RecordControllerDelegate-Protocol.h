//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSError, NSString, UIViewController;

@protocol RecordControllerDelegate <NSObject>
- (NSString *)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (UIViewController *)getViewController;

@optional
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (_Bool)CanRemoteRecord;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)ShowTooLongTips;
- (void)ShowStartFailTips:(NSError *)arg1;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(CMessageWrap *)arg1;
- (void)onRecordAddMsg:(CMessageWrap *)arg1;
- (void)onRecordTimeOut;
@end

