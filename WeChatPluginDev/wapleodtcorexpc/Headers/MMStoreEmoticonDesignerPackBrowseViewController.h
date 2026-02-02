//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MMStoreEmotionDesignerPackBrowseViewControllerDelegate;

@interface MMStoreEmoticonDesignerPackBrowseViewController
{
    _Bool _needStaticsInfo;
    id <MMStoreEmotionDesignerPackBrowseViewControllerDelegate> _delegate;
    NSString *_sdkRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(nonatomic) _Bool needStaticsInfo; // @synthesize needStaticsInfo=_needStaticsInfo;
@property(nonatomic) __weak id <MMStoreEmotionDesignerPackBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (void)onTapEmoticonWithItem:(id)arg1;
- (void)OnRewardStoreItem:(id)arg1;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (_Bool)needSDKReport;
- (_Bool)shouldShowDownloadView;
- (_Bool)shouldRemoveExpiredPack;
- (_Bool)shouldFetchStaticsInfo;
- (_Bool)shouldUseRichStyle;

@end

