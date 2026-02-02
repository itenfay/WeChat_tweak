//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MiaoJianShareReportModel
{
    unsigned int _type;
    unsigned int _outcome;
    unsigned int _templateType;
    NSString *_publicID;
    NSString *_sessionID;
    NSString *_localID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int outcome; // @synthesize outcome=_outcome;
@property(retain, nonatomic) NSString *publicID; // @synthesize publicID=_publicID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (unsigned int)uintOfStringValKey:(id)arg1 inDict:(id)arg2;
- (_Bool)containKey:(id)arg1 inDict:(id)arg2;
- (_Bool)isSupport:(id)arg1;
- (void)updateOutcome:(unsigned int)arg1 serverItem:(id)arg2 localItem:(id)arg3;
- (void)bindDataItem:(id)arg1;

@end

