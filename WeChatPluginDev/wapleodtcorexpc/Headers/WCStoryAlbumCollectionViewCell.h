//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, WCMediaItem, WCMomentsPageContext;

@interface WCStoryAlbumCollectionViewCell : UICollectionViewCell
{
    WCMediaItem *_mediaItem;
    WCMomentsPageContext *_pageContext;
    UIImageView *_playIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

