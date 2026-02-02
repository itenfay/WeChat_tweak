//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiteAppParam, NSArray, NSString, WCFinderStreamLoadingState;
@protocol WCFinderProfileAudioPageModelDelegate;

@interface WCFinderProfileAudioPageModel
{
    id <WCFinderProfileAudioPageModelDelegate> _delegate;
    NSArray *_sections;
    WCFinderStreamLoadingState *_state;
    FinderLiteAppParam *_postAudioLiteAppParams;
    FinderLiteAppParam *_manageAudioLiteAppParams;
    NSString *_username;
}

+ (void)onClickAudio:(id)arg1 section:(id)arg2 scene:(int)arg3 username:(id)arg4 postLiteAppParams:(id)arg5 navController:(id)arg6;
+ (void)onClickAudio:(id)arg1 section:(id)arg2 username:(id)arg3 postLiteAppParams:(id)arg4 navController:(id)arg5;
+ (id)overviewSectionTypes;
+ (_Bool)allowLimitMode;
+ (int)tabId;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) FinderLiteAppParam *manageAudioLiteAppParams; // @synthesize manageAudioLiteAppParams=_manageAudioLiteAppParams;
@property(retain, nonatomic) FinderLiteAppParam *postAudioLiteAppParams; // @synthesize postAudioLiteAppParams=_postAudioLiteAppParams;
@property(retain, nonatomic) WCFinderStreamLoadingState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <WCFinderProfileAudioPageModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)correctionCollectionCount:(long long)arg1;
- (id)reportParamsBlock;
- (void)onClickAudioCollection:(id)arg1;
- (void)onClickAudio:(id)arg1 section:(id)arg2 postLiteAppParams:(id)arg3 navController:(id)arg4;
- (void)bindSDKReport:(id)arg1 forAudiOCollection:(id)arg2;
- (void)bindSDKReport:(id)arg1 forAudio:(id)arg2 tabName:(id)arg3;
- (void)_requestPageData;
- (void)requestNextPage;
- (void)reloadPage;
- (void)requestPageData;
- (id)init;
- (void)updateOverviewSection:(id)arg1 withAudioSection:(id)arg2 fillCacheItem:(_Bool)arg3;
- (_Bool)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;

@end

