//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class StatusFooterJumpFinderFeed, WCFinderDataItem;

@interface TextState3rdPartyFinderHandler
{
    unsigned long long _dataStatus;
    WCFinderDataItem *_dataItem;
    StatusFooterJumpFinderFeed *_jumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StatusFooterJumpFinderFeed *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) unsigned long long dataStatus; // @synthesize dataStatus=_dataStatus;
- (_Bool)_isLimitedByFinderYoungStyle;
- (id)invalidMessage;
- (_Bool)syncCheckValidStatus;
- (void)getSourceInfoForReferWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)canGetSourceInfoForRefer;
- (_Bool)isValid;
- (_Bool)dataReady;
- (_Bool)needUpdateBizData;
- (id)updateBizData;
- (void)checkValidWithCompletionBlock:(CDUnknownBlockType)arg1 cacheOnly:(_Bool)arg2;
- (id)reportActivityId;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (_Bool)autoHandleAppLifeCycleEvent;
- (id)mediaCoverView;
- (id)mediaContentView;
- (id)genReportExtInfo;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)useCoverForContent;
- (id)name;
- (id)customView;
- (_Bool)preferCustomView;
- (id)headImageView;
- (id)title;
- (unsigned int)type;
- (id)getLocalDataItemWtihTid:(id)arg1;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;

@end

