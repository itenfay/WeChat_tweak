//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WASyncIssueLaunchCmd
{
    unsigned int _useBeginTime;
    unsigned int _useEndTime;
    NSString *_launchInfoString;
    NSMutableArray *_sceneList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int useEndTime; // @synthesize useEndTime=_useEndTime;
@property(nonatomic) unsigned int useBeginTime; // @synthesize useBeginTime=_useBeginTime;
@property(retain, nonatomic) NSMutableArray *sceneList; // @synthesize sceneList=_sceneList;
@property(copy, nonatomic) NSString *launchInfoString; // @synthesize launchInfoString=_launchInfoString;
- (id)description;

@end

