//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface WXMediaInternalMessage : NSObject
{
    _Bool appBrandWithShareTicket;
    _Bool isAppBrandUpdatableMessage;
    _Bool isSecrectMessage;
    _Bool bIsShowLaunchFailToast;
    _Bool _disableForward;
    int _weworkSubType;
    unsigned int _musicVideoDuration;
    unsigned int _isVideo;
    unsigned int _videoDuration;
    NSString *title;
    NSString *description;
    NSData *thumbData;
    NSString *mediaTagName;
    unsigned long long objectType;
    NSString *extInfo;
    NSString *fileExt;
    NSData *fileData;
    NSString *mediaUrl;
    NSString *mediaLowBandUrl;
    NSString *mediaDataUrl;
    NSString *mediaLowBandDataUrl;
    NSString *messageExt;
    NSString *messageAction;
    NSArray *fileDatas;
    NSString *appBrandUserName;
    NSString *appBrandPath;
    NSDictionary *appBrandExtraInfoDic;
    NSString *parameter;
    NSString *fullScheme;
    unsigned long long showType;
    NSData *_hdThumbData;
    NSString *_appBrandAppid;
    unsigned long long _miniProgramType;
    NSDictionary *_webPageExtraInfoDic;
    NSString *_sightCdnVideoUrl;
    NSString *_sightCdnThumbUrl;
    NSString *_sightAppThumbUrl;
    NSString *_enterpriseCardContent;
    long long _enterpriseCardMsgType;
    NSString *_songAlbumUrl;
    NSString *_songLyric;
    long long _brandOfficialFlag;
    long long _relievedBuyFlag;
    NSString *_musicVideoSingerName;
    NSString *_musicVideoAlbumName;
    NSString *_musicVideoMusicGenre;
    unsigned long long _musicVideoIssueDate;
    NSString *_musicVideoIdentification;
    NSData *_musicVideoHdAlbumThumbData;
    NSString *_musicVideoOperationUrl;
    NSString *_videoFileLocalIdentifier;
    NSString *_musicMid;
    NSString *_shareData;
    NSData *_gameThumbData;
    struct CGSize _hdThumbImageSize;
}

+ (id)message;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *gameThumbData; // @synthesize gameThumbData=_gameThumbData;
@property(copy, nonatomic) NSString *shareData; // @synthesize shareData=_shareData;
@property(nonatomic) unsigned int videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *musicMid; // @synthesize musicMid=_musicMid;
@property(copy, nonatomic) NSString *videoFileLocalIdentifier; // @synthesize videoFileLocalIdentifier=_videoFileLocalIdentifier;
@property(copy, nonatomic) NSString *musicVideoOperationUrl; // @synthesize musicVideoOperationUrl=_musicVideoOperationUrl;
@property(nonatomic) unsigned int musicVideoDuration; // @synthesize musicVideoDuration=_musicVideoDuration;
@property(retain, nonatomic) NSData *musicVideoHdAlbumThumbData; // @synthesize musicVideoHdAlbumThumbData=_musicVideoHdAlbumThumbData;
@property(copy, nonatomic) NSString *musicVideoIdentification; // @synthesize musicVideoIdentification=_musicVideoIdentification;
@property(nonatomic) unsigned long long musicVideoIssueDate; // @synthesize musicVideoIssueDate=_musicVideoIssueDate;
@property(copy, nonatomic) NSString *musicVideoMusicGenre; // @synthesize musicVideoMusicGenre=_musicVideoMusicGenre;
@property(copy, nonatomic) NSString *musicVideoAlbumName; // @synthesize musicVideoAlbumName=_musicVideoAlbumName;
@property(copy, nonatomic) NSString *musicVideoSingerName; // @synthesize musicVideoSingerName=_musicVideoSingerName;
@property(nonatomic) long long relievedBuyFlag; // @synthesize relievedBuyFlag=_relievedBuyFlag;
@property(nonatomic) long long brandOfficialFlag; // @synthesize brandOfficialFlag=_brandOfficialFlag;
@property(copy, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(copy, nonatomic) NSString *songAlbumUrl; // @synthesize songAlbumUrl=_songAlbumUrl;
@property(nonatomic) int weworkSubType; // @synthesize weworkSubType=_weworkSubType;
@property(nonatomic) long long enterpriseCardMsgType; // @synthesize enterpriseCardMsgType=_enterpriseCardMsgType;
@property(copy, nonatomic) NSString *enterpriseCardContent; // @synthesize enterpriseCardContent=_enterpriseCardContent;
@property(copy, nonatomic) NSString *sightAppThumbUrl; // @synthesize sightAppThumbUrl=_sightAppThumbUrl;
@property(retain, nonatomic) NSString *sightCdnThumbUrl; // @synthesize sightCdnThumbUrl=_sightCdnThumbUrl;
@property(retain, nonatomic) NSString *sightCdnVideoUrl; // @synthesize sightCdnVideoUrl=_sightCdnVideoUrl;
@property(retain, nonatomic) NSDictionary *webPageExtraInfoDic; // @synthesize webPageExtraInfoDic=_webPageExtraInfoDic;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) _Bool disableForward; // @synthesize disableForward=_disableForward;
@property(copy, nonatomic) NSString *appBrandAppid; // @synthesize appBrandAppid=_appBrandAppid;
@property(nonatomic) struct CGSize hdThumbImageSize; // @synthesize hdThumbImageSize=_hdThumbImageSize;
@property(retain, nonatomic) NSData *hdThumbData; // @synthesize hdThumbData=_hdThumbData;
@property(nonatomic) _Bool bIsShowLaunchFailToast; // @synthesize bIsShowLaunchFailToast;
@property(nonatomic) unsigned long long showType; // @synthesize showType;
@property(copy, nonatomic) NSString *fullScheme; // @synthesize fullScheme;
@property(copy, nonatomic) NSString *parameter; // @synthesize parameter;
@property(retain, nonatomic) NSDictionary *appBrandExtraInfoDic; // @synthesize appBrandExtraInfoDic;
@property(nonatomic) _Bool isSecrectMessage; // @synthesize isSecrectMessage;
@property(nonatomic) _Bool isAppBrandUpdatableMessage; // @synthesize isAppBrandUpdatableMessage;
@property(nonatomic) _Bool appBrandWithShareTicket; // @synthesize appBrandWithShareTicket;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName;
@property(retain, nonatomic) NSArray *fileDatas; // @synthesize fileDatas;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt;
@property(retain, nonatomic) NSString *mediaLowBandDataUrl; // @synthesize mediaLowBandDataUrl;
@property(retain, nonatomic) NSString *mediaDataUrl; // @synthesize mediaDataUrl;
@property(retain, nonatomic) NSString *mediaLowBandUrl; // @synthesize mediaLowBandUrl;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned long long objectType; // @synthesize objectType;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)logDescription;
- (id)init;

@end

