//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUICollectionView, UIGestureRecognizer;

@protocol MMUICollectionViewGestureRecognizerDelegate <NSObject>

@optional
- (_Bool)gestureRecognizerShouldBeginForCollectionView:(MMUICollectionView *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 ignoreReturnAndCallSuper:(_Bool *)arg3;
@end

