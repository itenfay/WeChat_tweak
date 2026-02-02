//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollableActionSheetVerticalContainerView, NSString;
@protocol MMScrollableActionSheetWithVerticalRowsDelegate;

@interface MMScrollableActionSheetWithVerticalRows
{
    MMScrollableActionSheetVerticalContainerView *_verticalContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollableActionSheetVerticalContainerView *verticalContainerView; // @synthesize verticalContainerView=_verticalContainerView;
- (void)onTappedRowInfo:(id)arg1;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)setupVerticalContainerView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <MMScrollableActionSheetWithVerticalRowsDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

