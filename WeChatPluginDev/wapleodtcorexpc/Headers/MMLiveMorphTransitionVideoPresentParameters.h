//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMLiveMorphTransitionVideoPresentParameters
{
    _Bool _targetHasBottomView;
    _Bool _hasScaledAudioRoomView;
    UIView *_micUserView;
    UIView *_micUserBackContainerView;
    UIView *_audioRoomView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasScaledAudioRoomView; // @synthesize hasScaledAudioRoomView=_hasScaledAudioRoomView;
@property(retain, nonatomic) UIView *audioRoomView; // @synthesize audioRoomView=_audioRoomView;
@property(retain, nonatomic) UIView *micUserBackContainerView; // @synthesize micUserBackContainerView=_micUserBackContainerView;
@property(retain, nonatomic) UIView *micUserView; // @synthesize micUserView=_micUserView;
@property(nonatomic) _Bool targetHasBottomView; // @synthesize targetHasBottomView=_targetHasBottomView;

@end

