//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, FinderFromAppInfo, MMUIViewController, NSString, NSURL;
@protocol WCFinderLongVideoChooseHelperDelegate;

@interface WCFinderLongVideoChooseHelper : NSObject
{
    _Bool _isSlowMotionVideo;
    AVAsset *_asset;
    NSString *_assetId;
    NSURL *_url;
    FinderFromAppInfo *_fromAppInfo;
    MMUIViewController *_context;
    id <WCFinderLongVideoChooseHelperDelegate> _delegate;
    CDUnknownBlockType _shortAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType shortAction; // @synthesize shortAction=_shortAction;
@property(nonatomic) __weak id <WCFinderLongVideoChooseHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *context; // @synthesize context=_context;
@property(retain, nonatomic) FinderFromAppInfo *fromAppInfo; // @synthesize fromAppInfo=_fromAppInfo;
@property(nonatomic) _Bool isSlowMotionVideo; // @synthesize isSlowMotionVideo=_isSlowMotionVideo;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)genTimelineVideoTimeFormatByUInt:(unsigned int)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startLongVideoPostWithAsset:(id)arg1 videoUrl:(id)arg2;
- (void)showLongVideoPostEntryWithShortAction:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

