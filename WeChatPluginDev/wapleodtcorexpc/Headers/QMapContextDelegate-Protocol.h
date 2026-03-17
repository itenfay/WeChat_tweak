//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, QMapContext, QTileRequestParam, TBIndoorBuilding;

@protocol QMapContextDelegate <NSObject>

@optional
- (void)mapContext:(QMapContext *)arg1 markerOverlayShown:(NSArray *)arg2 markerOverlayAvoided:(NSArray *)arg3;
- (_Bool)mapContext:(QMapContext *)arg1 drawFrame:(struct TBDrawParamType *)arg2;
- (void)mapContextMapLoadFinish:(QMapContext *)arg1;
- (void)mapContext:(QMapContext *)arg1 mapStatusChange:(int)arg2;
- (void)mapContext:(QMapContext *)arg1 saveTileData:(NSData *)arg2 withUrl:(NSString *)arg3;
- (void)mapContext:(QMapContext *)arg1 cancelDownloadTile:(QTileRequestParam *)arg2;
- (void)mapContext:(QMapContext *)arg1 downloadTile:(QTileRequestParam *)arg2;
- (void)mapContext:(QMapContext *)arg1 didChangeActiveBuilding:(TBIndoorBuilding *)arg2;
- (void)mapContextDidMapStatusChangedAfterDraw:(QMapContext *)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(QMapContext *)arg1;
@end

