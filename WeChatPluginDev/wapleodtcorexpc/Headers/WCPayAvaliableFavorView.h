//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, WCPayControlData;

@interface WCPayAvaliableFavorView
{
    WCPayControlData *m_data;
    struct CGRect m_frame;
    UIImageView *m_backgroundView;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 Data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

