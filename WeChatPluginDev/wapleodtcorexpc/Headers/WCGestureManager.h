//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCGestureManager : NSObject
{
}

+ (id)convertGesturePointsFromStringToSet:(id)arg1;
+ (id)convertGesturePointsFromStringToArray:(id)arg1;
+ (id)standardizeSet:(id)arg1;
+ (double)recognizeGestureSourceSet:(id)arg1 targetSet:(id)arg2;
+ (double)cosDistanceWithSourceVec:(id)arg1 andTargetVec:(id)arg2;

@end

