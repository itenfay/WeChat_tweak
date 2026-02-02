//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnComVideoProcessInfo, CdnProgressInfo, NSMutableDictionary, NSMutableSet, NSString;
@protocol WCPlayerDownloadTaskInfoDelegate;

@interface WCPlayerDownloadTaskInfo : NSObject
{
    _Bool _bTaskStart;
    id <WCPlayerDownloadTaskInfoDelegate> _delegate;
    NSMutableDictionary *_dicTaskBlock;
    long long _createTime;
    NSString *_nsIdentifier;
    NSMutableSet *_allTask;
    CdnProgressInfo *_progressInfo;
    CdnComVideoProcessInfo *_m3u8ProgressInfo;
    CdnComVideoProcessInfo *_moovProgressInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnComVideoProcessInfo *moovProgressInfo; // @synthesize moovProgressInfo=_moovProgressInfo;
@property(retain, nonatomic) CdnComVideoProcessInfo *m3u8ProgressInfo; // @synthesize m3u8ProgressInfo=_m3u8ProgressInfo;
@property(retain, nonatomic) CdnProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(retain, nonatomic) NSMutableSet *allTask; // @synthesize allTask=_allTask;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool bTaskStart; // @synthesize bTaskStart=_bTaskStart;
@property(retain, nonatomic) NSMutableDictionary *dicTaskBlock; // @synthesize dicTaskBlock=_dicTaskBlock;
@property(nonatomic) __weak id <WCPlayerDownloadTaskInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)onDownloadComplete:(id)arg1;
- (void)onDownloadProgress:(id)arg1;
- (void)onM3u8Ready:(id)arg1;
- (void)onMoovReady:(id)arg1;
@property(readonly, nonatomic) int count;
- (void)removeTaskWithId:(unsigned int)arg1;
- (void)reuseDownloadTaskWithTaskId:(unsigned int)arg1 block:(id)arg2;
- (id)initWithTaskId:(unsigned int)arg1 identifier:(id)arg2;

@end

