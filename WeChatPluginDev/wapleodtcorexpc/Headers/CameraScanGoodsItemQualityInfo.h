//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CameraScanGoodsItemQualityInfo : NSObject
{
    float _possibility;
    int _age;
    int _hit;
}

@property(nonatomic) int hit; // @synthesize hit=_hit;
@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) float possibility; // @synthesize possibility=_possibility;
- (id)qualityInfoString;

@end

