//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol LZAudioDataDownloadDelegate;

@interface LZAudioDataDownloader : NSObject
{
    id <LZAudioDataDownloadDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LZAudioDataDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (id)downloadDetailInfo;
- (_Bool)isErrorCanRetry:(id)arg1;
- (double)downloadCostTime;
- (double)downloadSpeed;
- (long long)continuousLengh;
- (struct _NSRange)downloadRange;
- (id)taskItem;
- (_Bool)beginDownload:(id)arg1;
- (void)cancel;

@end

