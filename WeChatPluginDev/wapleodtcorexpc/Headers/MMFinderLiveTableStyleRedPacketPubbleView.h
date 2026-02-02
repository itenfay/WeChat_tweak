//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLiveRoleSignView, NSString, UIImageView;

@interface MMFinderLiveTableStyleRedPacketPubbleView
{
    UIImageView *_iconImageView;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutMysteriousSignView;
- (void)layoutIconImageView;
- (void)layoutCommentLabel;
- (void)layoutUI;
- (_Bool)isUITypeValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

