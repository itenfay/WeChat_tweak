//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandTimelineMsgDBDigestInfoItem
{
    _Bool _isBold;
    NSString *_digest;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
- (id)genItemReportDigest;
- (id)genItemAttrDigestWithoutBold;
- (id)genItemAttrDigest;

@end

