//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GiftAttackAnimationRenderTimeRecord : NSObject
{
    NSString *_animationId;
    double _lastRenderTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property(retain, nonatomic) NSString *animationId; // @synthesize animationId=_animationId;

@end

