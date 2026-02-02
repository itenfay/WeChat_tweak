//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, WCFinderFeedImageCDNView, WCFinderStaticCoverInfoView;

@interface WCFinderFriendsAlsoFollowsCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageCDNView *_coverView;
    WCFinderStaticCoverInfoView *_infoView;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)layoutSubviews;
- (void)updateWithDataItem:(id)arg1 commentScene:(int)arg2;
- (void)setupUI;
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

