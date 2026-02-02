//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingRecordButton;

@protocol MJShootComposingRecordButtonDelegate <NSObject>

@optional
- (void)stopRecordingInRecordButton:(MJShootComposingRecordButton *)arg1;
- (void)startRecordingInRecordButton:(MJShootComposingRecordButton *)arg1;
- (void)startPhotographInRecordButton:(MJShootComposingRecordButton *)arg1;
@end

