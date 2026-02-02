//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WCFinderProfileCollectionListStyle;

@interface WCFinderProfileCollectionListLayout : NSObject
{
    _Bool _forceShowMoreButton;
    _Bool _forbiddenEpisodeButton;
    _Bool _allEpisodeButtonShow;
    _Bool _nextEpisodeButtonShow;
    _Bool _moreButtonShow;
    NSArray *_collectionInfos;
    NSMutableArray *_layoutItems;
    WCFinderProfileCollectionListStyle *_style;
    double _width;
    struct CGPoint _moreButtonOrigin;
    struct UIEdgeInsets _extraInsets;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets extraInsets; // @synthesize extraInsets=_extraInsets;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) WCFinderProfileCollectionListStyle *style; // @synthesize style=_style;
@property(nonatomic) struct CGPoint moreButtonOrigin; // @synthesize moreButtonOrigin=_moreButtonOrigin;
@property(nonatomic) _Bool moreButtonShow; // @synthesize moreButtonShow=_moreButtonShow;
@property(nonatomic) _Bool nextEpisodeButtonShow; // @synthesize nextEpisodeButtonShow=_nextEpisodeButtonShow;
@property(nonatomic) _Bool allEpisodeButtonShow; // @synthesize allEpisodeButtonShow=_allEpisodeButtonShow;
@property(nonatomic) _Bool forbiddenEpisodeButton; // @synthesize forbiddenEpisodeButton=_forbiddenEpisodeButton;
@property(retain, nonatomic) NSMutableArray *layoutItems; // @synthesize layoutItems=_layoutItems;
@property(retain, nonatomic) NSArray *collectionInfos; // @synthesize collectionInfos=_collectionInfos;
@property(nonatomic) _Bool forceShowMoreButton; // @synthesize forceShowMoreButton=_forceShowMoreButton;
- (struct UIEdgeInsets)edgeInsetsAdd:(struct UIEdgeInsets)arg1 otherInsets:(struct UIEdgeInsets)arg2;
- (id)currentEpisodeButtonDisplayText;
- (id)getLayoutItemWithCollectionInfo:(id)arg1;
- (id)displayCollectionName:(id)arg1;
- (struct CGSize)calculateTextSize:(id)arg1;
- (struct CGPoint)episodeButtonOrigin;
- (void)hideAllEpisodeButton;
- (void)showAllEpisodeButton;
- (void)showNextEpisodeButton;
- (double)displayHeight;
- (void)updateLayout;
- (void)updateLayoutWidth:(double)arg1 extraPadding:(struct UIEdgeInsets)arg2;
- (void)_setupState;
- (id)initWithCollectionInfoList:(id)arg1;
- (id)init;

@end

