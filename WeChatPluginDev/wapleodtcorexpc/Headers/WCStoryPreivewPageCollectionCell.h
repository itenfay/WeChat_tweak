//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCStoryPreviewPageView;

@interface WCStoryPreivewPageCollectionCell : UICollectionViewCell
{
    WCStoryPreviewPageView *_pageView;
}

@property(retain, nonatomic) WCStoryPreviewPageView *pageView; // @synthesize pageView=_pageView;

@end

