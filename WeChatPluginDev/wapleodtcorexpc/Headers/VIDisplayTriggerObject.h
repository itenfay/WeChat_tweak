//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface VIDisplayTriggerObject : NSObject
{
    CDUnknownBlockType _triggerOperation;
}

@property(copy, nonatomic) CDUnknownBlockType triggerOperation; // @synthesize triggerOperation=_triggerOperation;
- (void)trigger;

@end
