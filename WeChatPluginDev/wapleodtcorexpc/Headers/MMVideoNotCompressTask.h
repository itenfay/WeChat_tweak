//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAssetExportSession;

@interface MMVideoNotCompressTask
{
    MMAssetExportSession *_mmAssetExportSession;
}

+ (void)configureMMAssetExportSession:(id)arg1 forEncodeScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAssetExportSession *mmAssetExportSession; // @synthesize mmAssetExportSession=_mmAssetExportSession;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

