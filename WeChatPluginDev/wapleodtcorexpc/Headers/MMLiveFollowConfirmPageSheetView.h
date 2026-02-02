//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveContext, MMUILabel, MMWebImageView, NSString, UIImageView, UIScrollView, WCFinderContact, WCFinderHeadImageView;

@interface MMLiveFollowConfirmPageSheetView
{
    _Bool _isPop;
    _Bool _isPopup;
    _Bool _isTop;
    long long _type;
    CDUnknownBlockType _block;
    UIScrollView *_dialogView;
    MMUILabel *_title;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    MMUILabel *_followNumLabel;
    MMUILabel *_isFollowed;
    UIImageView *_followedIcon;
    long long _friendFollowCount;
    MMFinderLiveContext *_liveContext;
    WCFinderContact *_contact;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(nonatomic) _Bool isPopup; // @synthesize isPopup=_isPopup;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMFinderLiveContext *liveContext; // @synthesize liveContext=_liveContext;
@property(nonatomic) long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) _Bool isPop; // @synthesize isPop=_isPop;
@property(retain, nonatomic) UIImageView *followedIcon; // @synthesize followedIcon=_followedIcon;
@property(retain, nonatomic) MMUILabel *isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) MMUILabel *followNumLabel; // @synthesize followNumLabel=_followNumLabel;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIScrollView *dialogView; // @synthesize dialogView=_dialogView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)liveTask;
- (id)audienceLogReporter;
- (double)getCurrentHeight;
- (double)getRealHeight;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)contentHeight;
- (void)show;
- (void)setupPageSheetConfig;
- (void)delayClose;
- (void)updateAuthInfo:(id)arg1;
- (void)layoutFinderLiveFollowConfirm:(id)arg1 isPopup:(_Bool)arg2 isTop:(_Bool)arg3;
- (void)layoutBoundBizLiveFollowConfirm:(id)arg1 liveContext:(id)arg2 isPopup:(_Bool)arg3;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (id)initWithContact:(id)arg1 liveContext:(id)arg2 isPopup:(_Bool)arg3 isTop:(_Bool)arg4 type:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

