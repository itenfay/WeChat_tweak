//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage;

@interface MJTemplateSessionExportSyncOperation
{
    UIImage *_coverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cancelExportingCreationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)exportCreationWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithMaasCore:(id)arg1 maasSession:(id)arg2 sessionKey:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 outputFilePath:(id)arg5 exportSettings:(id)arg6 progressHandler:(CDUnknownBlockType)arg7 resultHandler:(CDUnknownBlockType)arg8;

@end

