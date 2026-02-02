//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDraftUploadProgress, WCFinderEditTextWidgetStateArray, WCFinderEventModel, WCFinderPostSessionModel;

@interface WCFinderFeedDraft : NSObject
{
    _Bool _isNoServerDraft;
    _Bool _cloudDraft;
    int _objectType;
    NSString *_draftId;
    unsigned long long _draftSource;
    WCFinderPostSessionModel *_postSession;
    double _createTime;
    WCFinderEventModel *_eventInfo;
    NSString *_username;
    WCFinderEditTextWidgetStateArray *_coverTextWidgetState;
    WCFinderDraftUploadProgress *_progress;
}

+ (void)__wcdb_column_constraint_11:(void *)arg1;
+ (void)__wcdb_column_constraint_10:(void *)arg1;
+ (id)swift_draftSource;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)draftSource;
+ (id)swift_coverTextWidgetState;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)coverTextWidgetState;
+ (id)swift_postSession;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)postSession;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)username;
+ (id)swift_eventInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)eventInfo;
+ (id)swift_cloudDraft;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)cloudDraft;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_isNoServerDraft;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)isNoServerDraft;
+ (id)swift_objectType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)objectType;
+ (id)swift_draftId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)draftId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDraftUploadProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) WCFinderEditTextWidgetStateArray *coverTextWidgetState; // @synthesize coverTextWidgetState=_coverTextWidgetState;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderEventModel *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) _Bool cloudDraft; // @synthesize cloudDraft=_cloudDraft;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool isNoServerDraft; // @synthesize isNoServerDraft=_isNoServerDraft;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(nonatomic) unsigned long long draftSource; // @synthesize draftSource=_draftSource;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(retain, nonatomic) NSString *draftId; // @synthesize draftId=_draftId;
- (_Bool)isModifyDraft;
- (long long)compareWithSorttime:(id)arg1;
- (void)setDataItem:(id)arg1;
- (id)dataItem;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

