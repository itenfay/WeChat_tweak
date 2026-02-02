//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMMusicFinderVideoDownloadHelperDelegate;

@interface MMMusicFinderVideoDownloadHelper
{
    id <MMMusicFinderVideoDownloadHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <MMMusicFinderVideoDownloadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (id)init;

@end

