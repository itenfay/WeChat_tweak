//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface WCAdAlphaVideoOneToOneFilter : CIFilter
{
    CIImage *inputImage;
}

- (id)outputImage;
- (id)init;

@end

