//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, UIImage, UIImagePickerController;

@protocol ImagePreviewDelegate <NSObject>

@optional
- (void)downloadFailInImagePreview;
- (void)returnFromImagePreview:(_Bool)arg1 andPicker:(UIImagePickerController *)arg2 andImage:(UIImage *)arg3;
- (void)selectFromImagePreview:(UIImagePickerController *)arg1 andImage:(UIImage *)arg2 andData:(NSData *)arg3;
@end

