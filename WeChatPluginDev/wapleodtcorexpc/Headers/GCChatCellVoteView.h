//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSMutableDictionary, UILabel;

@interface GCChatCellVoteView : UIView
{
    UIView *_splitLine;
    UILabel *_voteTipLabel;
    MMUIButton *_rightLightImageBtn;
    UIView *_iconArrayContainerView;
    NSMutableDictionary *_userNameImgViewDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userNameImgViewDict; // @synthesize userNameImgViewDict=_userNameImgViewDict;
@property(retain, nonatomic) UIView *iconArrayContainerView; // @synthesize iconArrayContainerView=_iconArrayContainerView;
@property(retain, nonatomic) MMUIButton *rightLightImageBtn; // @synthesize rightLightImageBtn=_rightLightImageBtn;
@property(retain, nonatomic) UILabel *voteTipLabel; // @synthesize voteTipLabel=_voteTipLabel;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
- (void)onUserDataDictUpdate:(id)arg1;
- (void)configureIsVoteByMe:(_Bool)arg1;
- (void)configureWithIconArray:(id)arg1 tip:(id)arg2;
- (void)cutRightWithHeadOffset:(double)arg1 webImgView:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

