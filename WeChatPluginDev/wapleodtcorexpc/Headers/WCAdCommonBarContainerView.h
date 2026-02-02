//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdBaseBarView;
@protocol WCAdCommonBarContainerViewDelegate;

@interface WCAdCommonBarContainerView
{
    id <WCAdCommonBarContainerViewDelegate> _viewDelegate;
    WCAdBaseBarView *_baseBarView;
}

+ (double)totalHeight:(id)arg1;
+ (Class)barViewClass:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdBaseBarView *baseBarView; // @synthesize baseBarView=_baseBarView;
@property(nonatomic) __weak id <WCAdCommonBarContainerViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (id)fetchAdOriginView;
- (void)updateDataItem:(id)arg1;
- (id)createBarViewWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

