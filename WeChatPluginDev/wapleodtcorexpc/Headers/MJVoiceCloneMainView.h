//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJMessageBubbleView, MJRecordingControlView, MMUIButton, MMUILabel, NSString;
@protocol MJVoiceCloneMainViewDelegate;

@interface MJVoiceCloneMainView : UIView
{
    id <MJVoiceCloneMainViewDelegate> _delegate;
    MJRecordingControlView *_recordingControlView;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    MMUILabel *_instructionLabel;
    MJMessageBubbleView *_contentBubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJMessageBubbleView *contentBubbleView; // @synthesize contentBubbleView=_contentBubbleView;
@property(retain, nonatomic) MMUILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MJRecordingControlView *recordingControlView; // @synthesize recordingControlView=_recordingControlView;
@property(nonatomic) __weak id <MJVoiceCloneMainViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *regText;
- (void)recordingControlViewDidCancelRecording:(id)arg1;
- (void)recordingControlViewDidStopRecording:(id)arg1;
- (void)recordingControlViewDidStartRecording:(id)arg1;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

