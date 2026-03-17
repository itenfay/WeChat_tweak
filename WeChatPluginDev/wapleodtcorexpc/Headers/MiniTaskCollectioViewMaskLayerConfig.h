//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MiniTaskCollectioViewMaskLayerConfig : NSObject
{
    double _cornerRadius;
    struct CGRect _leftRect;
    struct CGRect _rightRect;
    struct CGRect _middleRect;
    struct CGRect _outerFrame;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect outerFrame; // @synthesize outerFrame=_outerFrame;
@property(nonatomic) struct CGRect middleRect; // @synthesize middleRect=_middleRect;
@property(nonatomic) struct CGRect rightRect; // @synthesize rightRect=_rightRect;
@property(nonatomic) struct CGRect leftRect; // @synthesize leftRect=_leftRect;

@end

