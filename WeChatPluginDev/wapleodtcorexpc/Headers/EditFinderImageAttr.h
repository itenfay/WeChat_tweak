//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EditFinderImageAttr : NSObject
{
    NSMutableArray *_unCropImagesArray;
    struct CGRect _fullScreenRectInScreen;
    struct CGRect _cropRectInScreen;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect cropRectInScreen; // @synthesize cropRectInScreen=_cropRectInScreen;
@property(nonatomic) struct CGRect fullScreenRectInScreen; // @synthesize fullScreenRectInScreen=_fullScreenRectInScreen;
@property(retain, nonatomic) NSMutableArray *unCropImagesArray; // @synthesize unCropImagesArray=_unCropImagesArray;
- (id)genEditCropRectWithImageSize:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

