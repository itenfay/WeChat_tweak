//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCTopicReportSessionInputItem
{
    unsigned int _actionType;
    unsigned int _content;
}

@property(nonatomic) unsigned int content; // @synthesize content=_content;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (unsigned int)enterScene;
- (void)clearMembersAfterReport;
- (void)resetRequestId;

@end

