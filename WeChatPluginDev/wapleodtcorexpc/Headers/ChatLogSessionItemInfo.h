//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ChatLogSessionItemInfo : NSObject
{
    unsigned int _msgOldestTime;
    unsigned int _msgNewestTime;
    unsigned int _sessionType;
    unsigned int _lastMsgTime;
    NSString *_session;
    NSString *_username;
    unsigned long long _msgCount;
    unsigned long long _msgEstimateSize;
    unsigned long long _resSize;
    unsigned long long _imageSize;
    unsigned long long _videoSize;
    unsigned long long _appFileSize;
    unsigned long long _otherFileSize;
    unsigned long long _thumbFileSize;
    unsigned long long _thumbFileCount;
    unsigned long long _audioFileSize;
    unsigned long long _audioFileCount;
    unsigned long long _videoThumbSize;
    unsigned long long _videoThumbCount;
    unsigned long long _videoFileCount;
    unsigned long long _imageThumbSize;
    unsigned long long _imageThumbCount;
    unsigned long long _imageFileCount;
    unsigned long long _appThumbSize;
    unsigned long long _appThumbCount;
    unsigned long long _recordFileCount;
    unsigned long long _fileFileCount;
    unsigned long long _rawImageSize;
    unsigned long long _rawImageCount;
    unsigned long long _rawVideoSize;
    unsigned long long _rawVideoCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_rawVideoCount;
+ (void)PBArrayAdd_rawVideoSize;
+ (void)PBArrayAdd_rawImageCount;
+ (void)PBArrayAdd_rawImageSize;
+ (void)PBArrayAdd_fileFileCount;
+ (void)PBArrayAdd_recordFileCount;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_imageFileCount;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_videoFileCount;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoThumbSize;
+ (void)PBArrayAdd_audioFileCount;
+ (void)PBArrayAdd_audioFileSize;
+ (void)PBArrayAdd_thumbFileCount;
+ (void)PBArrayAdd_thumbFileSize;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_otherFileSize;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_resSize;
+ (void)PBArrayAdd_sessionType;
+ (void)PBArrayAdd_msgNewestTime;
+ (void)PBArrayAdd_msgOldestTime;
+ (void)PBArrayAdd_msgEstimateSize;
+ (void)PBArrayAdd_msgCount;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_session;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rawVideoCount; // @synthesize rawVideoCount=_rawVideoCount;
@property(nonatomic) unsigned long long rawVideoSize; // @synthesize rawVideoSize=_rawVideoSize;
@property(nonatomic) unsigned long long rawImageCount; // @synthesize rawImageCount=_rawImageCount;
@property(nonatomic) unsigned long long rawImageSize; // @synthesize rawImageSize=_rawImageSize;
@property(nonatomic) unsigned long long fileFileCount; // @synthesize fileFileCount=_fileFileCount;
@property(nonatomic) unsigned long long recordFileCount; // @synthesize recordFileCount=_recordFileCount;
@property(nonatomic) unsigned long long appThumbCount; // @synthesize appThumbCount=_appThumbCount;
@property(nonatomic) unsigned long long appThumbSize; // @synthesize appThumbSize=_appThumbSize;
@property(nonatomic) unsigned long long imageFileCount; // @synthesize imageFileCount=_imageFileCount;
@property(nonatomic) unsigned long long imageThumbCount; // @synthesize imageThumbCount=_imageThumbCount;
@property(nonatomic) unsigned long long imageThumbSize; // @synthesize imageThumbSize=_imageThumbSize;
@property(nonatomic) unsigned long long videoFileCount; // @synthesize videoFileCount=_videoFileCount;
@property(nonatomic) unsigned long long videoThumbCount; // @synthesize videoThumbCount=_videoThumbCount;
@property(nonatomic) unsigned long long videoThumbSize; // @synthesize videoThumbSize=_videoThumbSize;
@property(nonatomic) unsigned long long audioFileCount; // @synthesize audioFileCount=_audioFileCount;
@property(nonatomic) unsigned long long audioFileSize; // @synthesize audioFileSize=_audioFileSize;
@property(nonatomic) unsigned long long thumbFileCount; // @synthesize thumbFileCount=_thumbFileCount;
@property(nonatomic) unsigned long long thumbFileSize; // @synthesize thumbFileSize=_thumbFileSize;
@property(nonatomic) unsigned int lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(nonatomic) unsigned long long otherFileSize; // @synthesize otherFileSize=_otherFileSize;
@property(nonatomic) unsigned long long appFileSize; // @synthesize appFileSize=_appFileSize;
@property(nonatomic) unsigned long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long resSize; // @synthesize resSize=_resSize;
@property(nonatomic) unsigned int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) unsigned int msgNewestTime; // @synthesize msgNewestTime=_msgNewestTime;
@property(nonatomic) unsigned int msgOldestTime; // @synthesize msgOldestTime=_msgOldestTime;
@property(nonatomic) unsigned long long msgEstimateSize; // @synthesize msgEstimateSize=_msgEstimateSize;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *session; // @synthesize session=_session;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

