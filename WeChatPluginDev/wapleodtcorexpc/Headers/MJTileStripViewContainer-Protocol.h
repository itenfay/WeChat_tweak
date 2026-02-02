//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJTileStripView;
@protocol MJTileStripViewManager;

@protocol MJTileStripViewContainer <NSObject>
@property(retain, nonatomic) MJTileStripView *tileStripView;
@property(nonatomic) __weak id <MJTileStripViewManager> tileStripViewManager;
@end

