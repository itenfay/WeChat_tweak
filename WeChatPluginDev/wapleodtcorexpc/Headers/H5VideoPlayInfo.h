//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface H5VideoPlayInfo
{
    NSString *_videoUrl;
    NSString *_fileID;
    long long _fileSize;
    int _fileType;
    int _fileDuration;
    int _playID;
}

- (void).cxx_destruct;
@property(nonatomic) int playID; // @synthesize playID=_playID;
@property(nonatomic) int fileDuration; // @synthesize fileDuration=_fileDuration;
@property(nonatomic) int fileType; // @synthesize fileType=_fileType;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;

@end

