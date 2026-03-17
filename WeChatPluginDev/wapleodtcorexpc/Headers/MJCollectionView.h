//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>
typedef void (^CDUnknownBlockType)(void);

@interface MJCollectionView : UICollectionView
{
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)reloadDataCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;

@end
