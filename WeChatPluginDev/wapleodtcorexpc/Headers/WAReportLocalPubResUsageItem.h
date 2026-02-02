//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportLocalPubResUsageItem
{
    unsigned int _pubLibType;
}

@property(nonatomic) unsigned int pubLibType; // @synthesize pubLibType=_pubLibType;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

