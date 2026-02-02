//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BrandTimelineResortDigestUtil
{
}

+ (id)getBrandTimelineMsgWrapFromDb:(id)arg1;
+ (_Bool)shouldUseResortAttrDigest:(id)arg1;
+ (id)genReportDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1;
+ (id)genAttrDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1 shouldBold:(_Bool)arg2;
+ (id)toJsonWithDigestInfo:(id)arg1;
+ (_Bool)isDigestInfoValid:(id)arg1;

@end

