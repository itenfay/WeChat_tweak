//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QTileOverlayHandler;

@interface QTileOverlayInternalContext : NSObject
{
    QTileOverlayHandler *_payload;
    CDUnknownBlockType _loadTileBlock;
    CDUnknownBlockType _writeTileBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType writeTileBlock; // @synthesize writeTileBlock=_writeTileBlock;
@property(copy, nonatomic) CDUnknownBlockType loadTileBlock; // @synthesize loadTileBlock=_loadTileBlock;
@property(nonatomic) __weak QTileOverlayHandler *payload; // @synthesize payload=_payload;

@end

