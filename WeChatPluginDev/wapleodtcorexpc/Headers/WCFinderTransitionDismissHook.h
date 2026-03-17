//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCFinderTransitionDismissHook : NSObject
{
    CDUnknownBlockType _willDismiss;
    CDUnknownBlockType _endDismiss;
}

@property(copy, nonatomic) CDUnknownBlockType endDismiss; // @synthesize endDismiss=_endDismiss;
@property(copy, nonatomic) CDUnknownBlockType willDismiss; // @synthesize willDismiss=_willDismiss;

@end
