//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiteAppParam, FinderMusicBaikeSummary, MMListenCategoryItem, NSArray, NSString, WCFinderStreamLoadingState, WCFinderStreamProfileMusicPlaylist;
@protocol WCFinderStreamProfileMusicPlaylistDelegate;

@interface WCFinderMusicPlaylistTabPageModel
{
    id <WCFinderStreamProfileMusicPlaylistDelegate> _delegate;
    WCFinderStreamLoadingState *_state;
    NSArray *_sections;
    WCFinderStreamProfileMusicPlaylist *_albumSection;
    FinderLiteAppParam *_postMusicLiteAppParams;
    FinderLiteAppParam *_manageMusicLiteAppParams;
    NSString *_username;
    MMListenCategoryItem *_musicCategory;
    FinderMusicBaikeSummary *_baikeSummary;
}

+ (id)listenIdForMusicItem:(id)arg1;
+ (id)idForCategory:(id)arg1;
+ (id)overviewSectionTypes;
+ (int)tabId;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderMusicBaikeSummary *baikeSummary; // @synthesize baikeSummary=_baikeSummary;
@property(retain, nonatomic) MMListenCategoryItem *musicCategory; // @synthesize musicCategory=_musicCategory;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) FinderLiteAppParam *manageMusicLiteAppParams; // @synthesize manageMusicLiteAppParams=_manageMusicLiteAppParams;
@property(retain, nonatomic) FinderLiteAppParam *postMusicLiteAppParams; // @synthesize postMusicLiteAppParams=_postMusicLiteAppParams;
@property(retain, nonatomic) WCFinderStreamProfileMusicPlaylist *albumSection; // @synthesize albumSection=_albumSection;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderStreamProfileMusicPlaylistDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bindSDKReportAllMusicView:(id)arg1;
- (void)bindSDKReportMusic:(id)arg1 view:(id)arg2;
- (void)bindSDKReportAlubmMore:(id)arg1 sec:(id)arg2;
- (void)bindSDKReportAlubmCard:(id)arg1 album:(id)arg2;
- (id)reportParamsBlock;
- (void)reloadPage;
- (void)fetchPlayListWithCompletion:(CDUnknownBlockType)arg1;
- (void)onClickBaikeMusic;
- (void)onClickAllMusic;
- (void)onClickMusic:(id)arg1 scene:(int)arg2;
- (void)onClickMusic:(id)arg1;
- (void)onClickPlaylist:(id)arg1;
- (_Bool)sectionHasData:(id)arg1;
- (void)requestNextPageData:(_Bool)arg1;
- (int)tingPlayScene;
- (id)viewPageClassName;
- (id)displayName;
- (id)initWithUserName:(id)arg1;
- (id)init;
- (void)_updateMusicOverviewSection:(_Bool)arg1;
- (void)requestPageData;
- (_Bool)shouldDisplayTab;

@end

