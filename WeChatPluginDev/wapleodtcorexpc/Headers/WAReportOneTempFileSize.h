//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportOneTempFileSize
{
    unsigned long long _fileAllocSize;
}

@property(nonatomic) unsigned long long fileAllocSize; // @synthesize fileAllocSize=_fileAllocSize;
- (id)reportString;
- (int)reportID;

@end

