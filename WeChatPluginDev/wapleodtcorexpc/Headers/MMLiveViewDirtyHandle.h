//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface MMLiveViewDirtyHandle : NSObject
{
    _Bool _isDirty;
    UIView *_rootView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (void)notifyRefresh;
- (void)forceLiveDirty;
- (void)dirty;

@end

