//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportTradeCommentItem : NSObject
{
    unsigned int _action;
    unsigned int _type;
    NSString *_actionNote;
}

@property(copy, nonatomic) NSString *actionNote; // @synthesize actionNote=_actionNote;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int scene;

@end

