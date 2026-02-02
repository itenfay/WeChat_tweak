//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TBTileOverlayRenderContainer : NSObject
{
    NSMutableArray *_tileOverlayRenders;
}

- (void).cxx_destruct;
- (id)viewForOverlay:(id)arg1;
- (id)tileOverlayViewWithTag:(int)arg1;
- (_Bool)isEmpty;
- (id)tileOverlays;
- (id)removeForTileOverlay:(id)arg1;
- (void)addTileOverlayView:(id)arg1;
- (id)init;

@end

