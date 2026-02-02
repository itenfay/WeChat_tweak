//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WaReportMessageVideoActionItem
{
    unsigned int _sceneType;
    unsigned int _operateType;
}

@property(nonatomic) unsigned int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) unsigned int sceneType; // @synthesize sceneType=_sceneType;
- (id)reportString;
- (int)reportID;

@end

