//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BraceletRankNewLikeButton, SportRecord;
@protocol BraceletStepScoreDelegate;

@interface BraceletStepScoreView : UIView
{
    _Bool _isLike;
    _Bool _isSelf;
    unsigned int _score;
    unsigned int _likeCount;
    id <BraceletStepScoreDelegate> _delegate;
    SportRecord *_record;
    BraceletRankNewLikeButton *_likeButton;
}

+ (id)getDisplayRecord:(id)arg1;
+ (double)calculateHeight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BraceletRankNewLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) SportRecord *record; // @synthesize record=_record;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
@property(nonatomic) __weak id <BraceletStepScoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id)removeAllNumberAndComma:(id)arg1;
- (void)onClickRecordButton;
- (void)clickUnlikeAnimate:(_Bool)arg1;
- (void)clickLikeAnimate:(_Bool)arg1;
- (void)onClickLikeButton:(id)arg1;
- (void)initView;
- (id)initWithScore:(unsigned int)arg1 likeCount:(unsigned int)arg2 isLike:(_Bool)arg3 isSelf:(_Bool)arg4 arrRecords:(id)arg5 width:(double)arg6;

@end

