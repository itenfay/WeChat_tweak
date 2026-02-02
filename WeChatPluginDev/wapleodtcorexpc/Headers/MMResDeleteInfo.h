//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMResDeleteUrlInfo, NSString;

@interface MMResDeleteInfo
{
    unsigned int _resType;
    unsigned int _subResType;
    unsigned int _scene;
    unsigned int _reportId;
    NSString *_sampleId;
    MMResDeleteUrlInfo *_resDeleteUrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMResDeleteUrlInfo *resDeleteUrlInfo; // @synthesize resDeleteUrlInfo=_resDeleteUrlInfo;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int subResType; // @synthesize subResType=_subResType;
@property(nonatomic) unsigned int resType; // @synthesize resType=_resType;

@end

