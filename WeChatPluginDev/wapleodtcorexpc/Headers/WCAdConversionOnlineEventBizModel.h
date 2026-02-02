//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdConversionOnlineEventBizModel : NSObject
{
    int _downloadScene;
    int _actor;
    int _actCode;
    int _deeplinkScene;
    int _deeplinkType;
    int _autoDownload;
    int _dialogType;
    int _wvProgress;
    int _lpType;
    int _clickReqType;
    int _originErrorCode;
    NSString *_aid;
    NSString *_traceId;
    NSString *_pid;
    unsigned long long _costTime;
    NSString *_pageExitAction;
    NSString *_uxInfo;
    NSString *_vangoghId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *vangoghId; // @synthesize vangoghId=_vangoghId;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *pageExitAction; // @synthesize pageExitAction=_pageExitAction;
@property(nonatomic) int originErrorCode; // @synthesize originErrorCode=_originErrorCode;
@property(nonatomic) int clickReqType; // @synthesize clickReqType=_clickReqType;
@property(nonatomic) int lpType; // @synthesize lpType=_lpType;
@property(nonatomic) int wvProgress; // @synthesize wvProgress=_wvProgress;
@property(nonatomic) int dialogType; // @synthesize dialogType=_dialogType;
@property(nonatomic) int autoDownload; // @synthesize autoDownload=_autoDownload;
@property(nonatomic) int deeplinkType; // @synthesize deeplinkType=_deeplinkType;
@property(nonatomic) int deeplinkScene; // @synthesize deeplinkScene=_deeplinkScene;
@property(nonatomic) int actCode; // @synthesize actCode=_actCode;
@property(nonatomic) int actor; // @synthesize actor=_actor;
@property(nonatomic) int downloadScene; // @synthesize downloadScene=_downloadScene;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime=_costTime;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;

@end

