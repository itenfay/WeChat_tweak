//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, NSString, UILabel, UIView, WAContactGetter, WAMainFrameTaskItem;

@interface WAPopOverTaskCollectionViewCell : UICollectionViewCell
{
    _Bool _isShowAsBackToChat;
    MMWebImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_debugLabel;
    UIView *_highlightMaskView;
    WAMainFrameTaskItem *_taskItem;
    NSString *_headImageUrl;
    WAContactGetter *_contactGetter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) WAMainFrameTaskItem *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isShowAsBackToChat; // @synthesize isShowAsBackToChat=_isShowAsBackToChat;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onContactUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)initView;
- (void)showHighlight:(_Bool)arg1;
- (id)getCurrentTaskItem;
- (void)updateTaskItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

