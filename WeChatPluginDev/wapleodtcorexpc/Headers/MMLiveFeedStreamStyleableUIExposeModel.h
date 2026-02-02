//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderWindowProductInfo, NSString;

@interface MMLiveFeedStreamStyleableUIExposeModel
{
    _Bool _reportKvExposeOnStart;
    unsigned long long _exposeTs;
    FinderWindowProductInfo *_productInfo;
    unsigned long long _tagType;
    unsigned long long _unreadCount;
    NSString *_lotteryId;
    NSString *_guideBarTxt;
    unsigned long long _guideBarType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long guideBarType; // @synthesize guideBarType=_guideBarType;
@property(retain, nonatomic) NSString *guideBarTxt; // @synthesize guideBarTxt=_guideBarTxt;
@property(retain, nonatomic) NSString *lotteryId; // @synthesize lotteryId=_lotteryId;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) _Bool reportKvExposeOnStart; // @synthesize reportKvExposeOnStart=_reportKvExposeOnStart;
@property(nonatomic) unsigned long long exposeTs; // @synthesize exposeTs=_exposeTs;

@end

