//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol UploadStreamVoiceDataMgrDelegate <NSObject>

@optional
- (void)onVoiceTransDisaster:(unsigned int)arg1;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onNetworkError:(unsigned int)arg1;
- (void)onLocalFileOperationError;
- (void)onGetText:(NSArray *)arg1;
@end

