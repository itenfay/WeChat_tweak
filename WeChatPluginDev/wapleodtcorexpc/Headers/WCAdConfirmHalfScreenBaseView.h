//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, WCAdConfirmHalfScreenBaseInfo;
@protocol WCAdConfirmHalfScreenBaseViewDelegate;

@interface WCAdConfirmHalfScreenBaseView
{
    id <WCAdConfirmHalfScreenBaseViewDelegate> _delegate;
    WCAdConfirmHalfScreenBaseInfo *_confirmInfo;
    MMWebImageView *_head;
    MMUILabel *_name;
    MMUILabel *_title;
    MMUILabel *_desc;
    MMUILabel *_extraDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *extraDesc; // @synthesize extraDesc=_extraDesc;
@property(retain, nonatomic) MMUILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) MMWebImageView *head; // @synthesize head=_head;
@property(retain, nonatomic) WCAdConfirmHalfScreenBaseInfo *confirmInfo; // @synthesize confirmInfo=_confirmInfo;
@property(nonatomic) __weak id <WCAdConfirmHalfScreenBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidDisappear;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)fetchLabelMaxWidth:(int)arg1;
- (id)fetchFont:(int)arg1;
- (id)fetchAdContent:(int)arg1;
- (id)genLabel:(int)arg1;
- (void)initConfirmUI;
- (void)initCommonUI;
- (id)initWithConfirmInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

