//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class BrandProfileTipsSectionData, MMUIActivityIndicatorView, NSString, RichTextView;
@protocol BrandProfileTipsCellDelegate;

@interface BrandProfileTipsCell : UITableViewCell
{
    RichTextView *_tipsLabel;
    MMUIActivityIndicatorView *_indicatorView;
    id <BrandProfileTipsCellDelegate> _delegate;
    BrandProfileTipsSectionData *_sectionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileTipsSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) __weak id <BrandProfileTipsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

