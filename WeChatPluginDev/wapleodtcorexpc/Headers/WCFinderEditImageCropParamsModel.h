//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderEditImageCropParamsModel : NSObject
{
    struct CGRect _previewImageViewFrame;
    struct CGRect _cropRectInImage;
}

@property(nonatomic) struct CGRect cropRectInImage; // @synthesize cropRectInImage=_cropRectInImage;
@property(nonatomic) struct CGRect previewImageViewFrame; // @synthesize previewImageViewFrame=_previewImageViewFrame;
- (struct CGRect)convertCurRectToImage:(id)arg1;

@end

