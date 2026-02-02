//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;

@interface MMFinderLiveAudioRoomSwitchSceneConfirmationPageSheet
{
    unsigned long long _scenario;
    CDUnknownBlockType _confirmBlock;
    UILabel *_contentLabel;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) unsigned long long scenario; // @synthesize scenario=_scenario;
- (_Bool)enableConfirm;
- (void)initializeComponents;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)layoutSubviews;
- (id)initForScenario:(unsigned long long)arg1 confirmBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

