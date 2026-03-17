//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WAGameLiveServiceExt <NSObject>

@optional
- (void)onMMLiveCancel;
- (void)onExitLiveSuccessWithLiveTask;
- (void)onMMLiveStartFinishedWithLiveTask:(NSDictionary *)arg1 startSuccess:(_Bool)arg2;
- (void)onMMLiveWillStart;
- (void)onMMLiveVerifyFinishedWithLiveTask:(NSDictionary *)arg1 verifySuccess:(_Bool)arg2;
@end

