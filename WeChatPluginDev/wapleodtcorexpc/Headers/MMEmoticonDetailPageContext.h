//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmoticonStoreReportInfo, NSString, UserOpInfo, WCDataItem;

@interface MMEmoticonDetailPageContext
{
    _Bool _needScrollToBottom;
    _Bool _fromDesigner;
    _Bool _fastManagement;
    _Bool _allowLimitedModeEnter;
    NSString *_pid;
    EmoticonStoreItem *_storeItem;
    NSString *_customBackText;
    CDUnknownBlockType _finishInstallBlock;
    CDUnknownBlockType _finishUninstallBlock;
    WCDataItem *_timeLineDataItem;
    EmoticonStoreReportInfo *_reportInfo;
    unsigned long long _precedingScene;
    UserOpInfo *_endOpInfo;
    NSString *_sdkRequestID;
    NSString *_bypassMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bypassMsg; // @synthesize bypassMsg=_bypassMsg;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(retain, nonatomic) UserOpInfo *endOpInfo; // @synthesize endOpInfo=_endOpInfo;
@property(nonatomic) unsigned long long precedingScene; // @synthesize precedingScene=_precedingScene;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCDataItem *timeLineDataItem; // @synthesize timeLineDataItem=_timeLineDataItem;
@property(nonatomic) _Bool allowLimitedModeEnter; // @synthesize allowLimitedModeEnter=_allowLimitedModeEnter;
@property(copy, nonatomic) CDUnknownBlockType finishUninstallBlock; // @synthesize finishUninstallBlock=_finishUninstallBlock;
@property(copy, nonatomic) CDUnknownBlockType finishInstallBlock; // @synthesize finishInstallBlock=_finishInstallBlock;
@property(nonatomic) _Bool fastManagement; // @synthesize fastManagement=_fastManagement;
@property(nonatomic) _Bool fromDesigner; // @synthesize fromDesigner=_fromDesigner;
@property(retain, nonatomic) NSString *customBackText; // @synthesize customBackText=_customBackText;
@property(nonatomic) _Bool needScrollToBottom; // @synthesize needScrollToBottom=_needScrollToBottom;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (_Bool)allowsInEmoticonLimited;
- (id)pageCreator;
- (_Bool)isValid;

@end

