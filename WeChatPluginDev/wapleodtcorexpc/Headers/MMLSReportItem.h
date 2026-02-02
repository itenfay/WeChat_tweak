//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLSReportItem : NSObject
{
    _Bool _singleChat;
    unsigned int _reportStart;
    unsigned int _limitSession;
    unsigned long long _sessionCnt;
    unsigned long long _msgSize;
    unsigned long long _msgCount;
    unsigned long long _audioSize;
    unsigned long long _audioCount;
    unsigned long long _thumbSize;
    unsigned long long _thumbCount;
    unsigned long long _videoSize;
    unsigned long long _videoCount;
    unsigned long long _imageSize;
    unsigned long long _imageCount;
    unsigned long long _fileSize;
    unsigned long long _fileCount;
    unsigned long long _recordSize;
    unsigned long long _recordCount;
    unsigned long long _imageThumbSize;
    unsigned long long _imageThumbCount;
    unsigned long long _videoThumbSize;
    unsigned long long _videoThumbCount;
    unsigned long long _appThumbSize;
    unsigned long long _appThumbCount;
}

@property(nonatomic) unsigned long long appThumbCount; // @synthesize appThumbCount=_appThumbCount;
@property(nonatomic) unsigned long long appThumbSize; // @synthesize appThumbSize=_appThumbSize;
@property(nonatomic) unsigned long long videoThumbCount; // @synthesize videoThumbCount=_videoThumbCount;
@property(nonatomic) unsigned long long videoThumbSize; // @synthesize videoThumbSize=_videoThumbSize;
@property(nonatomic) unsigned long long imageThumbCount; // @synthesize imageThumbCount=_imageThumbCount;
@property(nonatomic) unsigned long long imageThumbSize; // @synthesize imageThumbSize=_imageThumbSize;
@property(nonatomic) unsigned long long recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) unsigned long long recordSize; // @synthesize recordSize=_recordSize;
@property(nonatomic) unsigned long long fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long thumbCount; // @synthesize thumbCount=_thumbCount;
@property(nonatomic) unsigned long long thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) unsigned long long audioCount; // @synthesize audioCount=_audioCount;
@property(nonatomic) unsigned long long audioSize; // @synthesize audioSize=_audioSize;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(nonatomic) unsigned long long msgSize; // @synthesize msgSize=_msgSize;
@property(nonatomic) unsigned long long sessionCnt; // @synthesize sessionCnt=_sessionCnt;
@property(nonatomic) unsigned int limitSession; // @synthesize limitSession=_limitSession;
@property(nonatomic) _Bool singleChat; // @synthesize singleChat=_singleChat;
@property(nonatomic) unsigned int reportStart; // @synthesize reportStart=_reportStart;
- (id)getReportLog3;
- (id)getReportLog2;
- (id)getReportLog1;
- (id)init;

@end

