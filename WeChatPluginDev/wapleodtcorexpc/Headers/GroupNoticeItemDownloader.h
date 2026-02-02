//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GroupNoticeItem, NSMutableArray;
@protocol GroupNoticeItemDownloaderDelegate;

@interface GroupNoticeItemDownloader : NSObject
{
    NSMutableArray *m_downloadItemPart;
    NSMutableArray *m_downloadingPartInfo;
    id <GroupNoticeItemDownloaderDelegate> _delegate;
    GroupNoticeItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GroupNoticeItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <GroupNoticeItemDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_tryDownloadPart;
- (_Bool)isDownloadingData:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithItem:(id)arg1 delegate:(id)arg2;

@end

