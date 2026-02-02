//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMListenCategoryItem, TingItem, TingSharedAudioView;

@interface WCContentItemTingAudioView
{
    TingSharedAudioView *_audioContentView;
    TingItem *_tingItem;
    MMListenCategoryItem *_categoryItem;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(retain, nonatomic) TingSharedAudioView *audioContentView; // @synthesize audioContentView=_audioContentView;
- (void)setPlayButtonHidden:(_Bool)arg1;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onAddListenLater:(id)arg1;
- (id)reportParams;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)throwUrlMessage;
- (void)contentItemWillDisplay;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;

@end

