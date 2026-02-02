//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QTileOverlay, QTileOverlayManager, QTileOverlayView;

@protocol QTileOverlayManagerDelegate <NSObject>
- (QTileOverlayView *)tileOverlayManager:(QTileOverlayManager *)arg1 viewForTileOverlay:(QTileOverlay *)arg2;
@end

