//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, NSString, UIView;

@interface WCFinderFeedDetailSectionFooterView : UITableViewHeaderFooterView
{
    UIView *_separatorView;
    NSLayoutConstraint *_leadingLayoutConstraint;
}

+ (double)defaultLeadingPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *leadingLayoutConstraint; // @synthesize leadingLayoutConstraint=_leadingLayoutConstraint;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
- (id)getGeneralMonitorCellBizId;
- (void)setLeadingPadding:(double)arg1;
- (void)setCustomBgColor:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

