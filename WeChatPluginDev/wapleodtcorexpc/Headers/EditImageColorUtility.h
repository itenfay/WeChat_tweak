//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EditImageColorUtility : NSObject
{
}

+ (double)colorDifferenceBetweenColorA:(id)arg1 andColorB:(id)arg2;
+ (id)hexColorStringFromColor:(id)arg1 withHash:(_Bool)arg2;
+ (id)getEditImageColorFromColor:(id)arg1 allowDifference:(_Bool)arg2;
+ (id)getEditImageColors;
+ (id)getNewYearEditImageColor;
+ (id)getDefaultEditImageColor;

@end

