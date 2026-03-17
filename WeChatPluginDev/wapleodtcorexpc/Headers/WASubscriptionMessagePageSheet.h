//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WASubscriptionMessagePageSheetViewModel, WATemplateAudioPlayer;
@protocol WASubscriptionMessagePageSheetDelegate;

@interface WASubscriptionMessagePageSheet : NSObject
{
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    WATemplateAudioPlayer *_audioPlayer;
}

@property(retain, nonatomic) WATemplateAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onDeclineButtonClick;
- (void)onRejectButtonClick;
- (void)onAcceptButtonClick;
- (id)subViewModel;
- (id)subviewClassList;
- (void)playAudio:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetDelegate> authDelegate; // @dynamic authDelegate;

@end

