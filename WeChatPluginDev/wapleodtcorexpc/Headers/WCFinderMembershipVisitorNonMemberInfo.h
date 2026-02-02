//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeListInfo, NSData, NSMutableArray, NSString;

@interface WCFinderMembershipVisitorNonMemberInfo : NSObject
{
    FinderLiveNoticeListInfo *_liveNoticeListInfo;
    NSMutableArray *_previewVideoArray;
    unsigned long long _otherVideoNum;
    NSMutableArray *_previewLiveArray;
    unsigned long long _otherLiveNum;
    NSMutableArray *_previewActivityArray;
    unsigned long long _totalActivityNum;
    NSMutableArray *_moreVideoPreviewInfoArray;
    NSMutableArray *_moreLivePreviewInfoArray;
    NSData *_videoShortLastBuffer;
    NSData *_liveShortLastBuffer;
    unsigned long long _videoShortNum;
    unsigned long long _liveShortNum;
    unsigned long long _previewVideoLastUpdateTime;
    unsigned long long _previewLiveLastUpdateTime;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_previewLiveLastUpdateTime;
+ (void)PBArrayAdd_previewVideoLastUpdateTime;
+ (void)PBArrayAdd_liveShortNum;
+ (void)PBArrayAdd_videoShortNum;
+ (void)PBArrayAdd_liveShortLastBuffer;
+ (void)PBArrayAdd_videoShortLastBuffer;
+ (void)PBArrayAdd_totalActivityNum;
+ (void)PBArrayAdd_previewActivityArray;
+ (void)PBArrayAdd_moreLivePreviewInfoArray;
+ (void)PBArrayAdd_moreVideoPreviewInfoArray;
+ (void)PBArrayAdd_otherLiveNum;
+ (void)PBArrayAdd_previewLiveArray;
+ (void)PBArrayAdd_otherVideoNum;
+ (void)PBArrayAdd_previewVideoArray;
+ (void)PBArrayAdd_liveNoticeListInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long previewLiveLastUpdateTime; // @synthesize previewLiveLastUpdateTime=_previewLiveLastUpdateTime;
@property(nonatomic) unsigned long long previewVideoLastUpdateTime; // @synthesize previewVideoLastUpdateTime=_previewVideoLastUpdateTime;
@property(nonatomic) unsigned long long liveShortNum; // @synthesize liveShortNum=_liveShortNum;
@property(nonatomic) unsigned long long videoShortNum; // @synthesize videoShortNum=_videoShortNum;
@property(retain, nonatomic) NSData *liveShortLastBuffer; // @synthesize liveShortLastBuffer=_liveShortLastBuffer;
@property(retain, nonatomic) NSData *videoShortLastBuffer; // @synthesize videoShortLastBuffer=_videoShortLastBuffer;
@property(retain, nonatomic) NSMutableArray *moreLivePreviewInfoArray; // @synthesize moreLivePreviewInfoArray=_moreLivePreviewInfoArray;
@property(retain, nonatomic) NSMutableArray *moreVideoPreviewInfoArray; // @synthesize moreVideoPreviewInfoArray=_moreVideoPreviewInfoArray;
@property(nonatomic) unsigned long long totalActivityNum; // @synthesize totalActivityNum=_totalActivityNum;
@property(retain, nonatomic) NSMutableArray *previewActivityArray; // @synthesize previewActivityArray=_previewActivityArray;
@property(nonatomic) unsigned long long otherLiveNum; // @synthesize otherLiveNum=_otherLiveNum;
@property(retain, nonatomic) NSMutableArray *previewLiveArray; // @synthesize previewLiveArray=_previewLiveArray;
@property(nonatomic) unsigned long long otherVideoNum; // @synthesize otherVideoNum=_otherVideoNum;
@property(retain, nonatomic) NSMutableArray *previewVideoArray; // @synthesize previewVideoArray=_previewVideoArray;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @synthesize liveNoticeListInfo=_liveNoticeListInfo;
- (void)memberFeedIsPreview:(id)arg1 isPreview:(_Bool)arg2;
- (id)initWithVisitorNonMemberInfo:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

