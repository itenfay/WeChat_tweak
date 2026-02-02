//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderLiveShareItem;

@interface MMFinderLiveBaseShareView : UIView
{
    WCFinderLiveShareItem *_shareItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)updateLiveStatusIfNeededFromServer;
- (void)updateLiveStatusFromDB;
- (void)refreshSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 shareItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

