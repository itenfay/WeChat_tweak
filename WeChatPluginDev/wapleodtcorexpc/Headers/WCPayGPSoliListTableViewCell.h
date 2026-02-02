//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, RichTextView, SolitaireObj, UIImageView, UIView;
@protocol WCPayGPSoliListTableViewCellDelegate;

@interface WCPayGPSoliListTableViewCell
{
    id <WCPayGPSoliListTableViewCellDelegate> _delegate;
    SolitaireObj *_soliData;
    double _containerWidth;
    UIView *_cellContentView;
    UIView *_cellHighlightView;
    MMUILabel *_titleLabel;
    MMUILabel *_dateLabel;
    MMUILabel *_memberCountLabel;
    RichTextView *_detailTextView;
    UIImageView *_arrowImgView;
    UIView *_sepLine1;
    UIView *_sepLine2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepLine2; // @synthesize sepLine2=_sepLine2;
@property(retain, nonatomic) UIView *sepLine1; // @synthesize sepLine1=_sepLine1;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) RichTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) MMUILabel *memberCountLabel; // @synthesize memberCountLabel=_memberCountLabel;
@property(retain, nonatomic) MMUILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *cellHighlightView; // @synthesize cellHighlightView=_cellHighlightView;
@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(retain, nonatomic) SolitaireObj *soliData; // @synthesize soliData=_soliData;
@property(nonatomic) __weak id <WCPayGPSoliListTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setupSepLine2;
- (void)setupSepLine1;
- (void)setupArrowImgView;
- (void)setupDetailTextView;
- (void)setupMemberCountLabel;
- (void)setupDateLabel;
- (void)setupTitleLabel;
- (void)setupCellHighlightView;
- (void)setupCellContentView;
- (void)updateContentView;
- (void)updateCellWithSoliObj:(id)arg1 containerWidth:(double)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

