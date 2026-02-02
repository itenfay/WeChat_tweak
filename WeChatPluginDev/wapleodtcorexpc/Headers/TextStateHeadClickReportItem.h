//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TextStateHeadClickReportItem
{
    NSString *_toUsername;
    NSString *_toTextStateId;
    NSString *_toIconId;
    unsigned long long _scene;
    unsigned long long _hasTextStateIcon;
    unsigned long long _clickResult;
    unsigned long long _actionTimeStamp;
    NSString *_extInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(nonatomic) unsigned long long clickResult; // @synthesize clickResult=_clickResult;
@property(nonatomic) unsigned long long hasTextStateIcon; // @synthesize hasTextStateIcon=_hasTextStateIcon;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *toIconId; // @synthesize toIconId=_toIconId;
@property(copy, nonatomic) NSString *toTextStateId; // @synthesize toTextStateId=_toTextStateId;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (void)setEnumHasTextStateIcon:(_Bool)arg1;

@end

