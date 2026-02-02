//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSharePlayerView, MMFinderLiveStatusIconShareView, StatusFooterJumpLivePlayerByExportId, WCFinderLiveShareItem;

@interface TextState3rdPartyLiveExportHandler
{
    StatusFooterJumpLivePlayerByExportId *_liveInfo;
    WCFinderLiveShareItem *_liveShareItem;
    MMFinderLiveStatusIconShareView *_liveStatusView;
    MMFinderLiveSharePlayerView *_livePlayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveSharePlayerView *livePlayerView; // @synthesize livePlayerView=_livePlayerView;
@property(retain, nonatomic) MMFinderLiveStatusIconShareView *liveStatusView; // @synthesize liveStatusView=_liveStatusView;
@property(retain, nonatomic) WCFinderLiveShareItem *liveShareItem; // @synthesize liveShareItem=_liveShareItem;
@property(retain, nonatomic) StatusFooterJumpLivePlayerByExportId *liveInfo; // @synthesize liveInfo=_liveInfo;
- (id)reportActivityId;
- (_Bool)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (_Bool)supportCustomCover;
- (id)mediaContentView;
- (_Bool)supportCustomMedia;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)useCoverForContent;
- (id)name;
- (id)customView;
- (_Bool)preferCustomView;
- (id)title;
- (unsigned int)type;
- (void)requestLiveShareItemWithEncryptedId:(id)arg1 nonceId:(id)arg2;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;

@end

