//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class UILongPressGestureRecognizer;

@interface WCCollectViewReorder : NSObject
{
    UILongPressGestureRecognizer *_moveGesture;
    CDUnknownBlockType _moveGestureStateChangeBlocks;
}

- (void)moveGestureAction:(id)arg1;
- (void)bindToCollectionView:(id)arg1;
- (id)init;

@end
