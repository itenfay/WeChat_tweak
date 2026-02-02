//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFetchMoneyAnnouncementView, NSString;
@protocol MMFinderLiveFetchMoneyAnnouncementCellDelegate;

@interface MMFinderLiveFetchMoneyAnnouncementCell
{
    MMFinderLiveFetchMoneyAnnouncementView *_announcementView;
    id <MMFinderLiveFetchMoneyAnnouncementCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveFetchMoneyAnnouncementCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveFetchMoneyAnnouncementView *announcementView; // @synthesize announcementView=_announcementView;
- (void)clickMMFinderLiveFetchMoneyAnnouncementView:(id)arg1;
- (void)layoutUI;
- (void)initCellConfig;
- (id)initWithAnnouncement:(id)arg1 delegate:(id)arg2 customHeight:(double)arg3 width:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

