//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;
@protocol MJVoiceCloneProgressMaskViewDelegate;

@interface MJVoiceCloneProgressMaskView
{
    id <MJVoiceCloneProgressMaskViewDelegate> _mj_delegate;
    MMUIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MJVoiceCloneProgressMaskViewDelegate> mj_delegate; // @synthesize mj_delegate=_mj_delegate;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

