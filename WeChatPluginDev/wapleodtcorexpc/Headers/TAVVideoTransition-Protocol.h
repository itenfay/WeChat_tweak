//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CIImage, NSString, TAVVideoTransitionRenderInfo;

@protocol TAVVideoTransition <NSObject>
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(copy, nonatomic) NSString *identifier;
- (CIImage *)renderImageWithForegroundImage:(CIImage *)arg1 backgroundImage:(CIImage *)arg2 renderInfo:(TAVVideoTransitionRenderInfo *)arg3;
@end

