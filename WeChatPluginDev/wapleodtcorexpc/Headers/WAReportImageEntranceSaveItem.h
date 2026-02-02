//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportImageEntranceSaveItem
{
    unsigned int _saveTimeStamp;
    NSString *_userName;
    NSString *_currentAppId;
    NSString *_currentPath;
    NSString *_imageSrc;
    NSString *_imageAppId;
    NSString *_imagePath;
    NSString *_imageKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSString *imageAppId; // @synthesize imageAppId=_imageAppId;
@property(copy, nonatomic) NSString *imageSrc; // @synthesize imageSrc=_imageSrc;
@property(copy, nonatomic) NSString *currentPath; // @synthesize currentPath=_currentPath;
@property(copy, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(nonatomic) unsigned int saveTimeStamp; // @synthesize saveTimeStamp=_saveTimeStamp;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)reportString;
- (int)reportID;

@end

