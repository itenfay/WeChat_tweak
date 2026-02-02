//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAudioPlayerController, MMUIView, NSString;

@interface FavVoiceDetaiViewController
{
    MMUIView *m_contentView;
    FavAudioPlayerController *m_audioPlayerCtrl;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onFavActionSheetSelectedItemWithType:(long long)arg1;
- (id)getCurrentViewController;
- (void)onAction:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

