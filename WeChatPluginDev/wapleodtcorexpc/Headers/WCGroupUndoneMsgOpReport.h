//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCGroupUndoneMsgOpReport
{
    _Bool _isShowEdu;
    unsigned int _exitType;
    unsigned int _actionType;
}

+ (void)DoGroupUndoneMsgOpReportWithItem:(id)arg1 actionType:(unsigned int)arg2 exitType:(unsigned int)arg3 isShowEdu:(_Bool)arg4;
@property(nonatomic) _Bool isShowEdu; // @synthesize isShowEdu=_isShowEdu;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned int exitType; // @synthesize exitType=_exitType;
- (void)report;

@end

