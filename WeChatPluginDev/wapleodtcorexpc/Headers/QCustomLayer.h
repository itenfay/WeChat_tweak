//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, QCustomLayerTileOverlay;

@interface QCustomLayer : NSObject
{
    NSString *_layerID;
    QCustomLayerTileOverlay *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QCustomLayerTileOverlay *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *layerID; // @synthesize layerID=_layerID;

@end

