//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKTVBox, MMFinderLiveTask, MMLiveKtvUserView, MMLiveTaskId, MMUILabel, NSString, UIImageView;

@interface MMLiveKTVMinimizeContentView : UIView
{
    MMLiveTaskId *_taskId;
    unsigned long long _scene;
    long long _currState;
    UIImageView *_musicIconView;
    MMLiveKtvUserView *_singerUserView;
    MMUILabel *_stateLabel;
    NSString *_ktvThemeResourceFetchSessionToken;
    struct CGSize _selfSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ktvThemeResourceFetchSessionToken; // @synthesize ktvThemeResourceFetchSessionToken=_ktvThemeResourceFetchSessionToken;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMLiveKtvUserView *singerUserView; // @synthesize singerUserView=_singerUserView;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(nonatomic) struct CGSize selfSize; // @synthesize selfSize=_selfSize;
@property(nonatomic) long long currState; // @synthesize currState=_currState;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)updateSingerUserView:(id)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerVoicingChanged:(_Bool)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerContactUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveKTVBox *ktvBox;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (double)currContentScale;
- (double)standardWidth;
- (double)stateLabelTopMargin;
- (id)stateLabelFont;
- (double)mainSingerWidgetSizeValue;
- (void)onSelfSizeChanged;
- (void)checkSelfSizeChanged;
- (void)updateStateLabelText;
- (void)updateStateLabelOrigin;
- (void)createStateLabel;
- (void)updateSingerUserHidden;
- (void)createSingerUserView;
- (void)updateMusicIconHidden;
- (void)createMusicIconView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1 Scene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

