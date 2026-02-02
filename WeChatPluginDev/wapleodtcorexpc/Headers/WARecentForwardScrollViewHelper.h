//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RecentForwardScrollView, UIView;
@protocol WARecentForwardScrollViewHelperDelegate;

@interface WARecentForwardScrollViewHelper : NSObject
{
    RecentForwardScrollView *_forwardView;
    id <WARecentForwardScrollViewHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WARecentForwardScrollViewHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RecentForwardScrollView *forwardView; // @synthesize forwardView=_forwardView;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
@property(readonly, nonatomic) UIView *internalView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

