//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage;

@interface QGroundOverlay
{
    CDStruct_02837cd9 _boundingRect;
    UIImage *_icon;
}

+ (CDStruct_3ec1b870)calcaulateBounds:(struct CGPoint)arg1 icon:(id)arg2 position:(const struct CLLocationCoordinate2D *)arg3 zoomLevel:(double *)arg4;
+ (id)groundOverlayWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 anchor:(struct CGPoint)arg3 icon:(id)arg4;
+ (id)groundOverlayWithBounds:(CDStruct_3ec1b870)arg1 icon:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)recordGLoverlayCount:(id)arg1;
- (_Bool)validateDisplayLevelParam:(long long)arg1;
- (void)destoryImpl;
- (void *)createImpl;
- (void)doUpdateBitmapForImpl:(void *)arg1;
- (void)setGroundOverlayWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 anchor:(struct CGPoint)arg3 icon:(id)arg4;
- (void)setGroundOverlayWithBounds:(CDStruct_3ec1b870)arg1 icon:(id)arg2;
- (void)setOpacity:(double)arg1;
- (void)makeDirty;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (id)initWithBounds:(CDStruct_3ec1b870)arg1 icon:(id)arg2;

@end

