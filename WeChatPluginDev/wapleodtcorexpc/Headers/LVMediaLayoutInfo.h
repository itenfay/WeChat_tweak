//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LVMediaLayoutInfo : NSObject
{
    _Bool _shouldScaling;
    struct CGSize _originMediaSize;
    struct CGSize _containerSize;
    struct CGSize _cropSize;
    struct CGSize _fullSize;
    struct UIEdgeInsets _cropInsets;
    struct UIEdgeInsets _fullMarginInsets;
}

+ (struct WCShowArea)playerShowAreaForContainerSize:(struct CGSize)arg1 originMediaSize:(struct CGSize)arg2 cropInsets:(struct UIEdgeInsets)arg3;
@property(nonatomic) struct UIEdgeInsets fullMarginInsets; // @synthesize fullMarginInsets=_fullMarginInsets;
@property(nonatomic) struct CGSize fullSize; // @synthesize fullSize=_fullSize;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct UIEdgeInsets cropInsets; // @synthesize cropInsets=_cropInsets;
@property(nonatomic) struct CGSize originMediaSize; // @synthesize originMediaSize=_originMediaSize;
@property(nonatomic) _Bool shouldScaling; // @synthesize shouldScaling=_shouldScaling;
- (struct WCShowArea)playerShowAreaForContainer:(struct CGSize)arg1;
- (void)configFrameForContainer:(id)arg1 imageCropContainer:(id)arg2 imageView:(id)arg3;

@end

