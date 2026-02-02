//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BaseResponseErrMsg, UIImage;

@protocol settingMyAccountExtInfoLogicDelegate <NSObject>
- (void)onInfoChange;

@optional
- (void)onImgSave;
- (void)onImgChangeEnd:(_Bool)arg1 withError:(BaseResponseErrMsg *)arg2;
- (void)onImgBeginChange:(UIImage *)arg1;
@end

