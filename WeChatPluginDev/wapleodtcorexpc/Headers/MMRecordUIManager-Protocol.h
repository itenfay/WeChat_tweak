//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol MMRecordUIManager <NSObject>
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)HideRecordTips;
- (void)ShowStartFailTips:(NSError *)arg1;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)resetRecordView;
@end

