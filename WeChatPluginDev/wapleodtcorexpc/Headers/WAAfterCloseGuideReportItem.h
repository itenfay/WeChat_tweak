//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAfterCloseGuideReportItem
{
    unsigned int _dialogType;
    unsigned int _event;
}

@property(nonatomic) unsigned int event; // @synthesize event=_event;
@property(nonatomic) unsigned int dialogType; // @synthesize dialogType=_dialogType;
- (id)reportString;
- (int)reportID;

@end

