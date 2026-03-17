//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJThumbnailTileLayer, MJTileReusableAttributes;

@protocol MJReusableTileLayersManager <NSObject>
- (void)enqueueReusableTileLayer:(MJThumbnailTileLayer *)arg1;
- (MJThumbnailTileLayer *)dequeueReusableTileLayerForAttributes:(MJTileReusableAttributes *)arg1;
@end

