//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderContact, WCFinderDataItem, WCFinderMediaInfo, WCFinderMegaVideo;

@interface WCFinderLongVideoKeepModel
{
    WCFinderMegaVideo *_megaVideo;
    WCFinderContact *_contact;
    double _playPosition;
    WCFinderMediaInfo *_mediaInfo;
    WCFinderDataItem *_dataItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_dataItem;
+ (void)PBArrayAdd_mediaInfo;
+ (void)PBArrayAdd_playPosition;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_megaVideo;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) double playPosition; // @synthesize playPosition=_playPosition;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderMegaVideo *megaVideo; // @synthesize megaVideo=_megaVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

