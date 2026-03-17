//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderEncodeHelper : NSObject
{
}

+ (id)parameterSetDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isAnnexB:(_Bool)arg2 isHevc:(_Bool)arg3;
+ (id)encodedDataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 isIFrame:(_Bool)arg2 isAnnexB:(_Bool)arg3 isHevc:(_Bool)arg4;
+ (_Bool)isIFrame:(struct opaqueCMSampleBuffer *)arg1;

@end

