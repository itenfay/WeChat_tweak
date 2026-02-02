//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMResDecryptUrlInfo, NSString;

@interface MMResDecryptInfo
{
    unsigned int _resType;
    unsigned int _subResType;
    unsigned int _eid;
    unsigned int _scene;
    unsigned int _reportId;
    NSString *_sampleId;
    MMResDecryptUrlInfo *_resDecryptInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMResDecryptUrlInfo *resDecryptInfo; // @synthesize resDecryptInfo=_resDecryptInfo;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int eid; // @synthesize eid=_eid;
@property(nonatomic) unsigned int subResType; // @synthesize subResType=_subResType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;

@end

