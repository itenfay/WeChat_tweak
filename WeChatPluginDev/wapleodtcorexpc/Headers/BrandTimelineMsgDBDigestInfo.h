//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface BrandTimelineMsgDBDigestInfo
{
    unsigned int _flag;
    NSMutableArray *_items;
    NSString *_strategyInfo;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *strategyInfo; // @synthesize strategyInfo=_strategyInfo;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (id)genReportDigest;
- (id)genAttrDigest:(_Bool)arg1;
- (id)toJson;
- (void)internalInit:(id)arg1;
- (id)initFromJson:(id)arg1;
- (id)initWithDigestInfo:(id)arg1;

@end

