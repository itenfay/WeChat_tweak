//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol OMCColorAdjustable <NSObject>
@property(readonly, nonatomic) _Bool isColorAdjusted;
@property(nonatomic) float tint;
@property(nonatomic) float hue;
@property(nonatomic) float exposure;
@property(nonatomic) float vibrance;
@property(nonatomic) float temperature;
@property(nonatomic) float saturation;
@property(nonatomic) float contrast;
@property(nonatomic) float brightness;
@end

