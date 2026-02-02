//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCNewYearHBDetailDataForSns : NSObject
{
    int _hbType;
    int _coverType;
    unsigned int _hbSendID;
    NSString *_username;
    NSString *_coverUrl;
    unsigned long long _money;
    NSString *_praise;
    NSMutableArray *_arrRewardItem;
    struct CGSize _coverSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize coverSize; // @synthesize coverSize=_coverSize;
@property(retain, nonatomic) NSMutableArray *arrRewardItem; // @synthesize arrRewardItem=_arrRewardItem;
@property(retain, nonatomic) NSString *praise; // @synthesize praise=_praise;
@property(nonatomic) unsigned long long money; // @synthesize money=_money;
@property(nonatomic) unsigned int hbSendID; // @synthesize hbSendID=_hbSendID;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int coverType; // @synthesize coverType=_coverType;
@property(nonatomic) int hbType; // @synthesize hbType=_hbType;

@end

