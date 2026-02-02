//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QHeatTileOverlay;

@interface QHeatTileOverlayView : NSObject
{
}

- (void)reloadData;
@property(readonly, nonatomic) QHeatTileOverlay *tileOverlay;
- (id)initWithTileOverlay:(id)arg1;

@end

