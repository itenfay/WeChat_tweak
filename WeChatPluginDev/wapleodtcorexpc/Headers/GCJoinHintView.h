//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton;

@interface GCJoinHintView : UIView
{
    UIButton *_btn;
    UIView *_leftGroupView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *leftGroupView; // @synthesize leftGroupView=_leftGroupView;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
- (void)configureWithRestrictRuleList:(id)arg1 headImageUrl:(id)arg2 canJoin:(_Bool)arg3 failTip:(id)arg4;

@end

