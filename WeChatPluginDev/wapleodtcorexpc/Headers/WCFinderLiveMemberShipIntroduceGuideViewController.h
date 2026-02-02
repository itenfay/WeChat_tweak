//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveContentVM, MMFinderLiveMemberTipsFullScreenView, MMFinderLiveTask;

@interface WCFinderLiveMemberShipIntroduceGuideViewController
{
    CDUnknownBlockType _becomeMemberConfirmCallback;
    MMFinderLiveContentVM *_liveContentVM;
    MMFinderLiveTask *_liveTask;
    unsigned long long _memberPrice;
    MMFinderLiveMemberTipsFullScreenView *_memberTipsFullScreenView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMemberTipsFullScreenView *memberTipsFullScreenView; // @synthesize memberTipsFullScreenView=_memberTipsFullScreenView;
@property(nonatomic) unsigned long long memberPrice; // @synthesize memberPrice=_memberPrice;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMFinderLiveContentVM *liveContentVM; // @synthesize liveContentVM=_liveContentVM;
@property(copy, nonatomic) CDUnknownBlockType becomeMemberConfirmCallback; // @synthesize becomeMemberConfirmCallback=_becomeMemberConfirmCallback;
- (void)layoutMemberTipsFullScreenView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithFinderLiveContentVM:(id)arg1 memberPrice:(unsigned long long)arg2;

@end

