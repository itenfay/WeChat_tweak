//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol FirstUnReadTipViewDelegate;

@interface FirstUnReadTipView
{
    id <FirstUnReadTipViewDelegate> _delegate;
}

+ (id)showTipWithDelegate:(id)arg1 parentView:(id)arg2 content:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FirstUnReadTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setContentNormal;
- (void)setContentHighlighted;
- (void)performBgAction;
- (void)initView;
- (id)init;

@end

