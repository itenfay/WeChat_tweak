//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BrandProfileShareHelper
{
}

+ (id)brandContactShareCardPersonalVerifyIdentity:(id)arg1 protectedInfo:(id)arg2;
+ (id)brandContactShareCardCertificationImage:(id)arg1 protectedInfo:(id)arg2 size:(struct CGSize)arg3;
+ (_Bool)shouldBrandContactShareCardShowPersonalVerifyIdentity:(id)arg1 protectedInfo:(id)arg2;
+ (_Bool)shouldBrandContactShareCardShowCertificationFlag:(id)arg1 protectedInfo:(id)arg2;
+ (id)bizNameCardProtectedInfoWithContent:(id)arg1;
+ (id)certificationImageWithCertFlag:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (id)genDictExtraInfoWithContact:(id)arg1 bizNameCard:(id)arg2;

@end

