//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSMutableArray, NSString, WCLocationInfo, WCStoryBubbleMutableArray, WCStoryCommentMutableArray, WCStoryMediaItem, WCStoryVisitorMutableArray;

@interface WCStoryDataItem
{
    _Bool _bChatRoomSyc;
    _Bool _isUploading;
    _Bool _isUploadRetrying;
    _Bool _isUploadFail;
    _Bool _isSelectFromAlbum;
    _Bool _isInvisible;
    int _createtime;
    int _uploadErrType;
    unsigned int _audioChannelsPerFrame;
    NSString *_tid;
    NSString *_username;
    NSString *_nickname;
    NSString *_tmpLocalId;
    NSString *_uploadErrMsg;
    long long _commentCount;
    unsigned long long _unreadBubbleCount;
    unsigned long long _unreadCommentCount;
    unsigned long long _unreadVisitCount;
    WCStoryMediaItem *_mediaItem;
    WCStoryCommentMutableArray *_commentList;
    WCStoryBubbleMutableArray *_bubbleList;
    WCStoryVisitorMutableArray *_visitorList;
    NSData *_localInfoData;
    NSString *_reportXml;
    NSString *_originVideoArgs;
    NSString *_exportVideoPath;
    unsigned long long _scope;
    NSArray *_aggregateBubbleList;
    unsigned long long _visitorCount;
    NSArray *_aggregateBubbleCommentVisitList;
    NSMutableArray *_originImageMd5s;
    WCLocationInfo *_locationInfo;
}

+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (id)swift_scope;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)scope;
+ (id)swift_isInvisible;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)isInvisible;
+ (id)swift_bChatRoomSyc;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)bChatRoomSyc;
+ (id)swift_reportXml;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)reportXml;
+ (id)swift_mediaItem;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)mediaItem;
+ (id)swift_localInfoData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)localInfoData;
+ (id)swift_visitorList;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)visitorList;
+ (id)swift_bubbleList;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)bubbleList;
+ (id)swift_commentList;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)commentList;
+ (id)swift_commentCount;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)commentCount;
+ (id)swift_uploadErrMsg;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)uploadErrMsg;
+ (id)swift_isUploadFail;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)isUploadFail;
+ (id)swift_uploadErrType;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)uploadErrType;
+ (id)swift_isUploading;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)isUploading;
+ (id)swift_createtime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)createtime;
+ (id)swift_tmpLocalId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)tmpLocalId;
+ (id)swift_nickname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)nickname;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) NSMutableArray *originImageMd5s; // @synthesize originImageMd5s=_originImageMd5s;
@property(retain, nonatomic) NSArray *aggregateBubbleCommentVisitList; // @synthesize aggregateBubbleCommentVisitList=_aggregateBubbleCommentVisitList;
@property(nonatomic) unsigned long long visitorCount; // @synthesize visitorCount=_visitorCount;
@property(copy, nonatomic) NSArray *aggregateBubbleList; // @synthesize aggregateBubbleList=_aggregateBubbleList;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(nonatomic) _Bool isInvisible; // @synthesize isInvisible=_isInvisible;
@property(nonatomic) _Bool isSelectFromAlbum; // @synthesize isSelectFromAlbum=_isSelectFromAlbum;
@property(nonatomic) unsigned int audioChannelsPerFrame; // @synthesize audioChannelsPerFrame=_audioChannelsPerFrame;
@property(retain, nonatomic) NSString *exportVideoPath; // @synthesize exportVideoPath=_exportVideoPath;
@property(retain, nonatomic) NSString *originVideoArgs; // @synthesize originVideoArgs=_originVideoArgs;
@property(retain, nonatomic) NSString *reportXml; // @synthesize reportXml=_reportXml;
@property(retain, nonatomic) NSData *localInfoData; // @synthesize localInfoData=_localInfoData;
@property(retain, nonatomic) WCStoryVisitorMutableArray *visitorList; // @synthesize visitorList=_visitorList;
@property(retain, nonatomic) WCStoryBubbleMutableArray *bubbleList; // @synthesize bubbleList=_bubbleList;
@property(retain, nonatomic) WCStoryCommentMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) unsigned long long unreadVisitCount; // @synthesize unreadVisitCount=_unreadVisitCount;
@property(nonatomic) unsigned long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) unsigned long long unreadBubbleCount; // @synthesize unreadBubbleCount=_unreadBubbleCount;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg=_uploadErrMsg;
@property(nonatomic) int uploadErrType; // @synthesize uploadErrType=_uploadErrType;
@property(nonatomic) _Bool isUploadFail; // @synthesize isUploadFail=_isUploadFail;
@property(nonatomic) _Bool isUploadRetrying; // @synthesize isUploadRetrying=_isUploadRetrying;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) int createtime; // @synthesize createtime=_createtime;
@property(nonatomic) _Bool bChatRoomSyc; // @synthesize bChatRoomSyc=_bChatRoomSyc;
@property(retain, nonatomic) NSString *tmpLocalId; // @synthesize tmpLocalId=_tmpLocalId;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)hadUnReadComment;
- (_Bool)isPostBySelf;
- (void)resetAggregateBubbleList;
- (_Bool)hasBubble;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (_Bool)dataItemHiddenInTimeline;
- (void)cleanDataItemFileCache;
- (id)getMediaWraps;
- (long long)compareTime:(id)arg1;
- (_Bool)isExpired;
- (_Bool)isVaild;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

