//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnSnsTaskInfo, NSMutableArray;

@interface MMTextStateMediaDownloadImageCdnMgr : NSObject
{
    NSMutableArray *_arrQueue;
    CdnSnsTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnSnsTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *arrQueue; // @synthesize arrQueue=_arrQueue;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (id)getPathForMediaWithTaskInfo:(id)arg1;
- (void)realStartDownloadWithTaskInfo:(id)arg1;
- (void)startDownloadWithTaskInfo:(id)arg1;
- (void)CheckQueue;
- (id)generateDownloadTaskInfo:(id)arg1 isThumb:(_Bool)arg2;
- (_Bool)IsImageDownloadingWithMediaItem:(id)arg1 isThumb:(_Bool)arg2;
- (void)StartDownloadImageWithMediaItem:(id)arg1 Priority:(_Bool)arg2 isThumb:(_Bool)arg3;
- (void)StartDownloadImageWithMediaItem:(id)arg1 isThumb:(_Bool)arg2;
- (void)StartPreloadImageWithItems:(id)arg1 isThumb:(_Bool)arg2;
- (id)init;

@end

