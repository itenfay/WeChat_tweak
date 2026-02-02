//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderRotationHelper : NSObject
{
}

+ (unsigned long long)currentInterfaceOrientationMaskWithTarget:(id)arg1;
+ (void)adjustCurrentSupportOrientationWith:(id)arg1;
+ (void)startForcedRotationToPortraitWithVC:(id)arg1;
+ (void)forceRotateToOrientation:(long long)arg1 vc:(id)arg2;
+ (long long)transferOrientationMaskToOrientation:(unsigned long long)arg1;
+ (unsigned long long)transferToOrientationMaskFromOrientation:(long long)arg1;
- (void)dismissActionSheetWindowIfNeeded;

@end

