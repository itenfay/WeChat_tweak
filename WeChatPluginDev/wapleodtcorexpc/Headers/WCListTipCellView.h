//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTerminatorView, NSString;

@interface WCListTipCellView
{
    MMTerminatorView *_terminatorView;
}

+ (id)terminatorViewParamsWithTip:(id)arg1 subTip:(id)arg2;
+ (double)heightOfCellWithTip:(id)arg1 subTip:(id)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTerminatorView *terminatorView; // @synthesize terminatorView=_terminatorView;
- (void)terminatorViewDidClickSubtitle:(id)arg1;
- (void)configureWithTip:(id)arg1 subTip:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

