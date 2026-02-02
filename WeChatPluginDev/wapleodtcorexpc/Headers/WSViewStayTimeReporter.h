//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WSViewStayTimeReporter
{
    unsigned int _searchScene;
    unsigned long long _scene;
    unsigned long long _enterType;
    NSString *_content;
    NSString *_connectid;
    double _beginTime;
    double _stayDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double stayDuration; // @synthesize stayDuration=_stayDuration;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *connectid; // @synthesize connectid=_connectid;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
- (void)doReport;
- (unsigned int)reportKvId;
- (id)reportContent;
- (void)endTiming;
- (void)beginTiming;
- (void)commonInit;
- (id)init;
- (id)initWithSearchScene:(unsigned int)arg1;
- (id)initWithTagInfo:(id)arg1 query:(id)arg2;
- (id)initWithFingertipReportModel:(id)arg1;
- (id)initWithImageSearchEntity:(id)arg1;

@end

