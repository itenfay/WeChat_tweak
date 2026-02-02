//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class MMAssetExportSession;

@interface MMVideoNotCompressTask
{
    MMAssetExportSession *_mmAssetExportSession;
}

+ (void)configureMMAssetExportSession:(id)arg1 forEncodeScene:(unsigned long long)arg2;
@property(retain, nonatomic) MMAssetExportSession *mmAssetExportSession; // @synthesize mmAssetExportSession=_mmAssetExportSession;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
