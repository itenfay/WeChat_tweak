//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol MMFinderLiveQrCodeReporter <NSObject>

@optional
- (void)onSharedSuccessfullyToMiscellaneousTargets;
- (void)onSharedSuccessfullyToMoments;
- (void)onSharedSuccessfullyToChatWithUsernames:(NSArray *)arg1;
- (void)onShareButtonInvoked;
- (void)onSaveImageButtonInvoked;
- (void)onCancelButtonInvoked;
@end

