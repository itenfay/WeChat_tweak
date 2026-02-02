//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface SightThumbModel : NSObject
{
    UIImage *_thumb;
    double _thumbTimeStamp;
    double _timeCost;
}

- (void).cxx_destruct;
@property(nonatomic) double timeCost; // @synthesize timeCost=_timeCost;
@property(nonatomic) double thumbTimeStamp; // @synthesize thumbTimeStamp=_thumbTimeStamp;
@property(retain, nonatomic) UIImage *thumb; // @synthesize thumb=_thumb;

@end

