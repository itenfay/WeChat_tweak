//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveNoticeDetailsReservationParameters : NSObject
{
    _Bool _reportingUseDefaultAdData;
    _Bool _reportingClearAdDataAfterReportForBook;
    unsigned int _scene;
    int _reportScene;
    unsigned int _enterType;
    NSString *_promoterToken;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reportingClearAdDataAfterReportForBook; // @synthesize reportingClearAdDataAfterReportForBook=_reportingClearAdDataAfterReportForBook;
@property(nonatomic) _Bool reportingUseDefaultAdData; // @synthesize reportingUseDefaultAdData=_reportingUseDefaultAdData;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSString *promoterToken; // @synthesize promoterToken=_promoterToken;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;

@end

