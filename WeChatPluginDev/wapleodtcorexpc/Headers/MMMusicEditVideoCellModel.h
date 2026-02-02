//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, NSMutableDictionary, NSString, UIImage, WCFinderMediaInfo;

@interface MMMusicEditVideoCellModel : NSObject
{
    NSString *_videoPath;
    UIImage *_localThumbImage;
    AVAsset *_slowMotionAvAsset;
    WCFinderMediaInfo *_mediaInfo;
    double _videoDuration;
    double _videoWidth;
    double _videoHeight;
    double _musicStartTime;
    double _musicEndTime;
    NSMutableDictionary *_extInfo;
    double _cropStartPos;
}

- (void).cxx_destruct;
@property(nonatomic) double cropStartPos; // @synthesize cropStartPos=_cropStartPos;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) double musicEndTime; // @synthesize musicEndTime=_musicEndTime;
@property(nonatomic) double musicStartTime; // @synthesize musicStartTime=_musicStartTime;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) AVAsset *slowMotionAvAsset; // @synthesize slowMotionAvAsset=_slowMotionAvAsset;
@property(retain, nonatomic) UIImage *localThumbImage; // @synthesize localThumbImage=_localThumbImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

