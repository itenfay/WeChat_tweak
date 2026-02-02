//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEditImageCropToolBarViewUIConfig : NSObject
{
    _Bool _createRotateBtn;
    _Bool _createCropProportionBtn;
    _Bool _deSelectCropProportionAfterReverting;
    _Bool _proportionCropAtFirstTime;
    _Bool _revertBtnLayoutCenter;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool revertBtnLayoutCenter; // @synthesize revertBtnLayoutCenter=_revertBtnLayoutCenter;
@property(nonatomic) _Bool proportionCropAtFirstTime; // @synthesize proportionCropAtFirstTime=_proportionCropAtFirstTime;
@property(nonatomic) _Bool deSelectCropProportionAfterReverting; // @synthesize deSelectCropProportionAfterReverting=_deSelectCropProportionAfterReverting;
@property(nonatomic) _Bool createCropProportionBtn; // @synthesize createCropProportionBtn=_createCropProportionBtn;
@property(nonatomic) _Bool createRotateBtn; // @synthesize createRotateBtn=_createRotateBtn;

@end

