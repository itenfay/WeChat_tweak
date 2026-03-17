//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AddAvatarUploadImageTask, NSString;

@protocol AddAvatarUploadImageTaskDelegate <NSObject>
- (void)onUploadImageFail:(unsigned int)arg1 errMsg:(NSString *)arg2 task:(AddAvatarUploadImageTask *)arg3;
- (void)onUploadImageCompleted:(NSString *)arg1 task:(AddAvatarUploadImageTask *)arg2;
@end

