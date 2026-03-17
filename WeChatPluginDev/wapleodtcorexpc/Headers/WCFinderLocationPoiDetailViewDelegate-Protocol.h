//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderLocationPoiDetailViewDelegate <NSObject>
- (_Bool)isCurrentPOIFavorite;
- (void)onUpdateFavSelected:(_Bool)arg1;
- (void)onExpandPOIView;
- (void)onShrinkPOIView;
- (void)onNavigateToPOI:(id)arg1;
- (void)onDragProgressChanged:(double)arg1;
- (void)onLocatingPoiCoordinate:(struct CLLocationCoordinate2D)arg1;
@end

