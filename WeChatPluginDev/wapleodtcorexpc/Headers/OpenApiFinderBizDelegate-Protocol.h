//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TranslateLinkResult;

@protocol OpenApiFinderBizDelegate <NSObject>

@optional
- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)onAuthDidSuccessWithResult:(TranslateLinkResult *)arg1;
- (void)onAuthDidSuccess;
- (void)onAuthRejectJumpInfo;
@end

