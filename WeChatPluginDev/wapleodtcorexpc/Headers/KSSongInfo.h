//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KSSongInfo : NSObject
{
    _Bool _localFile;
    unsigned int _databytesPerSecond;
    NSString *_artist;
    NSString *_title;
    NSString *_songURL;
    NSString *_songName;
    NSString *_fileVid;
    NSString *_fileExtension;
    double _durion;
    long long _fileSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) double durion; // @synthesize durion=_durion;
@property(nonatomic) unsigned int databytesPerSecond; // @synthesize databytesPerSecond=_databytesPerSecond;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSString *fileVid; // @synthesize fileVid=_fileVid;
@property(nonatomic) _Bool localFile; // @synthesize localFile=_localFile;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songURL; // @synthesize songURL=_songURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
- (id)description;

@end

