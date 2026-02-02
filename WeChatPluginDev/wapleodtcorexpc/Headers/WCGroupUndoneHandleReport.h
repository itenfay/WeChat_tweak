//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCGroupUndoneHandleReport
{
    unsigned int _actionType;
    unsigned int _exitType;
}

+ (void)DoGroupUndoneHandleReportWithItem:(id)arg1 actionType:(unsigned int)arg2 exitType:(unsigned int)arg3;
@property(nonatomic) unsigned int exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (void)report;

@end

