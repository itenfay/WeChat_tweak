//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewLifeShareCoverImageView, NewLifeShareMessageViewModel;

@interface NewLifeShareMessageView
{
    NewLifeShareCoverImageView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifeShareCoverImageView *coverView; // @synthesize coverView=_coverView;
- (void)onNewLifeDetailShareViewAnimationEnd;
- (void)onNewLifeDetailShareViewAnimationBegin;
- (id)getNewLifeAnimationCardImageView;
- (id)getNewLifeAnimationCardView;
- (id)getNewLifeZoomAnimatorKey;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)onAppear;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)setHighlighted:(_Bool)arg1;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NewLifeShareMessageViewModel *viewModel; // @dynamic viewModel;

@end

