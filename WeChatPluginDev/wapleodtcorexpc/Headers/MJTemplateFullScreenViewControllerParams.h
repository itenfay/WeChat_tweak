//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImageView, WCDataItem, WCMediaItem, WCMomentsTemplateShareInfo;

@interface MJTemplateFullScreenViewControllerParams : NSObject
{
    _Bool _isMuted;
    WCDataItem *_dataItem;
    WCMediaItem *_mediaItem;
    WCMomentsTemplateShareInfo *_shareInfo;
    UIImageView *_thumbImageView;
    long long _browseScene;
    struct CGRect _originFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) WCMomentsTemplateShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

