//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class TopicInfo, UIButton, UIImageView, UILabel, UITapGestureRecognizer;
@protocol GCChatCellPublishBottomViewDelegate;

@interface GCChatCellPublishBottomView : UIView
{
    _Bool _isSelfMsg;
    id <GCChatCellPublishBottomViewDelegate> _delegate;
    TopicInfo *_topicInfo;
    double _leftStartX;
    UIButton *_publishBtn;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIImageView *_rightArrow;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIButton *publishBtn; // @synthesize publishBtn=_publishBtn;
@property(nonatomic) _Bool isSelfMsg; // @synthesize isSelfMsg=_isSelfMsg;
@property(nonatomic) double leftStartX; // @synthesize leftStartX=_leftStartX;
@property(retain, nonatomic) TopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(nonatomic) __weak id <GCChatCellPublishBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)loadOtherMsgUIStyle;
- (void)loadSelfMsgUIStyle;
- (void)configViewWithInfo:(id)arg1 isSelfMsg:(_Bool)arg2 leftStartX:(double)arg3;
- (void)onViewTaped;
- (void)publishAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

