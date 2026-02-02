//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandMPVideoUtility : NSObject
{
}

+ (_Bool)canShareTimeline;
+ (id)genVideoFormatPathWithVid:(id)arg1;
+ (id)genVideoTempPathWithVid:(id)arg1;
+ (id)wcDataItemFromMsgWrap:(id)arg1 postSource:(unsigned int *)arg2;
+ (void)openBrandVideoPageWithMsg:(id)arg1 navigationController:(id)arg2 delegate:(id)arg3 eScene:(unsigned long long)arg4 originRect:(struct CGRect)arg5 thumbImage:(id)arg6 preLoadThumbUrl:(id)arg7 videoInitialTime:(double)arg8;
+ (void)openBrandVideoPageWithOpenParam:(id)arg1 navigationController:(id)arg2 delegate:(id)arg3 eScene:(unsigned long long)arg4;

@end

