//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportOuterMenuActionItem
{
    unsigned int _actionTimeStamp;
    int _errcode;
    unsigned long long _outScene;
    unsigned long long _actionType;
    NSString *_actionNote;
    unsigned long long _actionResult;
    NSString *_shareId;
    long long _shareActionType;
    NSString *_shareTitle;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(nonatomic) long long shareActionType; // @synthesize shareActionType=_shareActionType;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(nonatomic) int errcode; // @synthesize errcode=_errcode;
@property(nonatomic) unsigned long long actionResult; // @synthesize actionResult=_actionResult;
@property(nonatomic) unsigned int actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(copy, nonatomic) NSString *actionNote; // @synthesize actionNote=_actionNote;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long outScene; // @synthesize outScene=_outScene;
- (id)reportString;

@end

