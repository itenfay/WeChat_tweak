//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AppFileMessageViewModel
{
    double m_titleHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) double titleHeight; // @synthesize titleHeight=m_titleHeight;
- (_Bool)contentExists;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)onMessageDownloadAppAttachFail;
- (void)onMessageDownloadAppAttachExpired;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (_Bool)shouldShowWeAppEntranceTail;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) _Bool isFileExist;
- (int)revokeTimeLimitInSecond;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

