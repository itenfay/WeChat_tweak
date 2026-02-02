//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FileDetailLogicController, MMListenLocalFileInfo, MMMultipleMusicViewController, MMMusicInfo, NSString;

@interface MMMusicLocalFileDataInfo
{
    MMListenLocalFileInfo *_tingFileInfo;
    MMMusicInfo *_musicInfo;
    unsigned long long _source;
    MMMultipleMusicViewController *_vcDelegate;
    FileDetailLogicController *_baseLogicController;
    NSString *_filePath;
    NSString *_fileName;
}

+ (_Bool)canUseMusicPlayerWithFavData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) FileDetailLogicController *baseLogicController; // @synthesize baseLogicController=_baseLogicController;
@property(nonatomic) __weak MMMultipleMusicViewController *vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) MMListenLocalFileInfo *tingFileInfo; // @synthesize tingFileInfo=_tingFileInfo;
- (void)initMusicInfo;
- (id)initFromFilePath:(id)arg1 fileName:(id)arg2 fileSize:(unsigned int)arg3;
- (id)initFromEmailAttach:(id)arg1 AndEmailID:(id)arg2;
- (id)initFromRecordDataWrap:(id)arg1;
- (id)initFromGroupNoticeItem:(id)arg1 favData:(id)arg2;
- (id)initFromFavItem:(id)arg1 andFavData:(id)arg2;
- (id)initFromMsgWrap:(id)arg1;

@end

