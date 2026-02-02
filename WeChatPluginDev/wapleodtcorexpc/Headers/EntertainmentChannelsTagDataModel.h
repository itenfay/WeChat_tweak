//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi;

@interface EntertainmentChannelsTagDataModel : NSObject
{
    _Bool _continueFlag;
    _Bool _hasFetchData;
    _Bool _isFetchingData;
    _Bool _isFirstPageRequestFinished;
    NSString *_themeTag;
    NSData *_lastBuffer;
    NSMutableArray *_feedVMs;
    WCFinderBaseCgi *_requestCgi;
    unsigned long long _refreshInterval;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstPageRequestFinished; // @synthesize isFirstPageRequestFinished=_isFirstPageRequestFinished;
@property(nonatomic) unsigned long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) WCFinderBaseCgi *requestCgi; // @synthesize requestCgi=_requestCgi;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *feedVMs; // @synthesize feedVMs=_feedVMs;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *themeTag; // @synthesize themeTag=_themeTag;
- (void)resetModelState;
- (id)initWithTag:(id)arg1;

@end

