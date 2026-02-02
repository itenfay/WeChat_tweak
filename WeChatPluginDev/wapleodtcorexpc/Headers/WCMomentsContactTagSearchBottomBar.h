//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;

@interface WCMomentsContactTagSearchBottomBar : UIView
{
    CDUnknownBlockType _multiSelectBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _doneBlock;
    MMUIButton *_multiSelectButton;
    MMUIButton *_cancelMultiSelectButton;
    MMUIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMUIButton *cancelMultiSelectButton; // @synthesize cancelMultiSelectButton=_cancelMultiSelectButton;
@property(retain, nonatomic) MMUIButton *multiSelectButton; // @synthesize multiSelectButton=_multiSelectButton;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType multiSelectBlock; // @synthesize multiSelectBlock=_multiSelectBlock;
- (void)onClickDoneButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)onClickMultiSelectButton:(id)arg1;
- (void)setMultiSelectState;
- (void)setSingleSelectState;
- (void)setBottomBarState:(_Bool)arg1;
- (void)updateWithSelectCount:(long long)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

