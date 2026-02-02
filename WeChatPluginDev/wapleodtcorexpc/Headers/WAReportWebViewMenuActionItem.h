//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportWebViewMenuActionItem
{
    unsigned int _actionTimeStamp;
    int _errcode;
    unsigned long long _actionType;
    NSString *_actionNote;
    unsigned long long _actionResult;
}

- (void).cxx_destruct;
@property(nonatomic) int errcode; // @synthesize errcode=_errcode;
@property(nonatomic) unsigned long long actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned int actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(copy, nonatomic) NSString *actionNote; // @synthesize actionNote=_actionNote;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (id)reportString;

@end

