//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YGStyleLayoutUtility : NSObject
{
}

+ (struct CGSize)calculateViewSize:(id)arg1 constrainedWidth:(double)arg2 constrainedHeight:(double)arg3;
+ (struct YGValue)percentValue:(double)arg1;
+ (struct YGValue)pointValue:(double)arg1;
+ (double)roundPixelValue:(double)arg1;
+ (struct YGConfig *)globalConfig;

@end

