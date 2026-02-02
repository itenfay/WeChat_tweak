//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, RichTextView, UILabel;

@interface MMFinderLivePaidConnectMicAnchorOperationPanelHeaderCell : UITableViewCell
{
    CDUnknownBlockType _modifyPaidConnectMicSettingAction;
    UILabel *_titleLabel;
    RichTextView *_summaryTextView;
}

+ (id)cellTextWithConnectPrice:(unsigned long long)arg1;
+ (struct CGSize)titleLabelSizeWithText:(id)arg1 textFont:(id)arg2 andMaxWidth:(double)arg3;
+ (id)cellTitleWithServiceCount:(unsigned long long)arg1;
+ (id)genSummaryRichTextView;
+ (double)cellHeightWithConnectPrice:(unsigned long long)arg1 serviceCount:(unsigned long long)arg2 cellWidth:(double)arg3;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *summaryTextView; // @synthesize summaryTextView=_summaryTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType modifyPaidConnectMicSettingAction; // @synthesize modifyPaidConnectMicSettingAction=_modifyPaidConnectMicSettingAction;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)initViews;
- (void)configWithConnectPrice:(unsigned long long)arg1 serviceCount:(unsigned long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

