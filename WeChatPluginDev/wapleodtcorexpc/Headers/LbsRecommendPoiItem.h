//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface LbsRecommendPoiItem
{
    NSString *nsTitle;
    NSString *nsSubTitle;
    NSString *nsDesc;
    NSString *nsIconUrl;
    NSString *nsJumpUrl;
    NSString *nsSignature;
    NSMutableArray *aryADIconUrlList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *aryADIconUrlList; // @synthesize aryADIconUrlList;
@property(retain, nonatomic) NSString *nsSignature; // @synthesize nsSignature;
@property(retain, nonatomic) NSString *nsJumpUrl; // @synthesize nsJumpUrl;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc;
@property(retain, nonatomic) NSString *nsIconUrl; // @synthesize nsIconUrl;
@property(retain, nonatomic) NSString *nsSubTitle; // @synthesize nsSubTitle;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle;

@end

