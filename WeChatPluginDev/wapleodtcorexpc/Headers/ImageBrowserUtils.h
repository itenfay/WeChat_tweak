//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ImageBrowserUtils : NSObject
{
}

+ (void)reportLocalVideoSaveWithMsg:(id)arg1 videoSize:(struct CGSize)arg2;
+ (void)reportLocalVideoSaveWithMsg:(id)arg1 videoPath:(id)arg2;
+ (void)reportLocalImageSaveWithMsg:(id)arg1 image:(id)arg2 qrCodeUrl:(id)arg3;
+ (void)reportLocalImageSaveWithMsg:(id)arg1 imagePath:(id)arg2;
+ (id)localImageSaveReportQueue;
+ (void)animSetViews:(id)arg1 hidden:(_Bool)arg2 duration:(double)arg3;
+ (void)animSetViews:(id)arg1 hidden:(_Bool)arg2;

@end

