//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseFile, NSString;

@interface WAFileDescriptorLogicFileWrap
{
    _Bool _isTmpOrStoreFile;
    int _flag;
    CBaseFile *_baseFile;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) _Bool isTmpOrStoreFile; // @synthesize isTmpOrStoreFile=_isTmpOrStoreFile;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) CBaseFile *baseFile; // @synthesize baseFile=_baseFile;
- (id)initWithBaseFile:(id)arg1 appId:(id)arg2;

@end

