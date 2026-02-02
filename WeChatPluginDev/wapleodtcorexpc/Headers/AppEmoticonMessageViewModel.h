//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CEmoticonWrap, NSString;

@interface AppEmoticonMessageViewModel
{
    _Bool _hasTryAutoDownload;
    int _iconType;
    double _currentProgress;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool hasTryAutoDownload; // @synthesize hasTryAutoDownload=_hasTryAutoDownload;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
- (_Bool)shouldShowWeAppEntranceTail;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)isShowSourceView;
- (_Bool)shouldShowSourceViewInContent;
- (id)getReferImage;
- (_Bool)hasReferImage;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (void)onAppEmoticonDownloading:(id)arg1;
@property(readonly, nonatomic) _Bool isDownloading;
@property(readonly, nonatomic) _Bool isDownloaded;
@property(readonly, nonatomic) CEmoticonWrap *emoticonWrap;
- (id)accessibilityMessageType;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

