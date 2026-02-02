//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLocation, MMMusicLiveBaseMsg, MMMusicLiveCommentBaseViewModel, MMMusicLiveViewController, MMMusicShareItem, MusicLiveGetSongStatusResp, MusicLiveGetSongStatusResp_MusicianInfo, MusicSourceViewInfo, NSArray, NSString;
@protocol MusicInteractionStatistics;

@protocol MMMusicLiveViewControllerDelegate <NSObject>
- (id <MusicInteractionStatistics>)musicLiveViewControllerReqeustInteractionStatistics:(MMMusicLiveViewController *)arg1;
- (void)musicLiveViewController:(MMMusicLiveViewController *)arg1 ringBackInfoDisplayViewShowingStatusChanged:(_Bool)arg2;
- (MusicLiveGetSongStatusResp *)onMusicliveViewControllerRequestGetSongStatusResponse:(MMMusicLiveViewController *)arg1;
- (MusicSourceViewInfo *)onMusicLiveViewControllerRequestSourceViewInfo:(MMMusicLiveViewController *)arg1;
- (void)onClickMinimize;
- (void)onClickClose;
- (void)onGetBeatTrackIfNeed;
- (void)onLiveRoomClickLocation:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onLiveRoomLongPressAndExpose:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onLiveRoomLongPressAndCopy:(MMMusicLiveCommentBaseViewModel *)arg1;
- (void)onSlideLyricsPanel:(_Bool)arg1;
- (void)onSlideLyricsViewAlbum:(_Bool)arg1;
- (void)onClickLyricsViewAlbum:(_Bool)arg1;
- (void)onExitLyricsPage:(_Bool)arg1;
- (void)onEnterLyricsPage;
- (void)onDeleteMVExposed;
- (void)onLiveVCAddFavWithSource:(unsigned long long)arg1;
- (void)onShareToWcWithSource:(unsigned long long)arg1;
- (void)onShareToFriends:(NSArray *)arg1 withSource:(unsigned long long)arg2;
- (_Bool)onShouldMenuShowComplain;
- (MMMusicShareItem *)onLiveVCGetMusicShareItem;
- (void)onShareActionSuccess;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickSwitch;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickMVAvatar;
- (void)onClickRetryPostMV;
- (void)onClickDeleteMV;
- (void)onClickOpenRecommendedMVList;
- (void)onToggleLikeMVStatus;
- (void)onClickComment;
- (void)onClickClearContent;
- (void)onClickCreateMV:(unsigned long long)arg1;
- (void)onJumpMusician:(MusicLiveGetSongStatusResp_MusicianInfo *)arg1;
- (void)onClickAudioTypeButton:(MMMusicLiveViewController *)arg1;
- (void)onOpenMusicInfo;
- (void)onOpenStatusSettingWithSource:(unsigned long long)arg1;
- (void)onOpen3rdMusicAppWithType:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)onLiveVCTransitToMVWithMsg:(MMMusicLiveBaseMsg *)arg1;
- (void)onLiveVCSendCommentWithLocation:(FinderLocation *)arg1;
- (void)onLiveVCSendCommentWithContent:(NSString *)arg1;
- (void)onLiveVCMusicResume:(double)arg1;
- (void)onLiveVCMusicPause:(double)arg1;
- (void)onLiveVCMusicSliderDidClick:(double)arg1;
- (void)onLiveVCMusicSliderDidSeek:(double)arg1;
- (void)onLiveVCMusicSliderProgressChanged:(double)arg1 isSliding:(_Bool)arg2;

@optional
- (_Bool)onReqGetLyricFailOrTimeout;
- (NSString *)onGetListenGetLyricResponseLyric;
- (void)onMusicLyricDidSeekToTime:(double)arg1;
- (int)getFavSourceType;
@end

