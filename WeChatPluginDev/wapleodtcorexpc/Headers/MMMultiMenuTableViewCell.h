//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMDropManager, NSString, UIColor;

@interface MMMultiMenuTableViewCell
{
    MMDropManager *m_dropManager;
    UIColor *_bkgColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bkgColor; // @synthesize bkgColor=_bkgColor;
- (void)dropSessionDidExit;
- (void)dropSessionDidEnter;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

