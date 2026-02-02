//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel;

@interface MJInspectorToolBar
{
    _Bool _canPassthroughGesture;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _doneBlock;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    MMUIButton *_cancelButton;
}

+ (id)instanceWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool canPassthroughGesture; // @synthesize canPassthroughGesture=_canPassthroughGesture;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupViews;

@end

