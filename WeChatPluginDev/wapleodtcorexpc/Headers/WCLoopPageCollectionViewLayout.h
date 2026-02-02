//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol WCLoopPageCollectionViewLayoutDelegate;

@interface WCLoopPageCollectionViewLayout : UICollectionViewFlowLayout
{
    id <WCLoopPageCollectionViewLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCLoopPageCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)collectionViewContentSize;

@end

