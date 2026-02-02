//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@protocol TextStateCardListCollectionGestureDelegate;

@interface TextStateCardListCollectionView : UICollectionView
{
    id <TextStateCardListCollectionGestureDelegate> _gestureDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TextStateCardListCollectionGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

@end

