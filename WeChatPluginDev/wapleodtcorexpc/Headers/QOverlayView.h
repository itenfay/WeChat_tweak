//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QOverlayContainer;
@protocol QOverlay;

@interface QOverlayView : NSObject
{
    int _zIndex;
    int _strokeId;
    int _fillId;
    id <QOverlay> _overlay;
    long long _displayLevel;
    QOverlayContainer *_container;
}

- (void).cxx_destruct;
@property(nonatomic) int fillId; // @synthesize fillId=_fillId;
@property(nonatomic) int strokeId; // @synthesize strokeId=_strokeId;
@property(nonatomic) __weak QOverlayContainer *container; // @synthesize container=_container;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) long long displayLevel; // @synthesize displayLevel=_displayLevel;
@property(retain, nonatomic) id <QOverlay> overlay; // @synthesize overlay=_overlay;
- (void)updateOverlayPoints:(struct CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)onWillRemove;
- (void)onDidAdd;
- (void)prepareForUse;
- (id)init;

@end

