//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface TransferDepthData : NSObject
{
    float _median;
    UIImage *_depthImage;
}

@property(nonatomic) float median; // @synthesize median=_median;
@property(retain, nonatomic) UIImage *depthImage; // @synthesize depthImage=_depthImage;

@end

