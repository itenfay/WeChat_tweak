//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RingTone, WCFinderDataItem, WCFinderMediaInfo;

@interface VideoRingMediaModel : NSObject
{
    _Bool _isCroped;
    WCFinderDataItem *_dataItem;
    RingTone *_originRing;
    double _cropStartTime;
    double _cropEndTime;
    NSString *_friendUserName;
    NSString *_friendNickName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCroped; // @synthesize isCroped=_isCroped;
@property(copy, nonatomic) NSString *friendNickName; // @synthesize friendNickName=_friendNickName;
@property(copy, nonatomic) NSString *friendUserName; // @synthesize friendUserName=_friendUserName;
@property(nonatomic) double cropEndTime; // @synthesize cropEndTime=_cropEndTime;
@property(nonatomic) double cropStartTime; // @synthesize cropStartTime=_cropStartTime;
@property(retain, nonatomic) RingTone *originRing; // @synthesize originRing=_originRing;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (id)getRingAudioFilePath;
- (id)getRingRawFilePath:(id)arg1;
- (id)downloadedLocalFilePath;
- (id)cropedTempAudioFilePath;
- (id)genAudioFileTransferTaskWith:(id)arg1;
@property(readonly, nonatomic) double videoDuration;
- (_Bool)hasLocalVideoFile;
- (id)formatVideoPath;
@property(readonly, nonatomic) WCFinderMediaInfo *mediaInfo;
- (id)initWithDataItem:(id)arg1 originRingBack:(id)arg2;

@end

