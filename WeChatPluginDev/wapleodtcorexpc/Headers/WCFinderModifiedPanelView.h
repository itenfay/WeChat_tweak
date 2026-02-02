//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, RichTextView, UIView;
@protocol WCFinderModifiedPanelViewDelegate;

@interface WCFinderModifiedPanelView
{
    id <WCFinderModifiedPanelViewDelegate> _delegate;
    UIView *_containerView;
    long long _modifyDescMaxCount;
    long long _modifyTitleMaxCount;
    RichTextView *_modifyDescLabel;
    NSMutableArray *_descBannerArray;
    RichTextView *_modifyTitleLabel;
    NSMutableArray *_titleBannerArray;
}

+ (id)buildPanelViewByContainerWidth:(double)arg1 modifyDescMaxCount:(long long)arg2 modifyTitleMaxCount:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *titleBannerArray; // @synthesize titleBannerArray=_titleBannerArray;
@property(retain, nonatomic) RichTextView *modifyTitleLabel; // @synthesize modifyTitleLabel=_modifyTitleLabel;
@property(retain, nonatomic) NSMutableArray *descBannerArray; // @synthesize descBannerArray=_descBannerArray;
@property(retain, nonatomic) RichTextView *modifyDescLabel; // @synthesize modifyDescLabel=_modifyDescLabel;
@property(nonatomic) long long modifyTitleMaxCount; // @synthesize modifyTitleMaxCount=_modifyTitleMaxCount;
@property(nonatomic) long long modifyDescMaxCount; // @synthesize modifyDescMaxCount=_modifyDescMaxCount;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WCFinderModifiedPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onModifiedLogBannerClearModel:(id)arg1;
- (double)layoutBannerContainer:(id)arg1 bannerViewArray:(id)arg2 topLine:(double)arg3;
- (void)layoutTitleRichTextView:(id)arg1 text:(id)arg2 topLine:(double)arg3;
- (void)layoutContainerView:(id)arg1;
- (void)displayOnView:(id)arg1;
- (long long)getTitleChangeCount;
- (long long)getDescChangeCount;
- (void)updateTitleModifyModelArray:(id)arg1;
- (void)updateDescModifyModelArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

