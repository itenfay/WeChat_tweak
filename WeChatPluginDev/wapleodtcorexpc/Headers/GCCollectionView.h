//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@interface GCCollectionView : UICollectionView
{
    _Bool _disableChildViewEvent;
}

@property(nonatomic) _Bool disableChildViewEvent; // @synthesize disableChildViewEvent=_disableChildViewEvent;
- (void)relayoutAndReload;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

