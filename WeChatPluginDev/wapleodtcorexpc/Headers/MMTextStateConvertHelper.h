//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTextStateConvertHelper : NSObject
{
}

+ (id)getDataItemFromUserName:(id)arg1 model:(id)arg2 ignoreModifyTime:(_Bool)arg3;
+ (id)getDataItemFromUserName:(id)arg1 model:(id)arg2;
+ (id)getDataItemFromUserName:(id)arg1;
+ (id)compressOriginImageForData:(id)arg1;
+ (id)compressThumbImageForData:(id)arg1;
+ (id)imageResize:(id)arg1 andResizeConstraint:(struct CGSize)arg2;
+ (id)syncGetLivePhotoDataItemWithInfo:(id)arg1 videoUrl:(id)arg2 screenSize:(struct CGSize)arg3;
+ (id)syncGetDataItemWithImageInfo:(id)arg1 screenSize:(struct CGSize)arg2;

@end

