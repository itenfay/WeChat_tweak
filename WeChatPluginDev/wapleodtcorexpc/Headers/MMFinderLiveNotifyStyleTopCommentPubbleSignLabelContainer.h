//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGlobalRankSignView, MMFinderLiveLiveRoleSignView, MMLiveCommentDataItem, NSMutableArray;

@interface MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer : UIView
{
    MMLiveCommentDataItem *_commentItem;
    NSMutableArray *_labelViewArr;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
    MMFinderLiveLiveRoleSignView *_roleSignView;
    MMFinderLiveGlobalRankSignView *_globalRankSignView;
}

+ (struct CGSize)calcContainerSizeWithCommentItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView; // @synthesize globalRankSignView=_globalRankSignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *roleSignView; // @synthesize roleSignView=_roleSignView;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) NSMutableArray *labelViewArr; // @synthesize labelViewArr=_labelViewArr;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
- (_Bool)needGlobalRankSignView;
- (void)updateGlobalRankSignView;
- (_Bool)needRoleSignView;
- (id)getRoleSignViewText;
- (void)updateRoleSignView;
- (_Bool)needMysteriousSignView;
- (void)updateMysteriousSignView;
- (void)updateSubSignViewFrame;
- (void)registerSubLabelView:(id)arg1;
- (void)layoutSubviews;
- (void)updateSubSignView;
- (_Bool)checkHasViewNeedDisplay;
- (struct CGSize)calcViewSize;
- (id)initWithCommentItem:(id)arg1;

@end

