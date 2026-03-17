//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCNotifcationBarConfig : NSObject
{
    _Bool _isRightImgClose;
    struct CGSize _leftImgSize;
    struct CGSize _rightImgSize;
}

@property(nonatomic) _Bool isRightImgClose; // @synthesize isRightImgClose=_isRightImgClose;
@property(nonatomic) struct CGSize rightImgSize; // @synthesize rightImgSize=_rightImgSize;
@property(nonatomic) struct CGSize leftImgSize; // @synthesize leftImgSize=_leftImgSize;

@end

