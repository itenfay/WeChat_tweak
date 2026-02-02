//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AppMsgShareItem, NSString;

@interface BTRecommendAppMsg : NSObject
{
    unsigned int _createTime;
    unsigned int _flag;
    unsigned int _videoWidth;
    unsigned int _videoHeight;
    unsigned int _styleFlag;
    unsigned int _recRk;
    NSString *_title;
    NSString *_digest;
    NSString *_contentUrl;
    NSString *_thumbUrl;
    NSString *_thumbUrl_1_1;
    NSString *_thumbUrl_235_1;
    NSString *_videoId;
    double _videoDuration;
    NSString *_recommendReason;
    NSString *_recInfo;
    AppMsgShareItem *_shareItem;
    NSString *_finderFeedXml;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finderFeedXml; // @synthesize finderFeedXml=_finderFeedXml;
@property(retain, nonatomic) AppMsgShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(copy, nonatomic) NSString *recInfo; // @synthesize recInfo=_recInfo;
@property(nonatomic) unsigned int recRk; // @synthesize recRk=_recRk;
@property(nonatomic) unsigned int styleFlag; // @synthesize styleFlag=_styleFlag;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *thumbUrl_235_1; // @synthesize thumbUrl_235_1=_thumbUrl_235_1;
@property(copy, nonatomic) NSString *thumbUrl_1_1; // @synthesize thumbUrl_1_1=_thumbUrl_1_1;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(copy, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

