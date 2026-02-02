//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportPlateManageActionItem
{
    unsigned long long _callPageType;
    unsigned long long _halfPageOperation;
    unsigned long long _licensePlateOperation;
}

@property(nonatomic) unsigned long long licensePlateOperation; // @synthesize licensePlateOperation=_licensePlateOperation;
@property(nonatomic) unsigned long long halfPageOperation; // @synthesize halfPageOperation=_halfPageOperation;
@property(nonatomic) unsigned long long callPageType; // @synthesize callPageType=_callPageType;
- (id)reportString;
- (int)reportID;

@end

