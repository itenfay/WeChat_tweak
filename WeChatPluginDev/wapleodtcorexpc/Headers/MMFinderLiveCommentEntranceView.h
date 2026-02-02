//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveBoxId, UILabel;

@interface MMFinderLiveCommentEntranceView : UIView
{
    _Bool _isSelected;
    _Bool _hasRedDot;
    CDUnknownBlockType _commentEntranceDidTapCallback;
    CDUnknownBlockType _commentEntranceSizeDidChangeCallback;
    CDUnknownBlockType _commentEntranceSelectedChangeCallback;
    UILabel *_groupNameLabel;
    UIView *_redDotView;
    UIView *_bottomLineView;
    FinderLiveBoxId *_boxId;
}

+ (double)preferHeight;
+ (double)preferTopMargin;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasRedDot; // @synthesize hasRedDot=_hasRedDot;
@property(retain, nonatomic) FinderLiveBoxId *boxId; // @synthesize boxId=_boxId;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceSelectedChangeCallback; // @synthesize commentEntranceSelectedChangeCallback=_commentEntranceSelectedChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceSizeDidChangeCallback; // @synthesize commentEntranceSizeDidChangeCallback=_commentEntranceSizeDidChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentEntranceDidTapCallback; // @synthesize commentEntranceDidTapCallback=_commentEntranceDidTapCallback;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)onEntranceDidTaped:(id)arg1;
- (void)updateHasRedDot:(_Bool)arg1;
- (void)updateSelfSize;
- (void)updateGroupNameLabelAlpha;
- (void)updateGroupName;
- (void)layoutBottomLineView;
- (void)layoutRedDotView;
- (void)layoutGroupNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addGestures;
- (id)initWithBoxId:(id)arg1;

@end

