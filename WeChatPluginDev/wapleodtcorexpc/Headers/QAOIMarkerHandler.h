//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QAOIMarkerHandler : NSObject
{
    int _markerID;
    int _subMarkerID;
    NSString *_annoTextImgKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *annoTextImgKey; // @synthesize annoTextImgKey=_annoTextImgKey;
@property(nonatomic) int subMarkerID; // @synthesize subMarkerID=_subMarkerID;
@property(nonatomic) int markerID; // @synthesize markerID=_markerID;

@end

