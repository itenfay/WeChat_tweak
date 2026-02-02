//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface WCFinderProfileCollectionListStyle : NSObject
{
}

@property(readonly, nonatomic) struct CGSize episodeButtonHitExpandSize;
@property(readonly, nonatomic) struct CGSize moreButtonHitExpandSize;
@property(readonly, nonatomic) struct CGSize collectionItemHitExpandSize;
@property(readonly, nonatomic) NSString *moreBtnDisplayText;
@property(readonly, nonatomic) NSString *nextEpisodeBtnDisplayText;
@property(readonly, nonatomic) NSString *allEpisodeBtnDisplayText;
@property(readonly, nonatomic) double moreBtnHorizontalPadding;
@property(readonly, nonatomic) double episodeBtnLeftMargin;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) double itemTitleIconMargin;
@property(readonly, nonatomic) struct CGSize collectionIconSize;
@property(readonly, nonatomic) struct CGSize listItemsPadding;
@property(readonly, nonatomic) struct UIEdgeInsets listViewPadding;

@end

