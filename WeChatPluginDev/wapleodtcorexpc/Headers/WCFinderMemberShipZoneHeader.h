//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, RichTextView, UIButton, UILabel, WCFinderFeedContentTextView, WCFinderMSInteractionView, WCFinderMemberShipZoneHeaderData, WCFinderMemberShipZoneReporter, WCFinderProfileCardContainer;
@protocol WCFinderMemberShipZoneHeaderDelegate;

@interface WCFinderMemberShipZoneHeader : UIView
{
    _Bool _descContentLabelIsExpand;
    WCFinderMemberShipZoneHeaderData *_data;
    id <WCFinderMemberShipZoneHeaderDelegate> _delegate;
    WCFinderMemberShipZoneReporter *_reporter;
    RichTextView *_benefitsLabel;
    UILabel *_titleLabel;
    WCFinderFeedContentTextView *_descContentLabel;
    WCFinderProfileCardContainer *_cardContainer;
    UIButton *_postBtn;
    UIButton *_liveBtn;
    RichTextView *_centerDataLabel;
    UIButton *_activityBtn;
    WCFinderMSInteractionView *_interactionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMSInteractionView *interactionView; // @synthesize interactionView=_interactionView;
@property(nonatomic) _Bool descContentLabelIsExpand; // @synthesize descContentLabelIsExpand=_descContentLabelIsExpand;
@property(retain, nonatomic) UIButton *activityBtn; // @synthesize activityBtn=_activityBtn;
@property(retain, nonatomic) RichTextView *centerDataLabel; // @synthesize centerDataLabel=_centerDataLabel;
@property(retain, nonatomic) UIButton *liveBtn; // @synthesize liveBtn=_liveBtn;
@property(retain, nonatomic) UIButton *postBtn; // @synthesize postBtn=_postBtn;
@property(retain, nonatomic) WCFinderProfileCardContainer *cardContainer; // @synthesize cardContainer=_cardContainer;
@property(retain, nonatomic) WCFinderFeedContentTextView *descContentLabel; // @synthesize descContentLabel=_descContentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) RichTextView *benefitsLabel; // @synthesize benefitsLabel=_benefitsLabel;
@property(retain, nonatomic) WCFinderMemberShipZoneReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <WCFinderMemberShipZoneHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderMemberShipZoneHeaderData *data; // @synthesize data=_data;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onCardView:(id)arg1 expose:(long long *)arg2 exposeCount:(long long)arg3 unExpose:(long long *)arg4 unExposeCount:(long long)arg5;
- (void)onMemberShipZoneHeaderDataChanged;
- (void)onClickFansEntrance;
- (void)onClickLive;
- (void)onClickPost;
- (void)onClickActivity;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)buttonTitleColor;
- (id)genContentTextView;
- (id)genRichTextView;
- (id)createButton:(void *)arg1;
- (void)configButton:(id *)arg1 display:(_Bool)arg2;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

