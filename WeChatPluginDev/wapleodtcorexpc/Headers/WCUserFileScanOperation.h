//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray;

@interface WCUserFileScanOperation
{
    _Bool _shouldQuickIgnoreScan;
    _Bool _backgroundTaskEnabled;
    _Bool _isCancelled;
    unsigned int _slowdownCheckFileNum;
    unsigned int _slowdownSleepMillisecond;
    unsigned int _currentScanFileNum;
    CDUnknownBlockType _customFileOperation;
    CDUnknownBlockType _customPreFileCompetion;
    CDUnknownBlockType _customAfterFileCompletion;
    NSDictionary *_scanFolderConfig;
    NSMutableArray *_scanFolderItemStack;
}

- (void).cxx_destruct;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool backgroundTaskEnabled; // @synthesize backgroundTaskEnabled=_backgroundTaskEnabled;
@property(retain, nonatomic) NSMutableArray *scanFolderItemStack; // @synthesize scanFolderItemStack=_scanFolderItemStack;
@property(nonatomic) unsigned int currentScanFileNum; // @synthesize currentScanFileNum=_currentScanFileNum;
@property(retain, nonatomic) NSDictionary *scanFolderConfig; // @synthesize scanFolderConfig=_scanFolderConfig;
@property(copy) CDUnknownBlockType customAfterFileCompletion; // @synthesize customAfterFileCompletion=_customAfterFileCompletion;
@property(copy) CDUnknownBlockType customPreFileCompetion; // @synthesize customPreFileCompetion=_customPreFileCompetion;
@property(copy) CDUnknownBlockType customFileOperation; // @synthesize customFileOperation=_customFileOperation;
@property(nonatomic) unsigned int slowdownSleepMillisecond; // @synthesize slowdownSleepMillisecond=_slowdownSleepMillisecond;
@property(nonatomic) unsigned int slowdownCheckFileNum; // @synthesize slowdownCheckFileNum=_slowdownCheckFileNum;
@property(nonatomic) _Bool shouldQuickIgnoreScan; // @synthesize shouldQuickIgnoreScan=_shouldQuickIgnoreScan;
- (void)cancel;
- (_Bool)pop_scanFolderBegin;
- (void)push_scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (void)scanFolderBeginWithParentPath:(id)arg1 scanType:(unsigned long long)arg2 depth:(unsigned long long)arg3;
- (void)run;
- (void)scanUserDiretory;
- (void)start;
- (id)initWithPreAction:(CDUnknownBlockType)arg1 afterAction:(CDUnknownBlockType)arg2 fileAction:(CDUnknownBlockType)arg3;

@end

