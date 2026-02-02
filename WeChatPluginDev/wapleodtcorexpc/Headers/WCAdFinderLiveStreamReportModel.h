//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdFinderLiveStreamReportModel
{
    int _joinLiveFlag;
    unsigned int _joinLiveStartTimestamp;
    unsigned int _joinLiveEndTimestamp;
    int _displayType;
    int _showBrandWallpaperImage;
    int _showFrontImage;
    int _horizontalGravity;
    int _verticalGravity;
    long long _totalPlayTime;
}

@property(nonatomic) int verticalGravity; // @synthesize verticalGravity=_verticalGravity;
@property(nonatomic) int horizontalGravity; // @synthesize horizontalGravity=_horizontalGravity;
@property(nonatomic) int showFrontImage; // @synthesize showFrontImage=_showFrontImage;
@property(nonatomic) int showBrandWallpaperImage; // @synthesize showBrandWallpaperImage=_showBrandWallpaperImage;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(nonatomic) unsigned int joinLiveEndTimestamp; // @synthesize joinLiveEndTimestamp=_joinLiveEndTimestamp;
@property(nonatomic) unsigned int joinLiveStartTimestamp; // @synthesize joinLiveStartTimestamp=_joinLiveStartTimestamp;
@property(nonatomic) int joinLiveFlag; // @synthesize joinLiveFlag=_joinLiveFlag;
@property(nonatomic) long long totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;

@end

