//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceRankItem : NSObject
{
    unsigned int _uiRankNum;
    NSString *_nsRankId;
    NSString *_nsRankTitle;
}

@property(nonatomic) unsigned int uiRankNum; // @synthesize uiRankNum=_uiRankNum;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle=_nsRankTitle;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId=_nsRankId;

@end

