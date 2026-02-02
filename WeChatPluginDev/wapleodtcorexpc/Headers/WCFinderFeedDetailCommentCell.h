//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, NSString, WCFinderComment, WCFinderCommentEmoticonView, WCFinderFriendsHeaderSuffixView;

@interface WCFinderFeedDetailCommentCell : UITableViewCell
{
    _Bool _isSelfPost;
    WCFinderComment *_comment;
    WCFinderFriendsHeaderSuffixView *_friendLikeSuffixView;
    MMUIButton *_recommendButton;
    WCFinderCommentEmoticonView *_emoticonView;
}

+ (double)emoticonContentHeightWithComment:(id)arg1;
+ (double)recommendNameInfoHeightWithComment:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCommentEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) MMUIButton *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(retain, nonatomic) WCFinderFriendsHeaderSuffixView *friendLikeSuffixView; // @synthesize friendLikeSuffixView=_friendLikeSuffixView;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
- (id)authorLikeLabelStr;
- (_Bool)showRecommendButton;
- (id)getCommentEventDelegate;
- (void)onLongPressEmoticonView:(id)arg1;
- (void)onClickEmotionView:(id)arg1;
- (void)updateEmoticonViewWithComment:(id)arg1;
- (void)setupEmoticonViewIfNeeded;
- (void)recommendViewDataChange;
- (void)clickFriendLikeAction;
- (void)clickRecommendAction;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setUpRecommendButton;
- (void)setUpRecommendNameInfosView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

