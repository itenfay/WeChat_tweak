//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SportRecord;

@interface DeviceRankLikeCellInfo
{
    unsigned int uiScore;
    unsigned int uiRankNum;
    unsigned int uiLikeCount;
    unsigned int uiLikeState;
    NSString *nsUserName;
    SportRecord *_record;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SportRecord *record; // @synthesize record=_record;
@property(nonatomic) unsigned int uiLikeState; // @synthesize uiLikeState;
@property(nonatomic) unsigned int uiLikeCount; // @synthesize uiLikeCount;
@property(nonatomic) unsigned int uiRankNum; // @synthesize uiRankNum;
@property(nonatomic) unsigned int uiScore; // @synthesize uiScore;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;

@end

