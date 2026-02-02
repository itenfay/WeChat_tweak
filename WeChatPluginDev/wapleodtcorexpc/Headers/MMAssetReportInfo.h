//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAssetReportInfo
{
    _Bool _isVideo;
    unsigned long long _fileSize;
}

@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
- (id)getReportDict;

@end

