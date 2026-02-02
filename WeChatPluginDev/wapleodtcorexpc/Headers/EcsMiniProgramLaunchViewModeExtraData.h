//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface EcsMiniProgramLaunchViewModeExtraData : NSObject
{
    NSNumber *_isLaunchViewMode;
    NSNumber *_containerViewX;
    NSNumber *_containerViewY;
    NSNumber *_containerViewWidth;
    NSNumber *_containerViewHeight;
    NSNumber *_containerViewBorderRadius;
    NSNumber *_needAnimatedPush;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithIsLaunchViewMode:(id)arg1 containerViewX:(id)arg2 containerViewY:(id)arg3 containerViewWidth:(id)arg4 containerViewHeight:(id)arg5 containerViewBorderRadius:(id)arg6 needAnimatedPush:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *needAnimatedPush; // @synthesize needAnimatedPush=_needAnimatedPush;
@property(retain, nonatomic) NSNumber *containerViewBorderRadius; // @synthesize containerViewBorderRadius=_containerViewBorderRadius;
@property(retain, nonatomic) NSNumber *containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(retain, nonatomic) NSNumber *containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
@property(retain, nonatomic) NSNumber *containerViewY; // @synthesize containerViewY=_containerViewY;
@property(retain, nonatomic) NSNumber *containerViewX; // @synthesize containerViewX=_containerViewX;
@property(retain, nonatomic) NSNumber *isLaunchViewMode; // @synthesize isLaunchViewMode=_isLaunchViewMode;
- (id)toList;

@end

