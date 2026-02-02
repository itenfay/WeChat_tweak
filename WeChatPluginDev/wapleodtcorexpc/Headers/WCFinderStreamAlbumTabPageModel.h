//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderStreamLoadingState, WCFinderStreamProfileMusicPlaylist;
@protocol WCFinderStreamAlbumTabPageModelDelegate;

@interface WCFinderStreamAlbumTabPageModel
{
    id <WCFinderStreamAlbumTabPageModelDelegate> _delegate;
    WCFinderStreamLoadingState *_state;
    NSString *_username;
    WCFinderStreamProfileMusicPlaylist *_section;
}

+ (int)tabId;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamProfileMusicPlaylist *section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderStreamAlbumTabPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)reportParamsBlock;
- (void)onPlayList:(id)arg1 appendDataAtRange:(struct _NSRange)arg2;
- (void)bindSDKReport:(id)arg1 forCategory:(id)arg2;
- (void)requestNextPageData;
- (void)onMusicPageDataFilled:(id)arg1;
- (void)_fetchAlbumData;
- (void)requestPageData;
- (_Bool)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
- (id)categoryItems;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

