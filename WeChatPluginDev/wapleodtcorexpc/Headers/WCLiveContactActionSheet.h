//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMHeadImageView, NSString, WCFinderContact;
@protocol WCLiveContactActionSheetDelegate;

@interface WCLiveContactActionSheet
{
    id <WCLiveContactActionSheetDelegate> _liveContactActionSheetDelegate;
    MMHeadImageView *_headImageView;
    MMCPLabel *_nickNameLabel;
    WCFinderContact *_finderContact;
}

+ (id)addTransparencyViewWith:(id)arg1 targetView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(retain, nonatomic) MMCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <WCLiveContactActionSheetDelegate> liveContactActionSheetDelegate; // @synthesize liveContactActionSheetDelegate=_liveContactActionSheetDelegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isFinderUser;
- (void)updateFinderContact:(id)arg1;
- (id)getCustomHeadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

