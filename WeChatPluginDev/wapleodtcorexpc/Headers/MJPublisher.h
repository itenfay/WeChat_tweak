//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderVideoTemplateInfo, MJMovieComposingAssetsClassifyHelper, MJMusicDownloader, MJPublisherContext, MJPublisherPickerComposingButtonManager, MJTemplateComposingDelegateImpl, NSArray, NSString, OMJPublisherSessionMetrics;

@interface MJPublisher : NSObject
{
    MJTemplateComposingDelegateImpl *_templateComposingDelegateImpl;
    MJPublisherPickerComposingButtonManager *_pickerComposingButtonManager;
    OMJPublisherSessionMetrics *_publisherSessionMetrics;
    MJPublisherContext *_publisherContext;
    NSArray *_followMusicIDs;
    MJMusicDownloader *_musicDownloader;
    NSString *_finderUserName;
    MJMovieComposingAssetsClassifyHelper *_assetClassifyHelper;
    FinderVideoTemplateInfo *_templateInfo;
    unsigned long long _enterScene;
    double _videoClipStartTimeForRedPacket;
}

+ (_Bool)checkIsMJAsyncCompositionTask:(id)arg1;
+ (void)didAcceptRegularGuide;
+ (_Bool)shouldShowRegularGuide;
+ (void)releasePublisherNamed:(id)arg1;
+ (void)registerPublisher:(id)arg1 named:(id)arg2;
+ (id)publisherNamed:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double videoClipStartTimeForRedPacket; // @synthesize videoClipStartTimeForRedPacket=_videoClipStartTimeForRedPacket;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) FinderVideoTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) MJMovieComposingAssetsClassifyHelper *assetClassifyHelper; // @synthesize assetClassifyHelper=_assetClassifyHelper;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) MJMusicDownloader *musicDownloader; // @synthesize musicDownloader=_musicDownloader;
@property(retain, nonatomic) NSArray *followMusicIDs; // @synthesize followMusicIDs=_followMusicIDs;
@property(retain, nonatomic) MJPublisherContext *publisherContext; // @synthesize publisherContext=_publisherContext;
@property(retain, nonatomic) OMJPublisherSessionMetrics *publisherSessionMetrics; // @synthesize publisherSessionMetrics=_publisherSessionMetrics;
@property(readonly, nonatomic) MJPublisherPickerComposingButtonManager *pickerComposingButtonManager; // @synthesize pickerComposingButtonManager=_pickerComposingButtonManager;
@property(readonly, nonatomic) MJTemplateComposingDelegateImpl *templateComposingDelegateImpl; // @synthesize templateComposingDelegateImpl=_templateComposingDelegateImpl;
- (void)onShootComposingVCDidDismissSelfFinished:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 fromScene:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createPostSessionWithSightDraft:(id)arg1 fromScene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createPostSessionWithActionFlow:(id)arg1 fromScene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createPostSessionWithEditImageAttr:(id)arg1 screenSize:(struct CGSize)arg2 fromScene:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)markDidEndMovieComposingWithReason:(id)arg1 shouldDestoryPublisherSession:(_Bool)arg2;
- (void)markWillBeginMovieComposing;
- (void)markDidEndShootComposingWithReason:(id)arg1 shouldDestoryPublisherSession:(_Bool)arg2;
- (void)markWillBeginShootComposing;
- (void)destoryPublisherSessionMetricsWithReason:(id)arg1;
- (void)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned int)arg3 startupOptions:(id)arg4;
- (id)createShootComposingViewModel;
- (id)createShootComposingVCWithViewModel:(id)arg1;
- (void)dealloc;
- (id)init;

@end

