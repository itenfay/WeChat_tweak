//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLivePreviewRelatedHeaderView
{
    _Bool _hasRegisteredKeyExtensions;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_anchorNameLabel;
    MMUILabel *_brandLiveMarkLabel;
    MMWebImageView *_authIconView;
    WCFinderContact *_contact;
    WCFinderContact *_anchorContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool hasRegisteredKeyExtensions; // @synthesize hasRegisteredKeyExtensions=_hasRegisteredKeyExtensions;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *brandLiveMarkLabel; // @synthesize brandLiveMarkLabel=_brandLiveMarkLabel;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (id)finderLiveTask;
- (_Bool)hasShowBoundBizLive;
@property(readonly, nonatomic) NSString *anchorDisplayName;
- (void)updateAuthInfo;
- (void)willEnterForeground:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)onEnterLive;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)initNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

