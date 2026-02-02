//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, UIButton, WCFinderPostUsualTopicContainerView, WCFinderPostUsualTopicLogic;
@protocol WCFinderPostInputViewDelegate;

@interface WCFinderPostInputView : UIImageView
{
    _Bool _forbidRecommendTopic;
    int _commentScene;
    id <WCFinderPostInputViewDelegate> _delegate;
    WCFinderPostUsualTopicLogic *_usualTopicLogic;
    UIButton *_expressionButton;
    WCFinderPostUsualTopicContainerView *_topicContainerView;
}

- (void).cxx_destruct;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderPostUsualTopicContainerView *topicContainerView; // @synthesize topicContainerView=_topicContainerView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(nonatomic) _Bool forbidRecommendTopic; // @synthesize forbidRecommendTopic=_forbidRecommendTopic;
@property(retain, nonatomic) WCFinderPostUsualTopicLogic *usualTopicLogic; // @synthesize usualTopicLogic=_usualTopicLogic;
@property(nonatomic) __weak id <WCFinderPostInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)horizonViewClickItemWith:(id)arg1 inputTextTopicModel:(id)arg2 dataIndex:(long long)arg3;
- (void)updateTopicWithTextTopicModel:(id)arg1;
- (void)updateInputViewStyle:(unsigned long long)arg1;
- (void)reloadExpressionButtonImageMode:(long long)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(unsigned long long)arg2 commentScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

