//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EmoticonCustomCreateDownloadTask
{
    CDUnknownBlockType _finderOnPrepareDownloadBlock;
    CDUnknownBlockType _finderOnStartDownloadBlock;
    CDUnknownBlockType _finderFailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finderFailBlock; // @synthesize finderFailBlock=_finderFailBlock;
@property(copy, nonatomic) CDUnknownBlockType finderOnStartDownloadBlock; // @synthesize finderOnStartDownloadBlock=_finderOnStartDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType finderOnPrepareDownloadBlock; // @synthesize finderOnPrepareDownloadBlock=_finderOnPrepareDownloadBlock;
- (_Bool)interruptDownload;
- (void)startDownload;

@end

