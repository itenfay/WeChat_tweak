//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCoverDataHelper : NSObject
{
}

+ (id)getSavePathWithImage:(id)arg1 targetSize:(struct CGSize)arg2 chooseTime:(double)arg3;
+ (void)fillCropInfoToMediaInfoByCropRectModel:(id)arg1 modeStyle:(int)arg2 sourceType:(int)arg3 coverImage:(id)arg4 fullCoverImage:(id)arg5 coverTimeStamp:(double)arg6 targetSize:(struct CGSize)arg7 editTextWidgets:(id)arg8 style:(unsigned long long)arg9 toPostSession:(id)arg10;
+ (id)buildOpenCoverVCParamsFromPostSession:(id)arg1 style:(unsigned long long)arg2;

@end

