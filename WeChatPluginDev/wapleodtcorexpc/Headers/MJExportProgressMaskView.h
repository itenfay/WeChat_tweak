//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;
@protocol MJExportProgressMaskViewDelegate;

@interface MJExportProgressMaskView
{
    id <MJExportProgressMaskViewDelegate> _mj_delegate;
    MMUIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <MJExportProgressMaskViewDelegate> mj_delegate; // @synthesize mj_delegate=_mj_delegate;
- (void)disableCancelAction;
- (void)enableCancelAction;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)setupCancelButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

