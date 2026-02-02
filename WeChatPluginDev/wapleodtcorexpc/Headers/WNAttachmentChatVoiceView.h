//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel;

@interface WNAttachmentChatVoiceView
{
    UILabel *titleLabel;
    UIImageView *playingImageView;
    int viewType;
}

- (void).cxx_destruct;
- (void)OnEndPlayWNAudio:(id)arg1;
- (void)OnBeginPlayWNAudio:(id)arg1;
- (id)getDuration:(int)arg1;
- (void)onClickObject;
- (void)showPlayingView;
- (void)showNormalView;
- (void)layoutView;
- (_Bool)ifLayoutViewByBase;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

