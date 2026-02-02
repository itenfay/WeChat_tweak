//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@protocol MMUICollectionViewGestureRecognizerDelegate;

@interface MMUICollectionView : UICollectionView
{
    id <MMUICollectionViewGestureRecognizerDelegate> _gestureDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUICollectionViewGestureRecognizerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

