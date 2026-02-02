//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface WCFinderAdEvaluationPanelView : UIView
{
    UILabel *_evaluationTipsLabel;
    UILabel *_titleTipsLabel;
    UIButton *_goodButton;
    UIButton *_dislikeButton;
    UIView *_separateAboveComplaintsLine;
    UILabel *_complaintsTipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *complaintsTipsLabel; // @synthesize complaintsTipsLabel=_complaintsTipsLabel;
@property(retain, nonatomic) UIView *separateAboveComplaintsLine; // @synthesize separateAboveComplaintsLine=_separateAboveComplaintsLine;
@property(retain, nonatomic) UIButton *dislikeButton; // @synthesize dislikeButton=_dislikeButton;
@property(retain, nonatomic) UIButton *goodButton; // @synthesize goodButton=_goodButton;
@property(retain, nonatomic) UILabel *titleTipsLabel; // @synthesize titleTipsLabel=_titleTipsLabel;
@property(retain, nonatomic) UILabel *evaluationTipsLabel; // @synthesize evaluationTipsLabel=_evaluationTipsLabel;

@end

