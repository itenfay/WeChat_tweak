//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonUploadInfoObj, NSString;

@protocol EmoticonCameraResultViewDelegate <NSObject>

@optional
- (void)onResultViewClickDoneWithUploadInfo:(EmoticonUploadInfoObj *)arg1;
- (void)onResultViewClickBack;
- (void)stopLoading;
- (void)startLoadingWithText:(NSString *)arg1 block:(_Bool)arg2;
@end

