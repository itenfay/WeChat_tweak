//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TingSharedListView;

@interface WCContentItemTingListView
{
    TingSharedListView *_listContentView;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TingSharedListView *listContentView; // @synthesize listContentView=_listContentView;
- (void)onLongTouch;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)throwUrlMessage;
- (id)categoryItem;
- (void)contentItemWillDisplay;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 width:(double)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;

@end

