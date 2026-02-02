//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CgiReportDataModel, CgiRouterInfo;

@interface CgiReportDataTask : NSObject
{
    unsigned int _doCgiReqCount;
    CgiRouterInfo *_info;
    CgiReportDataModel *_dataModel;
    unsigned long long _doCgiReqTimeMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long doCgiReqTimeMs; // @synthesize doCgiReqTimeMs=_doCgiReqTimeMs;
@property(nonatomic) unsigned int doCgiReqCount; // @synthesize doCgiReqCount=_doCgiReqCount;
@property(retain, nonatomic) CgiReportDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) CgiRouterInfo *info; // @synthesize info=_info;
- (void)logTaskInfo;
- (unsigned int)valueTranslate:(unsigned int)arg1 andArr:(id)arg2 andKeyBegin:(unsigned int)arg3 andKeyEnd:(unsigned int)arg4;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)doCgiRequest;
- (unsigned int)getConfigTryCount;
- (id)setCanNotTry;
- (id)initWith:(id)arg1 andData:(id)arg2;

@end

