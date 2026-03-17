//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DirectionsRequestItem, QPolyline;

@protocol IMapDirectionsMgrExt <NSObject>

@optional
- (void)OnRequestDirectionsError:(int)arg1;
- (void)OnGetDirections:(QPolyline *)arg1 RequestItem:(DirectionsRequestItem *)arg2;
@end

