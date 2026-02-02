//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderProfileCoverUploadTask;
@protocol WCFinderProfileCoverUploadCdnMgrDelegate;

@interface WCFinderProfileCoverUploadCdnMgr : NSObject
{
    id <WCFinderProfileCoverUploadCdnMgrDelegate> _delegate;
    WCFinderProfileCoverUploadTask *_currentTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileCoverUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(nonatomic) __weak id <WCFinderProfileCoverUploadCdnMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnUpload:(id)arg1;
- (void)startUploadFinderWithDataItem:(id)arg1;
- (id)init;

@end

