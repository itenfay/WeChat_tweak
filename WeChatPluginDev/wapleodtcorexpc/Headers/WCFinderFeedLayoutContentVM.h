//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderStreamCard, FinderStreamTxtCard, NSArray, NSData, NSMutableSet, NSString;
@protocol WCFinderFeedLayoutContentVMDelegate;

@interface WCFinderFeedLayoutContentVM
{
    _Bool _continueFlag;
    _Bool _isRefreshing;
    _Bool _hasMoreColumns;
    _Bool _waittingRefresh;
    _Bool _preLoadRefresh;
    NSString *_sortID;
    id <WCFinderFeedLayoutContentVMDelegate> _delegate;
    NSString *_titleWording;
    NSString *_linkWording;
    NSArray *_cardFeedArray;
    NSData *_cardBuffer;
    NSData *_lastBuffer;
    unsigned long long _fetchScene;
    NSString *_endWording;
    NSString *_secondTitle;
    unsigned long long _totalObjectCount;
    FinderStreamCard *_streamCard;
    FinderStreamTxtCard *_textCard;
    unsigned long long _dividerType;
    NSString *_iconUrl;
    unsigned long long _exposeBeginTime;
    NSMutableSet *_exposeTidSet;
    NSString *_layoutID;
}

+ (_Bool)validDivider:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool preLoadRefresh; // @synthesize preLoadRefresh=_preLoadRefresh;
@property(nonatomic) _Bool waittingRefresh; // @synthesize waittingRefresh=_waittingRefresh;
@property(copy, nonatomic) NSString *layoutID; // @synthesize layoutID=_layoutID;
@property(retain, nonatomic) NSMutableSet *exposeTidSet; // @synthesize exposeTidSet=_exposeTidSet;
@property(nonatomic) unsigned long long exposeBeginTime; // @synthesize exposeBeginTime=_exposeBeginTime;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long dividerType; // @synthesize dividerType=_dividerType;
@property(retain, nonatomic) FinderStreamTxtCard *textCard; // @synthesize textCard=_textCard;
@property(retain, nonatomic) FinderStreamCard *streamCard; // @synthesize streamCard=_streamCard;
@property(nonatomic) unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property(nonatomic) _Bool hasMoreColumns; // @synthesize hasMoreColumns=_hasMoreColumns;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NSString *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) NSString *endWording; // @synthesize endWording=_endWording;
@property(nonatomic) unsigned long long fetchScene; // @synthesize fetchScene=_fetchScene;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(copy, nonatomic) NSArray *cardFeedArray; // @synthesize cardFeedArray=_cardFeedArray;
@property(retain, nonatomic) NSString *linkWording; // @synthesize linkWording=_linkWording;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(nonatomic) __weak id <WCFinderFeedLayoutContentVMDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *sortID; // @synthesize sortID=_sortID;
- (_Bool)isFeedContainVideo;
- (id)currentDisplayMediaInfo;
- (void)removeCardBufferAtIndex:(unsigned long long)arg1;
- (_Bool)isLayoutFeed;
- (unsigned long long)rowForContent;
- (unsigned long long)mediaType;
- (id)contentTid;
- (id)initWithDataItem:(id)arg1 dataItemArray:(id)arg2 lastBuffer:(id)arg3 continueFlag:(_Bool)arg4 scene:(int)arg5 dataScene:(id)arg6 titleWording:(id)arg7;
- (void)setupContentDatas:(id)arg1;
- (void)setupWithCard:(id)arg1;
- (id)initWithSnSLiveList:(int)arg1 dataScene:(id)arg2;
- (id)initWithStreamCard:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (id)initWithDivider:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;

@end

