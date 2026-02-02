//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MagicSclFrameSetView, NSString, _TtC6WeChat20MagicSclFrameSetRoot;

@interface _TtC6WeChat16MagicSclFrameSet : NSObject
{
    MISSING_TYPE *name;
    MISSING_TYPE *frameSetId;
    MISSING_TYPE *viewId;
    MISSING_TYPE *width;
    MISSING_TYPE *height;
    MISSING_TYPE *attached;
    MISSING_TYPE *bound;
    MISSING_TYPE *inited;
    MISSING_TYPE *frameSetRoot;
    MISSING_TYPE *containerView;
    MISSING_TYPE *preloadScene;
    MISSING_TYPE *layoutCallback;
    MISSING_TYPE *sizeChangeCallback;
    MISSING_TYPE *attachChangeCallback;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (void)resize;
- (void)redraw;
- (void)detach;
- (void)attach;
- (void)unbind;
- (void)bind;
- (void)updateContainerWithView:(id)arg1;
- (void)initFrameSet;
@property(nonatomic) __weak MagicSclFrameSetView *containerView; // @synthesize containerView;
@property(nonatomic) __weak _TtC6WeChat20MagicSclFrameSetRoot *frameSetRoot; // @synthesize frameSetRoot;
@property(nonatomic) _Bool inited; // @synthesize inited;
@property(nonatomic) _Bool bound; // @synthesize bound;
@property(nonatomic) long long height; // @synthesize height;
@property(nonatomic) long long width; // @synthesize width;
@property(nonatomic) long long viewId; // @synthesize viewId;
@property(nonatomic, readonly) NSString *frameSetId;
@property(nonatomic, readonly) NSString *name;

@end

