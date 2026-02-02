//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QMarkerHandler : NSObject
{
    int _markerID;
    NSString *_engineMarkerImageKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *engineMarkerImageKey; // @synthesize engineMarkerImageKey=_engineMarkerImageKey;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;

@end

