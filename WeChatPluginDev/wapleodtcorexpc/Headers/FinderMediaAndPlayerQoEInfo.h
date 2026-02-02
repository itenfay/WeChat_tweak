//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FinderMediaAndPlayerQoEInfo : NSObject
{
    _Bool _adajustUpLevel;
    _Bool _adajustDownLevel;
    _Bool _bReadyToPlay;
    int _bitrate;
    int _quality;
    float _duration;
    int _preloadDuration;
    int _recieveMoovDataCost;
    int _firstVideoFrameRenderedCost;
    int _playDownloadSpeed;
    float _playablePos;
    int _loopCount;
    NSString *_tid;
    NSMutableArray *_specsArray;
    NSString *_fileformat;
    long long _downloadSize;
    long long _showLoadingCount;
    long long _stalledCount;
    double _totalPlaybackTime;
    double _playbackTime;
}

+ (id)defaultFinderPlayerQoEInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool bReadyToPlay; // @synthesize bReadyToPlay=_bReadyToPlay;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) float playablePos; // @synthesize playablePos=_playablePos;
@property(nonatomic) int playDownloadSpeed; // @synthesize playDownloadSpeed=_playDownloadSpeed;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) double totalPlaybackTime; // @synthesize totalPlaybackTime=_totalPlaybackTime;
@property(nonatomic) int firstVideoFrameRenderedCost; // @synthesize firstVideoFrameRenderedCost=_firstVideoFrameRenderedCost;
@property(nonatomic) int recieveMoovDataCost; // @synthesize recieveMoovDataCost=_recieveMoovDataCost;
@property(nonatomic) long long stalledCount; // @synthesize stalledCount=_stalledCount;
@property(nonatomic) long long showLoadingCount; // @synthesize showLoadingCount=_showLoadingCount;
@property(nonatomic) _Bool adajustDownLevel; // @synthesize adajustDownLevel=_adajustDownLevel;
@property(nonatomic) _Bool adajustUpLevel; // @synthesize adajustUpLevel=_adajustUpLevel;
@property(nonatomic) int preloadDuration; // @synthesize preloadDuration=_preloadDuration;
@property(nonatomic) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) int quality; // @synthesize quality=_quality;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSString *fileformat; // @synthesize fileformat=_fileformat;
@property(retain, nonatomic) NSMutableArray *specsArray; // @synthesize specsArray=_specsArray;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

