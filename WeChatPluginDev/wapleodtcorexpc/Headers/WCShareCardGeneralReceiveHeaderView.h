//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel;
@protocol WCShareCardGeneralReceiveHeaderDelegate;

@interface WCShareCardGeneralReceiveHeaderView
{
    MMUIButton *_sureButton;
    MMUILabel *_vaildDateLabel;
    MMUILabel *_useabelTimeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *useabelTimeLabel; // @synthesize useabelTimeLabel=_useabelTimeLabel;
@property(retain, nonatomic) MMUILabel *vaildDateLabel; // @synthesize vaildDateLabel=_vaildDateLabel;
@property(retain, nonatomic) MMUIButton *sureButton; // @synthesize sureButton=_sureButton;
- (void)singleSureButtonDidSelected;
- (void)setContentViewHetght;
- (void)initViews;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isGiftFromUserHeaderView:(_Bool)arg3 isShareCard:(_Bool)arg4 cardStatus:(int)arg5 isNeedHideAccecptBtn:(_Bool)arg6 delegate:(id)arg7;

// Remaining properties
@property(nonatomic) __weak id <WCShareCardGeneralReceiveHeaderDelegate> delegate;

@end

