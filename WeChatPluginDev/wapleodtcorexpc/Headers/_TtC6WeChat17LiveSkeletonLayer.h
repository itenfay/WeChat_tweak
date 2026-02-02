//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class CALayer, MISSING_TYPE;

@interface _TtC6WeChat17LiveSkeletonLayer : NSObject
{
    MISSING_TYPE *layer;
    MISSING_TYPE *parent;
    MISSING_TYPE *transition;
}

- (id)init;
- (void)clean;
- (void)insertTo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeWithComplete:(CDUnknownBlockType)arg1;
- (void)updateWithColor:(id)arg1;
- (void)layout;
@property(nonatomic, retain) CALayer *layer; // @synthesize layer;

@end
