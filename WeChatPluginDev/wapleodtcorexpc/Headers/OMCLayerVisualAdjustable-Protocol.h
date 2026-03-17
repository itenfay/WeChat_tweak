//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol OMCLayerVisualAdjustable <NSObject>
@property(readonly, nonatomic) NSString *layerBlendingModeName;
@property(nonatomic) unsigned long long layerBlendingMode;
@property(nonatomic) float layerOpacity;
@end

