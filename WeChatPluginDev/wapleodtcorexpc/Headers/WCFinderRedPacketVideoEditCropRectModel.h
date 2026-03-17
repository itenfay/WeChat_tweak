//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRedPacketVideoEditCropRectModel : NSObject
{
    double _topPercent;
    double _leftPercent;
    double _widthPercent;
    double _heightPercent;
}

@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) double widthPercent; // @synthesize widthPercent=_widthPercent;
@property(nonatomic) double leftPercent; // @synthesize leftPercent=_leftPercent;
@property(nonatomic) double topPercent; // @synthesize topPercent=_topPercent;
- (id)description;
- (id)init;

@end

