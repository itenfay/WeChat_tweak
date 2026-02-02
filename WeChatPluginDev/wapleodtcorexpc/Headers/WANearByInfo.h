//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WANearByPreViewItem;

@interface WANearByInfo
{
    _Bool _disappearOneClick;
    _Bool _openWxa;
    unsigned int _displayStrategyId;
    unsigned int _nearByAppH5LifeSpan;
    unsigned int _appCount;
    unsigned int _nearByAppThreshold;
    unsigned int _startTime;
    NSString *_nearByAppH5String;
    NSString *_listId;
    NSArray *_previewItems;
    NSString *_wording;
    NSString *_wordingColor;
    NSString *_noticeWording;
    NSString *_noticeWordingBgColor;
    WANearByPreViewItem *_nearByEntry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WANearByPreViewItem *nearByEntry; // @synthesize nearByEntry=_nearByEntry;
@property(nonatomic) _Bool openWxa; // @synthesize openWxa=_openWxa;
@property(nonatomic) _Bool disappearOneClick; // @synthesize disappearOneClick=_disappearOneClick;
@property(copy, nonatomic) NSString *noticeWordingBgColor; // @synthesize noticeWordingBgColor=_noticeWordingBgColor;
@property(copy, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(copy, nonatomic) NSString *wordingColor; // @synthesize wordingColor=_wordingColor;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
@property(nonatomic) unsigned int nearByAppThreshold; // @synthesize nearByAppThreshold=_nearByAppThreshold;
@property(copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
@property(nonatomic) unsigned int appCount; // @synthesize appCount=_appCount;
@property(nonatomic) unsigned int nearByAppH5LifeSpan; // @synthesize nearByAppH5LifeSpan=_nearByAppH5LifeSpan;
@property(nonatomic) unsigned int displayStrategyId; // @synthesize displayStrategyId=_displayStrategyId;
@property(copy, nonatomic) NSString *nearByAppH5String; // @synthesize nearByAppH5String=_nearByAppH5String;

@end

